#ifndef ADVISORY_SPEED_HPP_
#define ADVISORY_SPEED_HPP_

#include "AdvisorySpeed.h"
#include "data_elements/AdvisorySpeedType.hpp"
#include "data_elements/SpeedAdvice.hpp"
#include "data_elements/SpeedConfidence.hpp"
#include "data_elements/ZoneLength.hpp"
#include "data_elements/RestrictionClassID.hpp"
#include <vector>

/*
 * 6.3 Data Frame: DF_AdvisorySpeed
 * Use: The DF_AdvisorySpeed data frame is used to convey a recommended traveling approach speed
 * to an intersection from the message issuer to various travelers and vehicle types.
 * Besides support for various eco-driving applications, this allows transmitting recommended speeds
 * for specialty vehicles such as transit buses.
 *
 * ASN.1 Representation:
 * AdvisorySpeed ::= SEQUENCE {
 *  type        AdvisorySpeedType,
 *      --the type of advisory which this is.
 *  speed       SpeedAdvice OPTIONAL,
 *      --See Section 11 for converting and translating speed
 *      --expressed in mph into units of m/s
 *      --This element is optional ONLY when superceded
 *      --by the presence of a regional speed element found in
 *      --Reg-AdvisorySpeed entry
 *  confidence  SpeedConfidence OPTIONAL,
 *      --A confidence value for the above speed
 *  distance    ZoneLength  OPTIONAL,
 *      --Unit= 1 meter,
 *      --The distance indicates the region for which the advised speed
 *      --is recommended, it is specified upstream from the stop bar
 *      --along the connected egressing lane
 *  class       RestrictionClassID  OPTIONAL,
 *      --the vehicle types to which it applies
 *      --when absent, the AdvisorySpeed applies to
 *      --all motor vehicle types
 *  regional    SEQUENCE (SIZE(1..4)) OF
 *      RegionalExtension {{REGION.Reg-AdvisorySpeed}} OPTIONAL,
 *  ...}
 *
 * Used By: This entry is used directly by one other data structure in this standard,
 * a DF called DF_AdvisorySpeedList<ASN>. In addition, this item may be used by data structures
 * in other ITS standards.
 *
 *
 *
*/

using namespace v2x::element;

namespace v2x {
namespace frame {

class CAdvisorySpeed;
typedef std::vector<CAdvisorySpeed> CAdvisorySpeedList;

class CAdvisorySpeed {
  public:
    CAdvisorySpeed();
    CAdvisorySpeed(const CAdvisorySpeed&);
    CAdvisorySpeed(const AdvisorySpeed_t &);
    CAdvisorySpeed(const CAdvisorySpeedType&);
    CAdvisorySpeed(const CAdvisorySpeedType&, const CSpeedAdvice&, const CSpeedConfidence&, const CZoneLength&, const CRestrictionClassID&);
    ~CAdvisorySpeed();

    explicit operator AdvisorySpeed_t();

    CAdvisorySpeed & operator = (const CAdvisorySpeed &);
    bool operator == (const CAdvisorySpeed &) const;
    bool operator != (const CAdvisorySpeed &) const;

    CAdvisorySpeedType    type;
    CSpeedAdvice          speed;
    CSpeedConfidence      confidence;
    CZoneLength           distance;
    CRestrictionClassID   classID;

  private:
    AdvisorySpeed_t value_{};
};

} /* frame */
} /* v2x */

void freeAdvisorySpeedASN(AdvisorySpeed_t *);

#endif /* ADVISORY_SPEED_HPP_ */
