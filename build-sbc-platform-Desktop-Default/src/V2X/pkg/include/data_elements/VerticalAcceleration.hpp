#ifndef VERTICAL_ACCELERATION_HPP_
#define VERTICAL_ACCELERATION_HPP_

#include "VerticalAcceleration.h"

/*
 * A data element representing the signed vertical acceleration of the vehicle along the vertical axis in units of 0.02 G
 * (where 9.80665 meters per second squared is one G, i.e., 0.02 G = 0.1962 meters per second squared).
 *
 * ASN.1 Representation:
 * VerticalAcceleration ::= INTEGER (-127..127)
 * -- LSB units of 0.02 G steps over -2.52 to +2.54 G
 * -- The value +127 shall be used for ranges >= 2.54 G
 * -- The value -126 shall be used for ranges <= 2.52 G
 * -- The value -127 shall be used for unavailable
*/

const double UnitVerticalAcceleration = 0.02;

namespace v2x {
namespace element {

class CVerticalAcceleration {
public:
    explicit CVerticalAcceleration();

    CVerticalAcceleration(const double& value);

    virtual ~CVerticalAcceleration();

    CVerticalAcceleration(const CVerticalAcceleration& other);
    explicit operator VerticalAcceleration_t() const;
    explicit operator double() const;

    void set(double const& value);

    CVerticalAcceleration& operator=(const CVerticalAcceleration& other);

    bool operator==(const CVerticalAcceleration& other) const;
    bool operator!=(const CVerticalAcceleration& other) const;

    bool operator<(const CVerticalAcceleration& other) const;
    bool operator>(const CVerticalAcceleration& other) const;

private:
    VerticalAcceleration_t value_;
};

} /* v2x */
} /* element */

#endif /* VERTICAL_ACCELERATION_HPP_ */
