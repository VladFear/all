#ifndef VERT_OFFSET_B12_HPP_
#define VERT_OFFSET_B12_HPP_

#include "VertOffset-B12.h"

/*
 * A 12-bit vertical delta offset in the Z direction from the last point. The most negative value shall be used to indicate
 * an unknown value. Unlike similar horizontal offsets, the LSB used is 10 centimeters (not one centimeter).
 * The above methodology is used when the offset is incorporated in data frames other than DF_PathHistoryPoint. Refer to
 * the Use paragraph of DF_PathHistory for the methodology to calculate this data element for use in DF_PathHistoryPoint.
 *
 * ASN.1 Representation:
 * VertOffset-B12 ::= INTEGER (-2048..2047)
 * -- LSB units of of 10 cm
 * -- with a range of +- 204.7 meters vertical
 * -- value 2047 to be used for 2047 or greater
 * -- value -2047 to be used for -2047 or greater
 * -- value -2048 to be unavailable
 */

const double UnitVertOffset_B12 = 0.01;

namespace v2x {
namespace element {

class CVertOffset_B12 {
  public:
    explicit CVertOffset_B12();
    CVertOffset_B12(const double&value);

    virtual ~CVertOffset_B12();

    CVertOffset_B12(const CVertOffset_B12 &value);
    explicit operator VertOffset_B12_t() const;
    explicit operator double() const;

    void set(double const& value);

    CVertOffset_B12& operator=(const CVertOffset_B12& other);

    bool operator==(const CVertOffset_B12& other) const;
    bool operator!=(const CVertOffset_B12& other) const;

    bool operator<(const CVertOffset_B12& other) const;
    bool operator>(const CVertOffset_B12& other) const;

  private:
    VertOffset_B12_t VertOffset_B12;
};

} /* v2x */
} /* element */

#endif /* VERT_OFFSET_B12_HPP_ */
