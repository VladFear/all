#ifndef ICA_MESSAGE_HPP_
#define ICA_MESSAGE_HPP_

#include "data_frames/IntersectionCollisionAvoidance.hpp"
#include "IV2XMessage.hpp"

/*
 * This message is intended to be used to broadcast to other DSRC devces in the area a warning of a potential
 * collision with a vehicle that is likely to be entering an intersection without the right of way. The sender may be either an
 * equipped vehicle or another source such as the infrastructure.
*/

using namespace v2x::frame;

namespace v2x {
namespace msg {

class ICAMessage : public IV2XMessage {
  public:
    ICAMessage();
    virtual ~ICAMessage() override;

    void setV2XParams(const std::shared_ptr<IntersectionCollisionAvoidance> src);
    void getV2XParams(std::shared_ptr<IntersectionCollisionAvoidance> dest);

    virtual void setMessageFrame(std::shared_ptr<MessageFrame_t> frame) override;
    virtual std::shared_ptr<MessageFrame_t> getMessageFrame() override;
    virtual V2XMessageType getType() override {
        return V2XMessageType::ICA;
    }

  private:
    std::shared_ptr<MessageFrame_t> messageFrame_;
    void freeICAMsgMem(const std::shared_ptr<MessageFrame_t> &msgFrame);
};

} /* msg */
} /* v2x */

#endif /* ICA_MESSAGE_HPP_ */
