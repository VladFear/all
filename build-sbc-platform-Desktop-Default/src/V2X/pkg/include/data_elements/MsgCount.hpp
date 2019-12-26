#ifndef MSG_COUNT_HPP_
#define MSG_COUNT_HPP_

#include "MsgCount.h"

/*
 * Sequence number of the message within a stream of messages with the same DSRCmsgID and from the same sender
 *
 * INTEGER ( 0 .. 127 )
 */

namespace v2x {
namespace element {

class CMsgCount {
  public:
    explicit CMsgCount();
    CMsgCount(const MsgCount_t &value);

    virtual ~CMsgCount();

    CMsgCount(const CMsgCount &value);
    explicit operator MsgCount_t() const;

    void set(MsgCount_t const& value);

    CMsgCount& operator=(const CMsgCount& other);

    bool operator==(const CMsgCount& other) const;
    bool operator!=(const CMsgCount& other) const;

    bool operator<(const CMsgCount& other) const;
    bool operator>(const CMsgCount& other) const;

    CMsgCount operator+(const CMsgCount &other) const;

  private:
    MsgCount_t _msg_count;
};

} /* element */
} /* v2x */

#endif /* MSG_COUNT_HPP_ */
