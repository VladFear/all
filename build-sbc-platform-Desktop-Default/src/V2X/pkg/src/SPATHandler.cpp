#include "SPATHandler.h"

#include <iostream>
#include <string>
#include <thread>



void fillTmpSPATData(std::shared_ptr<v2x::frame::TrafficLightStatus> tl)
{
    v2x::frame::CIntersectionReferenceID IntersecID{v2x::frame::CRoadRegulatorID(111), v2x::frame::CIntersectionID(11)};
    CBitString<16> status1(4);
    CBitString<16> status2(3);


    ////////////////////////////////////
    auto state1 = std::make_shared<v2x::frame::CIntersectionState>();
    state1->id = IntersecID;
    state1->status = status1;
    state1->enabledLanes.push_back(v2x::frame::CLaneID(1));
    state1->enabledLanes.push_back(v2x::frame::CLaneID(2));

    // TODO: make work with CMovementState more convenient
    auto moveState1 = std::make_shared<v2x::frame::CMovementState>();
    auto moveEvent1 = std::make_shared<v2x::frame::CMovementEvent>();
    v2x::frame::CTimeMark t1(1222233);
    moveEvent1->timing.minEndTime = t1;
    moveState1->stateTimeSpeed.push_back(*moveEvent1);
    state1->states.push_back(*moveState1);

    ////////////////////////////////////
    auto state2 = std::make_shared<v2x::frame::CIntersectionState>();
    state2->status = status2;
    state2->id = IntersecID;
    state2->enabledLanes.push_back(v2x::frame::CLaneID(3));
    state2->enabledLanes.push_back(v2x::frame::CLaneID(4));

    // TODO: make work with CMovementState more convenient
    auto moveState2 = std::make_shared<v2x::frame::CMovementState>();
    auto moveEvent2 = std::make_shared<v2x::frame::CMovementEvent>();
    v2x::frame::CTimeMark t2(1222444);
    moveEvent2->timing.minEndTime = t2;
    moveState2->stateTimeSpeed.push_back(*moveEvent2);
    state2->states.push_back(*moveState2);

    ////////////////////////////////////
    v2x::frame::CDescriptiveName name;
    name.set("TL1");
    tl->name = name;
    tl->intersections.push_back(state1);
    tl->intersections.push_back(state2);
}

void startSPAT()
{
    while (1){
        auto tl = std::make_shared<v2x::frame::TrafficLightStatus>();

        // TODO: remove tmp code
        fillTmpSPATData(tl);

        std::cout << "[Send SPAT] (state1)id=" << static_cast<IntersectionID_t>(tl->intersections[0]->id.id)
                  << ", statesCnt=" << tl->intersections.size() << std::endl;
        const std::string& ip = "255.255.255.255"; //TODO: remove hardcode
        const std::string& mask = "255.255.255.255"; //TODO: remove hardcode
        sendSPAT( tl, ip, mask );

        std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    }
}
