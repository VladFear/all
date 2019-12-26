#include "EVAHandler.h"

#include <iostream>
#include <string>
#include <thread>

#include <TempIdKeeper.hpp>

using namespace v2x::frame;

void startEVA(int id)
{
    TempIdKeeper keeper(id,11,id,11);
    CTemporaryID tId = keeper.generateTempId();
    CVehicleSize vSize{3, 6};

    while (1) {
        static long lat = 1;
        static long lon = 1;
        static long speed = 1;

        auto eCar = std::make_shared<v2x::frame::EmergencyVehicle>();
        eCar->id = tId;
        eCar->rsaMsg.position.latitude_field = lat++;
        eCar->rsaMsg.position.longtitude_field = lon++;
        eCar->rsaMsg.position.speed_field.speed_field = speed++;
        eCar->rsaMsg.position.heading_field = 180;
//        eCar->mass = vSize;

        std::cout << "[Send EVA] id=" << static_cast<std::string>(tId).c_str() << " lat=" << lat << " lon=" << lon << " speed=" << speed << std::endl;
        const std::string& ip = "255.255.255.255"; //TODO: remove hardcode
        const std::string& mask = "255.255.255.255"; //TODO: remove hardcode
        sendEVA( eCar, ip, mask );

        if (lat > 89)
            lat = 1;
        if (lon > 179)
            lon = 1;
        if (speed > 162)
            speed = 1;

        std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    }
}
