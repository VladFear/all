#ifndef D_MINUTE_HPP_
#define D_MINUTE_HPP_

#include "DMinute.h"

/*
 * The DSRC style minute is a simple value consisting of integer values from zero to 59 representing the minutes
 * within an hour. The value of 60 SHALL represent an unknown value.
 *
 * ASN.1 Representation:
 * DMinute ::= INTEGER (0..60) -- units of minutes
 */

namespace v2x {
namespace element {

class CDMinute {
  public:
    explicit CDMinute();

    CDMinute(const DMinute_t& value);

    virtual ~CDMinute();

    CDMinute(const CDMinute& other);
    explicit operator DMinute_t() const;

    void set(const DMinute_t& value);

    CDMinute& operator=(const CDMinute& other);

    bool operator==(const CDMinute& other) const;
    bool operator!=(const CDMinute& other) const;

    bool operator<(const CDMinute& other) const;
    bool operator>(const CDMinute& other) const;

  private:
    DMinute_t value_;
};

} /* element */
} /* v2x */

#endif /* D_MINUTE_HPP_ */
