#ifndef REGULATORY_SPEED_LIMIT_HPP_
#define REGULATORY_SPEED_LIMIT_HPP_

#include "RegulatorySpeedLimit.h"
#include "SpeedLimitList.h"
#include "data_elements/Speed.hpp"
#include <vector>

/*
 * The DF_RegulatorySpeedLimit data frame is used to convey a
 * regulatory speed about a lane, lanes, or roadwaysegment.
 *
 * ASN.1 Representation:
 * RegulatorySpeedLimit ::= SEQUENCE {
 * type SpeedLimitType, -- The type of regulatory speed which follows
 * speed Velocity -- The speed in units of 0.02 m/s
                  -- See Section 11 for converting and translating
                  -- speed expressed in mph into units of m/s }
*/

namespace v2x {
namespace frame {

class CRegulatorySpeedLimit;
typedef std::vector<CRegulatorySpeedLimit> CRegulatorySpeedLimitList;


class CRegulatorySpeedLimit {
  public:
    enum SpeedLimitType {
        SpeedLimitType_unknown = 0,
        maxSpeedInSchoolZone = 1,
        maxSpeedInSchoolZoneWhenChildrenArePresent = 2,
        maxSpeedInConstructionZone = 3,
        vehicleMinSpeed = 4,
        vehicleMaxSpeed = 5,
        vehicleNightMaxSpeed = 6,
        truckMinSpeed = 7,
        truckMaxSpeed = 8,
        truckNightMaxSpeed = 9,
        vehiclesWithTrailersMinSpeed = 10,
        vehiclesWithTrailersMaxSpeed = 11,
        vehiclesWithTrailersNightMaxSpeed = 12
    };

    typedef enum SpeedLimitType type;
    typedef v2x::element::CSpeed speed;

    CRegulatorySpeedLimit();
    CRegulatorySpeedLimit(const RegulatorySpeedLimit_t&);
    CRegulatorySpeedLimit(const CRegulatorySpeedLimit&);
    CRegulatorySpeedLimit(const type&, const speed&);

    void set(const type&, const speed&);

    explicit operator RegulatorySpeedLimit_t();

    CRegulatorySpeedLimit& operator=(const CRegulatorySpeedLimit&);
    bool operator==(const CRegulatorySpeedLimit&) const;
    bool operator!=(const CRegulatorySpeedLimit&) const;

    type type_field;
    speed speed_field;
  private:
    RegulatorySpeedLimit_t regSpeedLim_ = RegulatorySpeedLimit_t();

};

} /* frame */
} /* v2x*/

#endif /* REGULATORY_SPEED_LIMIT_HPP_ */
