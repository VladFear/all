#ifndef SPAT_MESSAGE_HPP_
#define SPAT_MESSAGE_HPP_

#include "IV2XMessage.hpp"
#include "data_frames/TrafficLightStatus.hpp"

namespace v2x {
namespace msg {

using namespace v2x::frame;

class SPATMessage: public IV2XMessage {
  public:
    SPATMessage();
    virtual ~SPATMessage() override;

    void setV2XParams(const std::shared_ptr<TrafficLightStatus> src);
    void getV2XParams(std::shared_ptr<TrafficLightStatus> dest);

    virtual void setMessageFrame(std::shared_ptr<MessageFrame_t> frame) override;
    virtual std::shared_ptr<MessageFrame_t> getMessageFrame() override;
    virtual V2XMessageType getType() override {
        return V2XMessageType::SPAT;
    }

  private:
    std::shared_ptr<MessageFrame_t> messageFrame_;
    void freeSPATMsgMem(const std::shared_ptr<MessageFrame_t> &msgFrame);
};

} /* msg */
} /* v2x */

#endif /* SPAT_MESSAGE_HPP_ */
