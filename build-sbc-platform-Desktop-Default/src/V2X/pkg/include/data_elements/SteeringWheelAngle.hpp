#ifndef STEERING_WHEEL_ANGLE_HPP_
#define STEERING_WHEEL_ANGLE_HPP_

#include "SteeringWheelAngle.h"

/*
 * The angle of the driver’s steering wheel,
 * expressed in a signed (to the right being positive)
 * value with LSB units of 1.5 degrees.
 *
 * ASN.1 Representation:
 * SteeringWheelAngle ::= INTEGER (-126..127)
 *    -- LSB units of 1.5 degrees, a range of -189 to +189 degrees
 *    -- +001 = +1.5 deg
 *    -- -126 = -189 deg and beyond
 *    -- +126 = +189 deg and beyond
 *    -- +127 to be used for unavailable
 */

const double UnitSteeringWheelAngle = 1.5;

namespace v2x {
namespace element {

class CSteeringWheelAngle {
public:
    explicit CSteeringWheelAngle();

    CSteeringWheelAngle(double const& value);

    virtual ~CSteeringWheelAngle();

    CSteeringWheelAngle(const CSteeringWheelAngle& other);
    explicit operator SteeringWheelAngle_t() const;
    explicit operator double() const;

    void set(double const& value);

    CSteeringWheelAngle& operator=(const CSteeringWheelAngle& other);

    bool operator==(const CSteeringWheelAngle& other) const;
    bool operator!=(const CSteeringWheelAngle& other) const;

    bool operator<(const CSteeringWheelAngle& other) const;
    bool operator>(const CSteeringWheelAngle& other) const;

private:
    SteeringWheelAngle_t value_;

};

} /* v2x */
} /* element */

#endif /* STEERING_WHEEL_ANGLE_HPP_ */
