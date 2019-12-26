#ifndef OFFSET_B10_T_HPP_
#define OFFSET_B10_T_HPP_

#include "Offset-B10.h"

/*
 * A 10-bit delta offset in X, Y or Z direction from some
 * known point. For non-vehicle centric coordinate frames of
 * reference, offset is positive to the East (X) and to the
 * North (Y) directions. The most negative value shall be
 * used to indicate an unknown value.
 *
 * ASN.1 Representation:
 * Offset-B10 ::= INTEGER (-512..511) -- a range of +- 5.11 meters
 */

const double UnitOffset_B10 = 0.01;

namespace v2x {
namespace element {

class COffset_B10 {
  public:
    explicit COffset_B10();
    COffset_B10(const double&value);

    virtual ~COffset_B10();

    COffset_B10(const COffset_B10 &value);
    explicit operator Offset_B10_t() const;
    explicit operator double() const;

    void set(double const& value);

    COffset_B10& operator=(const COffset_B10& other);

    bool operator==(const COffset_B10& other) const;
    bool operator!=(const COffset_B10& other) const;

    bool operator<(const COffset_B10& other) const;
    bool operator>(const COffset_B10& other) const;

  private:
    Offset_B10_t offset_b10;
};

} /* v2x */
} /* element */

#endif /* __OFFSET_B10_T_HPP_ */
