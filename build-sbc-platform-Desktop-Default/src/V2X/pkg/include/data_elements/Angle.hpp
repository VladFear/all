#ifndef ANGLE_HPP_
#define ANGLE_HPP_

#include "Angle.h"

/*
 * Data element Angle is used to describe an angular measurement in units of degrees. This data
 * element is often used as a heading direction when in motion. In this use, the current heading of the sending device is
 * expressed in unsigned units of 0.0125 degrees from North, such that 28799 such degrees represent 359.9875 degrees.
 * North shall be defined as the axis defined by the WGS-84 coordinate system and its reference ellipsoid. Any angle "to the
 * east" is defined as the positive direction. A value of 28800 shall be used when Angle is unavailable.
 *
 * ASN.1 Representation:
 *   Angle ::= INTEGER (0..28800)
 *   -- LSB of 0.0125 degrees
 *   -- A range of 0 to 359.9875 degrees
 */

const double UnitAngle = 0.0125;

namespace v2x {
namespace element {

class CAngle {
  public:
    explicit CAngle();

    CAngle(const double& value);

    virtual ~CAngle();

    CAngle(const CAngle& other);

    explicit operator double() const;
    explicit operator Angle_t() const;

    void set(const double& value);

    CAngle& operator=(const CAngle& other);

    bool operator==(const CAngle& other) const;
    bool operator!=(const CAngle& other) const;

    bool operator<(const CAngle& other) const;
    bool operator>(const CAngle& other) const;

  private:
    Angle_t value_;
};

} /* element */
} /* v2x */

#endif /* ANGLE_HPP_ */
