#pragma once

#include <ASN1Exch.h>

void setupSubscriptions();
void dropSubscriptions();

void onBSMMessageReceived(std::shared_ptr<v2x::frame::CBSMcoreData> car);
void onMAPMessageReceived(std::shared_ptr<v2x::frame::MapUpdate> map);
void onSPATMessageReceived(std::shared_ptr<v2x::frame::TrafficLightStatus> tl);
void onEVAMessageReceived(std::shared_ptr<v2x::frame::EmergencyVehicle> eCar);
void onICAMessageReceived(std::shared_ptr<v2x::frame::IntersectionCollisionAvoidance> icCar);
