#ifndef VEHICLE_TYPE_HPP_
#define VEHICLE_TYPE_HPP_

#include "VehicleType.h"

/*
 * The DE_VehicleType data element is a type list (i.e., a classification list)
 * of the vehicle in terms of overall size. The data element entries follow the
 * definitions defined in the US DOT Highway Performance Monitoring System (HPMS).
 * Many infrastructure roadway operators collect and classify data according to
 * this list for regulatory reporting needs. Within the ITS industry and within
 * the DSRC message set standards work, there are many similar lists of types for
 * overlapping needs and uses.
*/

namespace v2x {
namespace element {

class CVehicleType {
  public:
    explicit CVehicleType();
    CVehicleType(const VehicleType_t& value);

    virtual ~CVehicleType();

    CVehicleType(const CVehicleType& other);

    explicit operator VehicleType_t() const;

    void set(const VehicleType_t& value);

    CVehicleType& operator=(const CVehicleType& other);

    bool operator==(const CVehicleType& other) const;
    bool operator!=(const CVehicleType& other) const;

    bool operator<(const CVehicleType& other) const;
    bool operator>(const CVehicleType& other) const;

  private:
    VehicleType_t state_;
};

} /* element */
} /* v2x */

#endif /* VEHICLE_TYPE_HPP_ */
