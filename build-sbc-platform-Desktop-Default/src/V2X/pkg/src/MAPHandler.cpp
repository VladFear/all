#include "MAPHandler.h"

#include <iostream>
#include <string>
#include <thread>


void fillTmpMAPData(std::shared_ptr<v2x::frame::MapUpdate> map)
{
    using namespace v2x::element;
    using namespace v2x::frame;

    //////////////////////////////////////////////////////////////////
    CBitString<12> maneurLaneChange;
    maneurLaneChange.set(AllowedManeuvers_maneuverLaneChangeAllowed);
    CBitString<12> maneurRight;
    maneurRight.set(AllowedManeuvers_maneuverRightAllowed);

    CIntersectionReferenceID id1{CRoadRegulatorID(111), CIntersectionID(11)};
    auto int1 = std::make_shared<CIntersectionGeometry>(id1);

    CPosition3D pos1 {66,66,1};
    int1->refPoint_field = pos1;

    auto lane1_1 = std::make_shared<CGenericLane>(1, id1);

    CLaneAttributes laneAttributes;
    laneAttributes.laneType_field.set_vehicle(0);
    CBitString<2> directionalUse;
    directionalUse.set(CLaneAttributes::LaneDirection::egressPath);
    laneAttributes.directionalUse_field = directionalUse;

    lane1_1->laneAttributes_field  = laneAttributes;
    lane1_1->nodeList_field.nodes.push_back(CPosition3D(66,43));
    lane1_1->nodeList_field.nodes.push_back(CPosition3D(66,33));
    lane1_1->nodeList_field.nodes.push_back(CPosition3D(66,22));

    auto lane1_2 = std::make_shared<CGenericLane>(2, id1);
    lane1_2->laneAttributes_field = laneAttributes;
    lane1_2->nodeList_field.nodes.push_back(CPosition3D(70,43));
    lane1_2->nodeList_field.nodes.push_back(CPosition3D(70,33));

    // Lane change connections
    lane1_1->addConnection(lane1_2, maneurLaneChange);
    lane1_2->addConnection(lane1_1, maneurLaneChange);

    int1->laneWidth_field.set(3);
    int1->name_field.set("intersec 1");
    int1->addLane(lane1_1);
    int1->addLane(lane1_2);

    //////////////////////////////////////////////////////////////////
    CIntersectionReferenceID id2{CRoadRegulatorID(111), CIntersectionID(22)};
    auto int2 = std::make_shared<CIntersectionGeometry>(id2);

    CPosition3D pos2 {88,77,2};
    int2->refPoint_field  = pos2;

    auto lane2_1 = std::make_shared<CGenericLane>(1, id2);
    lane2_1->laneAttributes_field = laneAttributes;
    lane2_1->nodeList_field.nodes.push_back(CPosition3D(12,14));
    lane2_1->nodeList_field.nodes.push_back(CPosition3D(12,18));

    auto lane2_2 = std::make_shared<CGenericLane>(2, id2);
    lane2_2->laneAttributes_field = laneAttributes;
    lane2_2->nodeList_field.nodes.push_back(CPosition3D(21,14));
    lane2_2->nodeList_field.nodes.push_back(CPosition3D(21,18));
    lane2_2->nodeList_field.nodes.push_back(CPosition3D(21,22));

    // Lane change connections
    lane2_1->addConnection(lane2_2, maneurLaneChange);
    lane2_2->addConnection(lane2_1, maneurLaneChange);
    // Lane turn right connections
    lane2_1->addConnection(lane1_1, maneurRight);
    lane2_2->addConnection(lane1_2, maneurRight);

    int2->laneWidth_field.set(2);
    int2->name_field.set("intersec 2");
    int2->addLane(lane2_1);
    int2->addLane(lane2_2);

    //////////////////////////////////////////////////////////////////
    CIntersectionGeometryList intersections;
    intersections.push_back(int1);
    intersections.push_back(int2);

    map->intersections = intersections;
    map->layerID = 1;
    map->layerType = LayerType_intersectionData;

}

void startMAP()
{
    while (1){
        auto map = std::make_shared<v2x::frame::MapUpdate>();

        // TODO: remove tmp code
        fillTmpMAPData(map);

        std::cout << "[Send MAP] intersecCnt=" << map->intersections.size() << std::endl;
        const std::string& ip = "255.255.255.255"; //TODO: remove hardcode
        const std::string& mask = "255.255.255.255"; //TODO: remove hardcode
        sendMAP( map, ip, mask );

        std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    }
}
