#ifndef D_MONTH_HPP_
#define D_MONTH_HPP_

#include "DMonth.h"

/*
 * The DSRC month consists of integer values from one to 12, representing the month within a year. The value of 0
 * shall represent an unknown value.
 *
 * ASN.1 Representation:
 * DMonth ::= INTEGER (0..12) -- units of months
 */

namespace v2x {
namespace element {

class CDMonth {
  public:
    explicit CDMonth();

    CDMonth(const DMonth_t& value);

    virtual ~CDMonth();

    CDMonth(const CDMonth& other);
    explicit operator DMonth_t() const;

    void set(const DMonth_t& value);

    CDMonth& operator=(const CDMonth& other);

    bool operator==(const CDMonth& other) const;
    bool operator!=(const CDMonth& other) const;

    bool operator<(const CDMonth& other) const;
    bool operator>(const CDMonth& other) const;

  private:
    DMonth_t value_;
};

} /* element */
} /* v2x */

#endif /* D_MONTH_HPP_ */
