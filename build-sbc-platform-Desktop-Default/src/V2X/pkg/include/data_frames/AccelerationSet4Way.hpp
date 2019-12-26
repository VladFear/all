#ifndef ACCELERATION_SET_4_WAY_HPP_
#define ACCELERATION_SET_4_WAY_HPP_

#include "AccelerationSet4Way.h"
#include "data_elements/Acceleration.hpp"
#include "data_elements/VerticalAcceleration.hpp"
#include "data_elements/YawRate.hpp"

/*
 * A set of acceleration values in 3 orthogonal directions
 * of the vehicle and with yaw rotation rates, expressed
 * as a structure. The positive longitudinal axis is to
 * the front of the vehicle. The positive lateral axis is
 * to the right side of the vehicle (facing forward).
 * Positive yaw is to the right (clockwise).
 * A positive vertical "z" axis is downward with the zero
 * point at the bottom of the vehicle's tires.
 * The frame of reference and axis of rotation used shall
 * be accordance with that defined in Section 11 of this standard.
 *
 * ASN.1 Representation:
 * AccelerationSet4Way ::= SEQUENCE {
 * long Acceleration, -- Along the Vehicle Longitudinal axis
 * lat  Acceleration, -- Along the Vehicle Lateral axis
 * vert VerticalAcceleration, -- Along the Vehicle Vertical axis
 * yaw YawRate
 * }
*/

using namespace v2x::element;

class CAccelerationSet4Way {
  public:
    explicit CAccelerationSet4Way();
    CAccelerationSet4Way(const CAccelerationSet4Way&);
    CAccelerationSet4Way(const AccelerationSet4Way_t&);
    CAccelerationSet4Way(const double&, const double&, const double&, const double&);
    ~CAccelerationSet4Way();
    explicit operator AccelerationSet4Way_t();

    CAccelerationSet4Way& operator = (const CAccelerationSet4Way&);
    bool operator == (const CAccelerationSet4Way&) const;
    bool operator != (const CAccelerationSet4Way&) const;

    CAcceleration long_field;
    CAcceleration lat_field;
    CVerticalAcceleration vert_field;
    CYawRate yaw_field;


  private:
    AccelerationSet4Way_t value_ = AccelerationSet4Way_t();
};

#endif /* ACCELERATION_SET_4_WAY_HPP_ */
