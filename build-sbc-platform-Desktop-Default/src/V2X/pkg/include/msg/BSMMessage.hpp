#ifndef BSM_MESSAGE_HPP_
#define BSM_MESSAGE_HPP_

#include "IV2XMessage.hpp"
#include "data_frames/BSMcoreData.hpp"

/*
 * The basic safety message (BSM) is used in a variety
 * of applications to exchange safety data regarding vehicle state.
 * This message is broadcast frequently to surrounding
 * vehicles with data content as required by safety
 * and other applications. Transmission rates are beyond
 * the scope of this standard, but a rate 10 times per second
 * is typical when congestion control algorithms
 * do not prescribe a reduced rate.
 * Part I data shall be included in every BSM.
 * Part II data items are optional for a given BSM
 * and are included as needed according to policies that are
 * beyond the scope of this standard.
 * A BSM without Part II optional content is a valid message.
*/

namespace v2x {
namespace msg {

using namespace v2x::frame;

class BSMMessage: public IV2XMessage {
  public:
    BSMMessage();
    virtual ~BSMMessage() override;

    void setV2XParams(const std::shared_ptr<CBSMcoreData> src);
    void getV2XParams(std::shared_ptr<CBSMcoreData> dest);

    virtual void setMessageFrame(std::shared_ptr<MessageFrame_t> frame) override;
    virtual std::shared_ptr<MessageFrame_t> getMessageFrame() override;
    virtual V2XMessageType getType() override {
        return V2XMessageType::BSM;
    }

  private:
    void freeBSMMsgMem(const std::shared_ptr<MessageFrame_t> &msgFrame);
    std::shared_ptr<MessageFrame_t> messageFrame_;
};

} /* msg */
} /* v2x */

#endif /* BSM_MESSAGE_HPP_ */
