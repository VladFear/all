#ifndef D_DAY_HPP_
#define D_DAY_HPP_

#include "DDay.h"

/*
 *The DSRC style day is a simple value consisting of integer values from zero to 31. The value of zero shall represent
 * an unknown value.
 *
 * ASN.1 Representation:
 * DDay ::= INTEGER (0..31) -- units of days
 */

namespace v2x {
namespace element {

class CDDay {
  public:
    explicit CDDay();

    CDDay(const DDay_t& value);

    virtual ~CDDay();

    CDDay(const CDDay& other);
    explicit operator DDay_t() const;

    void set(const DDay_t& value);

    CDDay& operator=(const CDDay& other);

    bool operator==(const CDDay& other) const;
    bool operator!=(const CDDay& other) const;

    bool operator<(const CDDay& other) const;
    bool operator>(const CDDay& other) const;

  private:
    DDay_t value_;
};

} /* element */
} /* v2x */

#endif /* D_DAY_HPP_ */
