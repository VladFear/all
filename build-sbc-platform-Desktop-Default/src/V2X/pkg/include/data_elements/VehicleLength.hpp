#ifndef VEHICLE_LENGTH_HPP_
#define VEHICLE_LENGTH_HPP_

#include "VehicleLength.h"

/*
 * The length of the vehicle measured from the edge of the front bumper to the edge of the rear bumper expressed in
 * centimeters, unsigned. It should be noted that this value is often combined with a vehicle width value to form a data frame.
 * The value zero shall be sent when data is unavailable.
 *
 * ASN.1 Representation:
 * VehicleLength ::= INTEGER (0.. 4095) -- LSB units of 1 cm with a range of >40 meters
*/

namespace v2x {
namespace element {

class CVehicleLength {
  public:
    explicit CVehicleLength();

    CVehicleLength(const VehicleLength_t&);

    virtual ~CVehicleLength();

    CVehicleLength(const CVehicleLength&);
    explicit operator VehicleLength_t() const;

    void set(const VehicleLength_t&);

    CVehicleLength& operator=(const CVehicleLength&);

    bool operator==(const CVehicleLength&) const;
    bool operator!=(const CVehicleLength&) const;

    bool operator<(const CVehicleLength&) const;
    bool operator>(const CVehicleLength&) const;

  private:
    VehicleLength_t value_;
};

} /* v2x */
} /* element */

#endif /* VEHICLE_LENGTH_HPP_ */
