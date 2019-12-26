#ifndef VEHICLE_WIDTH_HPP_
#define VEHICLE_WIDTH_HPP_

#include "VehicleWidth.h"

/*
 * The width of the vehicle expressed in centimeters, unsigned. The width shall be the widest point of the vehicle with
 * all factory installed equipment. The value zero shall be sent when data is unavailable.
 *
 * ASN.1 Representation:
 * VehicleWidth ::= INTEGER (0..1023) -- LSB units are 1 cm with a range of >10 meters
*/

namespace v2x {
namespace element {

class CVehicleWidth {
  public:
    explicit CVehicleWidth();

    CVehicleWidth(const VehicleWidth_t&);

    virtual ~CVehicleWidth();

    CVehicleWidth(const CVehicleWidth&);
    explicit operator VehicleWidth_t() const;

    void set(const VehicleWidth_t&);

    CVehicleWidth& operator=(const CVehicleWidth&);

    bool operator==(const CVehicleWidth&) const;
    bool operator!=(const CVehicleWidth&) const;

    bool operator<(const CVehicleWidth&) const;
    bool operator>(const CVehicleWidth&) const;

  private:
    VehicleWidth_t value_;
};

} /* v2x */
} /* element */

#endif /* VEHICLE_WIDTH_HPP_ */
