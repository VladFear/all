#ifndef VEHICLE_SIZE_HPP_
#define VEHICLE_SIZE_HPP_

#include "VehicleSize.h"
#include "data_elements/VehicleLength.hpp"
#include "data_elements/VehicleWidth.hpp"

/*
 *  Representing the vehicle length and vehicle width
 * in a single data concept.
 *
 * ASN.1 Representation:
 * VehicleSize ::= SEQUENCE {
 * width VehicleWidth,
 * length VehicleLength
 * }
*/

using namespace v2x::element;

namespace v2x {
namespace frame {

class CVehicleSize 
{
public:
    CVehicleSize();
    CVehicleSize(const CVehicleSize&);
    CVehicleSize(const VehicleSize_t&);
    CVehicleSize(const CVehicleWidth&, const CVehicleLength&);

    virtual ~CVehicleSize();

    explicit operator VehicleSize_t();

    CVehicleSize& operator=(const CVehicleSize&);
    bool operator==(const CVehicleSize&) const;
    bool operator!=(const CVehicleSize&) const;

    CVehicleWidth width;
    CVehicleLength length;

private:
    VehicleSize_t value_ = VehicleSize_t();
};

} /* frame */
} /* v2x */

#endif /* VEHICLE_SIZE_HPP_ */
