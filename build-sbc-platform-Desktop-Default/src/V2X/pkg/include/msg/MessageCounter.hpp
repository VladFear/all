#pragma once

#include <map>
#include <typeinfo>
#include <memory>
#include "msg/IV2XMessage.hpp"
#include <mutex>

namespace v2x {
namespace msg {

template<typename T>
std::string getTypeName() {
    return typeid(T).name();
}

template<typename T>
std::string getTypeName(const T &obj) {
    return typeid(obj).name();
}

template<typename T>
std::string getTypeName(const T *obj) {
    if(!obj) {
        throw std::invalid_argument("Object is empty");
    }
    return getTypeName(*obj);
}

template<typename T>
std::string getTypeName(std::shared_ptr<T> obj) {
    if(!obj) {
        throw std::invalid_argument("Object is empty");
    }
    return getTypeName(*obj.get());
}

class Counter {
  public:

    static Counter &GetInstance();

    unsigned getNext(const std::string &id);

    unsigned getCurrent(const std::string &id);

  private:
    Counter();
    std::pair<unsigned short, bool> &getOrCreate(const std::string &id);

  private:
    std::recursive_mutex mtx;
    std::map<std::string, std::pair<unsigned short, bool>> typesCounter;
};

template<typename T>
class TypeCounter {
  public:
    static unsigned getNext() {
        return Counter::GetInstance().getNext(getTypeName<T>());
    }
    static unsigned getCurrent() {
        return Counter::GetInstance().getCurrent(getTypeName<T>());
    }
};

class MessageCounter {
  public:
    static unsigned getNext(std::shared_ptr<IV2XMessage> msg) {
        return Counter::GetInstance().getNext(getTypeName(msg));
    }
    static unsigned getCurrent(std::shared_ptr<IV2XMessage> msg) {
        return Counter::GetInstance().getCurrent(getTypeName(msg));
    }
};

} // namespace msg
} // namespace v2x
