#ifndef ELEVATION_HPP_
#define ELEVATION_HPP_

#include "Elevation.h"

/*
 * Represents the geographic position above or below
 * the reference ellipsoid (typically WGS-84).
 * The number has a resolution of 1 decimeter and represents
 * an asymmetric range of positive and negative values.
 * Any elevation higher than +6143.9 meters is represented as +61439.
 * Any elevation lower than -409.5 meters is represented as -4095.
 * If the sending device does not know its elevation,
 * it shall encode the Elevation data element with -4096.
 * ASN.1 Representation:
 * Elevation ::= INTEGER (-4096..61439)
 * -- In units of 10 cm steps above or below the reference ellipsoid
 * -- Providing a range of -409.5 to + 6143.9 meters
 * -- The value -4096 shall be used when Unknown is to be sent
*/

const double UnitElevation = 0.1;

namespace v2x {
namespace element {

class CElevation {
  public:
    explicit CElevation();

    CElevation(const double& value);

    virtual ~CElevation();

    CElevation(const CElevation& other);
    explicit operator Elevation_t() const;
    explicit operator double() const;

    void set(double const& value);

    CElevation& operator=(const CElevation& other);

    bool operator==(const CElevation& other) const;
    bool operator!=(const CElevation& other) const;

    bool operator<(const CElevation& other) const;
    bool operator>(const CElevation& other) const;

  private:
    Elevation_t value_;
};

} /* v2x */
} /* element */

#endif  /* ELEVATION_HPP_ */
