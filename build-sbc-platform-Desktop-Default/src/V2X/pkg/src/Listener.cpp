#include "Listener.h"

#include <thread>
#include <iostream>


void setupSubscriptions()
{
    std::thread([] {
        subscribeBSM(onBSMMessageReceived);
    }).detach();

    std::thread([] {
        subscribeMAP(onMAPMessageReceived);
    }).detach();

    std::thread([] {
        subscribeSPAT(onSPATMessageReceived);
    }).detach();

    std::thread([] {
        subscribeEVA(onEVAMessageReceived);
    }).detach();

    std::thread([] {
        subscribeICA(onICAMessageReceived);
    }).detach();
}

void dropSubscriptions()
{
    // TODO
}

void onBSMMessageReceived(std::shared_ptr<v2x::frame::CBSMcoreData> car)
{
    CTemporaryID tId = car->tempId;
    long lat = static_cast<long>(car->latitude);
    long lon = static_cast<long>(car->longitude);
    long speed = static_cast<long>(car->speed);
    long elev = static_cast<Elevation_t>(car->elevation);
    long msgCount = static_cast<MsgCount_t>(car->msgCount);

    std::cout << "BSM msg received id=" << static_cast<std::string>(tId).c_str() << " lat=" << lat << " lon=" << lon << " elev=" << elev << " speed=" << speed << " MSGcount=" << msgCount << std::endl;
}

void onMAPMessageReceived(std::shared_ptr<v2x::frame::MapUpdate> map)
{
    // TODO
    std::cout << "MAP msg received intersecCnt=" << map->intersections.size() << std::endl;
}

void onSPATMessageReceived(std::shared_ptr<v2x::frame::TrafficLightStatus> tl)
{
    std::string intId = std::to_string( static_cast<IntersectionID_t>(tl->intersections[0]->id.id));

    std::string lanes = "";
    for (auto lane: tl->intersections[0]->enabledLanes) {
        lanes +=  " " + intId + "-" + std::to_string( static_cast<LaneID_t>(lane) ) + ",";
    }

    long statePhase = static_cast<long>(tl->intersections[0]->states[0].stateTimeSpeed[0].eventState);

    std::cout << "TrafficLight msg received " << std::to_string(statePhase) << " -> " << lanes << std::endl;
}

void onEVAMessageReceived(std::shared_ptr<v2x::frame::EmergencyVehicle> eCar)
{
    CTemporaryID tId = eCar->id;
    long msgCount = static_cast<long>(eCar->rsaMsg.msgCnt);
    double lat = static_cast<double>(eCar->rsaMsg.position.latitude_field);
    double lon = static_cast<double>(eCar->rsaMsg.position.longtitude_field);
    double speed = static_cast<double>(eCar->rsaMsg.position.speed_field.speed_field);

    std::cout << "EVA msg received id=" << static_cast<std::string>(tId).c_str() << " lat=" << lat << " lon=" << lon << " speed=" << speed << " msgCount= " << msgCount << std::endl;
}

void onICAMessageReceived(std::shared_ptr<v2x::frame::IntersectionCollisionAvoidance> icCar)
{
    CIntersectionID intersecId = static_cast<IntersectionID_t>(icCar->intersectionID.id);
    v2x::frame::CBSMcoreData car = icCar->partOne;
    CTemporaryID tId = car.tempId;
    long lat = static_cast<long>(car.latitude);
    long lon = static_cast<long>(car.longitude);
    long speed = static_cast<long>(car.speed);

    std::cout << "ICA msg received id=" << static_cast<std::string>(tId).c_str() << " lat=" << lat << " lon=" << lon << " speed=" << speed
              << " intersectionId=" << static_cast<IntersectionID_t>(intersecId) << std::endl;
}

