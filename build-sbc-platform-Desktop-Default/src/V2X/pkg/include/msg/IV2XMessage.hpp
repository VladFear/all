#ifndef IV2X_MESSAGE_HPP_
#define IV2X_MESSAGE_HPP_

#include <memory>
#include "MessageFrame.h"

enum class V2XMessageType {
    BSM         = 0,
    MAP         = 1,
    ICA         = 2,
    SPAT        = 3,
    EVA         = 4,

    UNKNOWN     = 99
};

class IV2XMessage {
  public:
    // TODO: remove direct links to MessageFrame_t from public interface
    virtual void setMessageFrame(std::shared_ptr<MessageFrame_t>) = 0;
    virtual std::shared_ptr<MessageFrame_t> getMessageFrame() = 0;
    virtual V2XMessageType getType() = 0;
    virtual ~IV2XMessage() {}
};

#endif /* IV2X_MESSAGE_HPP_ */
