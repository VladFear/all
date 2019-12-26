#ifndef D_OFFSET_HPP_
#define D_OFFSET_HPP_

#include "DOffset.h"

/*
 * The DSRC (time zone) offset consists of a signed integer representing an hour and minute value set from -14:00 to
 * +14:00, representing all the world’s local time zones in units of minutes. The value of zero (00:00) may also represent an
 * unknown value. Note some time zones are do not align to hourly boundaries.
 *
 * ASN.1 Representation:
 * DOffset ::= INTEGER (-840..840) -- units of minutes from UTC time
 */

namespace v2x {
namespace element {

class CDOffset {
  public:
    explicit CDOffset();

    CDOffset(const DOffset_t& value);

    virtual ~CDOffset();

    CDOffset(const CDOffset& other);
    explicit operator DOffset_t() const;

    void set(const DOffset_t& value);

    CDOffset& operator=(const CDOffset& other);

    bool operator==(const CDOffset& other) const;
    bool operator!=(const CDOffset& other) const;

    bool operator<(const CDOffset& other) const;
    bool operator>(const CDOffset& other) const;

  private:
    DOffset_t value_;
};

} /* element */
} /* v2x */

#endif /* D_OFFSET_HPP_ */
