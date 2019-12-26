#include "ICAHandler.h"

#include <iostream>
#include <string>
#include <thread>

#include <TempIdKeeper.hpp>

using namespace v2x::frame;

void startICA(int id)
{

    while (1) {
        TempIdKeeper keeper(id,11,id,11);
        CTemporaryID tId = keeper.generateTempId();
        CVehicleSize vSize{3, 6};
        CApproachOrLane lane;

        static long lat = 1;
        static long lon = 1;
        static long speed = 1;

        v2x::frame::CBSMcoreData car;
        car.tempId = tId;
        car.latitude.set(lat++);
        car.longitude.set(lon++);
        car.speed.set(speed++);
        car.heading.set(180);
        car.vehicleSize = vSize;
        lane.lane.set(4);
        v2x::frame::CIntersectionReferenceID intersecId {11, 111};

        auto ica = std::make_shared<v2x::frame::IntersectionCollisionAvoidance>();
        ica->intersectionID = intersecId;
        ica->tempId = tId;
        ica->partOne = car;
        ica->laneNumber = lane;
        CBitString<13> eventFlag(3);
        ica->eventFlag = eventFlag;


        std::cout << "[Send ICA] id=" << static_cast<std::string>(tId).c_str() << " lat=" << lat << " lon=" << lon << " speed=" << speed
                   << " intersectionId=" << static_cast<IntersectionID_t>(intersecId.id )<< std::endl;
        const std::string& ip = "255.255.255.255"; //TODO: remove hardcode
        const std::string& mask = "255.255.255.255"; //TODO: remove hardcode
        sendICA( ica, ip, mask );

        if (lat > 89)
            lat = 1;
        if (lon > 179)
            lon = 1;
        if (speed > 162)
            speed = 1;

        std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    }
}
