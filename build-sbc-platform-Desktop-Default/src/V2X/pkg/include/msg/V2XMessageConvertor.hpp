#pragma once

#include <memory>
#include <cstdint>
#include <cstddef>

#include "MessageFrame.h"

#include "msg/IV2XMessage.hpp"
#include "msg/BSMMessage.hpp"
#include "msg/MAPMessage.hpp"
#include "msg/EVAMessage.hpp"
#include "msg/SPATMessage.hpp"
#include "msg/ICAMessage.hpp"
#include <map>

class V2XMessageConvertor {
  public:
    V2XMessageConvertor();
    virtual ~V2XMessageConvertor();
    enum ASN_LIB_STATUSES {
        ENCODE_FAILED = -1,
    };

    void setV2XMessage(std::shared_ptr<IV2XMessage> msg);
    std::shared_ptr<v2x::msg::BSMMessage> createBSM();
    std::shared_ptr<v2x::msg::EVAMessage> createEVA();
    std::shared_ptr<v2x::msg::ICAMessage> createICA();
    std::shared_ptr<v2x::msg::MAPMessage> createMAP();
    std::shared_ptr<v2x::msg::SPATMessage> createSPAT();

    V2XMessageType getMessageType() const;

    void encode();
    void decode();
    std::shared_ptr<uint8_t> data() const;
    size_t size() const;
    void setRecv(uint8_t * buffer, size_t size);

  private:
    int getMessageId(const std::shared_ptr<IV2XMessage> msg);
    std::shared_ptr<MessageFrame_t> createMessageFrame(const std::shared_ptr<IV2XMessage> msg);

  private:
    std::shared_ptr<IV2XMessage> message_;

    std::shared_ptr<uint8_t> dataToSend_;
    uint8_t *dataReceived;
    std::size_t sizeDataToSend_;
    std::size_t sizeDataReceived;
    std::map<V2XMessageType, int> cMsgType;
};
