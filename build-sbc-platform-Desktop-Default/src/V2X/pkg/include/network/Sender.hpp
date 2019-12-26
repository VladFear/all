#pragma once

#include <cstdint>
#include <cstddef>
#include <memory>

#include "msg/IV2XMessage.hpp"

class Sender 
{
public:
    virtual unsigned long int send(std::shared_ptr<uint8_t> data, std::size_t size, const std::string& ip, const std::string& aMask) = 0;
    virtual unsigned long int send(std::shared_ptr<IV2XMessage> msg, const std::string& ip, const std::string& mask) = 0;
    virtual ~Sender() {}
};


