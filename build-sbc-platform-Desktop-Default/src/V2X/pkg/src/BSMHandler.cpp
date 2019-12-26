#include "BSMHandler.h"

#include <iostream>
#include <string>
#include <thread>

#include <TempIdKeeper.hpp>

using namespace v2x::frame;

void startBSM(int id)
{
    CVehicleSize vSize{3, 6};

    while (1) {
        TempIdKeeper keeper(id,11,id,11);
        CTemporaryID tId = keeper.generateTempId();
        static long lat = 1;
        static long lon = 1;
        static long speed = 1;
        static long elev = 1;

        v2x::frame::CBSMcoreData car;
        car.tempId = tId;
        car.latitude.set(lat++);
        car.longitude.set(lon++);
        car.elevation.set(elev);
        car.speed.set(speed++);
        car.heading.set(180);
        car.vehicleSize = vSize;
        CBrakeSystemStatus status;
        status.wheelBrakes.set(4);
        car.brakeSystemStatus = status;

        std::cout << "[Send BSM] id=" <<static_cast<std::string>(tId).c_str() << " lat=" << lat << " lon=" << lon << " elev=" << elev << " speed=" << speed << std::endl;
        const std::string& ip = "255.255.255.255"; //TODO: remove hardcode
        const std::string& mask = "255.255.255.255"; //TODO: remove hardcode
        sendBSM( &car, ip, mask );

        if (lat > 89)
            lat = 1;
        if (lon > 179)
            lon = 1;
        if (speed > 162)
            speed = 1;

        std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    }
}
