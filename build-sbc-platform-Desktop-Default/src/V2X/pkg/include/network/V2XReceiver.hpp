#pragma once

#include <iostream>
#include <set>
#include <boost/array.hpp>
#include <boost/bind.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/asio.hpp>

#include "msg/BSMMessage.hpp"
#include "msg/EVAMessage.hpp"
#include "msg/MAPMessage.hpp"
#include "msg/SPATMessage.hpp"
#include "msg/ICAMessage.hpp"
#include "data_frames/BSMcoreData.hpp"
#include "data_frames/EmergencyVehicle.hpp"
#include "data_frames/MapUpdate.hpp"
#include "data_frames/IntersectionCollisionAvoidance.hpp"
#include "data_frames/TrafficLightStatus.hpp"

namespace v2x {

using namespace boost::system;
using namespace boost::asio;
using boost::asio::ip::udp;

class V2XReceiver
{
private:

  udp::socket socket_;
  udp::endpoint remote_endpoint_;
  boost::array<uint8_t, 1024> recv_buffer_;
  int m_length;
  int m_lat;
  int m_long;
  std::set<void(*)(std::shared_ptr<CBSMcoreData>)> m_BSMcallbacks;
  std::set<void(*)(std::shared_ptr<EmergencyVehicle>)> m_EVAcallbacks;
  std::set<void(*)(std::shared_ptr<IntersectionCollisionAvoidance>)>  m_ICAcallbacks;
  std::set<void(*)(std::shared_ptr<MapUpdate>)> m_MAPcallbacks;
  std::set<void(*)(std::shared_ptr<TrafficLightStatus>)> m_SPATcallbacks;

  void start_receive();  
  void handle_receive(const boost::system::error_code& error, std::size_t /*bytes_transferred*/);
  void handle_BSM_receive(std::shared_ptr<v2x::msg::BSMMessage>);
  void handle_EVA_receive(std::shared_ptr<v2x::msg::EVAMessage>);
  void handle_ICA_receive(std::shared_ptr<v2x::msg::ICAMessage>);
  void handle_MAP_receive(std::shared_ptr<v2x::msg::MAPMessage>);
  void handle_SPAT_receive(std::shared_ptr<v2x::msg::SPATMessage>);

public:
  void addBSMcallback(void (*Callback)(std::shared_ptr<CBSMcoreData>)){ m_BSMcallbacks.insert(Callback);}
  void addEVAcallback(void (*Callback)(std::shared_ptr<EmergencyVehicle>)){ m_EVAcallbacks.insert(Callback);}
  void addICAcallback(void (*Callback)(std::shared_ptr<IntersectionCollisionAvoidance>)){ m_ICAcallbacks.insert(Callback);}
  void addMAPcallback(void (*Callback)(std::shared_ptr<MapUpdate>)){ m_MAPcallbacks.insert(Callback);}
  void addSPATcallback(void (*Callback)(std::shared_ptr<TrafficLightStatus>)){ m_SPATcallbacks.insert(Callback);}
  void setLength(int len){m_length = len;}
  void setPos(int lat_, int long_)
  {
      m_lat = lat_;
      m_long = long_;
  }
  V2XReceiver(boost::asio::io_service& io_service);
  
};

} //v2x
