#ifndef MAP_MESSAGE_HPP_
#define MAP_MESSAGE_HPP_

#include "data_frames/MapUpdate.hpp"
#include "IV2XMessage.hpp"

/*
 * The MapData message is used to convey many types of geographic road information. At the current time its primary
 * use is to convey one or more intersection lane geometry maps within a single message. The map message content
 * includes such items as complex intersection descriptions, road segment descriptions, high speed curve outlines (used in
 * curve safety messages), and segments of roadway (used in some safety applications). A given single MapData message
 * may convey descriptions of one or more geographic areas or intersections. The contents of this message involve defining
 * the details of indexing systems that are in turn used by other messages to relate additional information (for example, the
 *  signal phase and timing via the SPAT message) to events at specific geographic locations on the roadway.
*/

namespace v2x {
namespace msg {

using namespace v2x::frame;

class MAPMessage: public IV2XMessage {
  public:
    MAPMessage();
    virtual ~MAPMessage() override;

    void setV2XParams(const std::shared_ptr<MapUpdate> src);
    void getV2XParams(std::shared_ptr<MapUpdate> dest);

    virtual void setMessageFrame(std::shared_ptr<MessageFrame_t> frame) override;
    virtual std::shared_ptr<MessageFrame_t> getMessageFrame() override;

    virtual V2XMessageType getType() override {
        return V2XMessageType::MAP;
    }

  private:
    void freeMAPMsgMem(const std::shared_ptr<MessageFrame_t> &msgFrame);
    std::shared_ptr<MessageFrame_t> messageFrame_ = nullptr;

};

} /* msg */
} /* v2x */

#endif /* MAP_MESSAGE_HPP_ */
