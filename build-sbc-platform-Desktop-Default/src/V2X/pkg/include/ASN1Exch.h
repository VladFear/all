#include "data_frames/BSMcoreData.hpp"
#include "data_frames/EmergencyVehicle.hpp"
#include "data_frames/MapUpdate.hpp"
#include "data_frames/TrafficLightStatus.hpp"
#include "data_frames/IntersectionCollisionAvoidance.hpp"

#include <memory>

#define BSM_LEN 100
#define ICA_LEN 100
#define EVA_LEN 100
#define MAP_LEN 100
#define SPAT_LEN 100

long int sendBSM( std::shared_ptr<v2x::frame::CBSMcoreData> src, const std::string& ip, const std::string& mask );
long int sendBSM( v2x::frame::CBSMcoreData *src, const std::string& ip, const std::string& mask );
void subscribeBSM( void (*Callback)(std::shared_ptr<v2x::frame::CBSMcoreData>), int len = BSM_LEN);
void unsubscribeBSM(  );

long int sendEVA(std::shared_ptr<v2x::frame::EmergencyVehicle> src, const std::string& ip, const std::string& mask );
long int sendEVA(v2x::frame::EmergencyVehicle* src, const std::string& ip, const std::string& mask );
void subscribeEVA( void (*Callback)(std::shared_ptr<v2x::frame::EmergencyVehicle>), int len = EVA_LEN);
void unsubscribeEVA(  );

long int sendMAP( std::shared_ptr<v2x::frame::MapUpdate> src, const std::string& ip, const std::string& mask );
long int sendMAP( v2x::frame::MapUpdate *src, const std::string& ip, const std::string& mask );
void subscribeMAP( void (*Callback)(std::shared_ptr<v2x::frame::MapUpdate>), int len = MAP_LEN);
void unsubscribeMAP(  );

long int sendSPAT( std::shared_ptr<v2x::frame::TrafficLightStatus> src, const std::string& ip, const std::string& mask );
long int sendSPAT( v2x::frame::TrafficLightStatus *src, const std::string& ip, const std::string& mask);
void subscribeSPAT( void (*Callback)(std::shared_ptr<v2x::frame::TrafficLightStatus>), int len = SPAT_LEN);
void unsubscribeSPAT(  );

long int sendICA( std::shared_ptr<v2x::frame::IntersectionCollisionAvoidance> src, const std::string& ip, const std::string& mask );
long int sendICA(v2x::frame::IntersectionCollisionAvoidance *src, const std::string& ip, const std::string& mask);
void subscribeICA( void (*Callback)(std::shared_ptr<v2x::frame::IntersectionCollisionAvoidance>), int len = ICA_LEN);
void unsubscribeICA(  );
