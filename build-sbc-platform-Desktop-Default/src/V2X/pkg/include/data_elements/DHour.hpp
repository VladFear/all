#ifndef D_HOUR_HPP_
#define D_HOUR_HPP_

#include "DHour.h"

/*
 * consists of integer values from zero to 23 representing the hours within a day. The value of 31 shall
 * represent an unknown value. The range 24 to 30 is used in some transit applications to represent schedule adherence.
 *
 * ASN.1 Representation:
 * DHour ::= INTEGER (0..31) -- units of hours
 */

namespace v2x {
namespace element {

class CDHour {
  public:
    explicit CDHour();

    CDHour(const DHour_t& value);

    virtual ~CDHour();

    CDHour(const CDHour& other);
    explicit operator DHour_t() const;

    void set(const DHour_t& value);

    CDHour& operator=(const CDHour& other);

    bool operator==(const CDHour& other) const;
    bool operator!=(const CDHour& other) const;

    bool operator<(const CDHour& other) const;
    bool operator>(const CDHour& other) const;

  private:
    DHour_t value_;
};

} /* element */
} /* v2x */

#endif /* D_HOUR_HPP_ */
