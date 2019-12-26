#ifndef SCALE_B12_HPP_
#define SCALE_B12_HPP_

#include "Scale-B12.h"

/*
 * A 12-bit signed scaling factor supporting scales from zero (which is not used) to >200%. In this data element, the
 * value zero is taken to represent a value of one (scale 1:1). Values above and below this add or remove exactly 0.05%
 * from the initial value of 100%. Hence, a value of 2047 adds 102.35% to 100%, resulting in a scale of 202.35% exactly (the
 * largest valid scale value). Negative values which would result in an effective final value below zero are not supported. The
 * smallest valid value allowed is -1999 and the remaining negative values are reserved for future definition.
 *
 * ASN.1 Representation:
 * Scale-B12 ::= INTEGER (-2048..2047) -- in steps of 0.05 percent
*/

const double UnitScale_B12 = 0.05;

namespace v2x {
namespace element {

class CScale_B12 {
  public:
    explicit CScale_B12();

    CScale_B12(const double& value);

    virtual ~CScale_B12();

    CScale_B12(const CScale_B12& other);
    explicit operator Scale_B12_t() const;
    explicit operator double() const;

    void set(double const& value);

    CScale_B12& operator=(const CScale_B12& other);

    bool operator==(const CScale_B12& other) const;
    bool operator!=(const CScale_B12& other) const;

    bool operator<(const CScale_B12& other) const;
    bool operator>(const CScale_B12& other) const;

  private:
    Scale_B12_t value_;
};

} /* element */
} /* v2x */

#endif  /* SCALE_B12_HPP_ */
