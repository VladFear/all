#ifndef ROAD_SEGMENT_REFERENCE_ID_HPP_
#define ROAD_SEGMENT_REFERENCE_ID_HPP_

#include "data_elements/RoadRegulatorID.hpp"
#include "data_elements/RoadSegmentID.hpp"
#include "RoadSegmentReferenceID.h"

/* The DF_RoadSegmentReferenceID data frame is used to convey theRoadSegmentID which is unique to a given
 * road segment of interest, and also the RoadRegulatorID assigned to the region in which it is operating (when required).
 *
 * ASN.1 Representation:
 * RoadSegmentReferenceID ::= SEQUENCE {
 * region RoadRegulatorID OPTIONAL,
 * -- a globally unique regional assignment value
 * -- typically assigned to a regional DOT authority
 * -- the value zero shall be used for testing needs
 *
 * id RoadSegmentID
 * -- a unique mapping to the road segment
 * -- in question within the above region of use
 * -- during its period of assignment and use
 * -- note that unlike intersectionID values,
 * -- this value can be reused by the region
 * }
*/

namespace v2x {
namespace frame {

using namespace v2x::element;

class CRoadSegmentReferenceID {
  public:
    CRoadSegmentReferenceID();
    CRoadSegmentReferenceID(const RoadSegmentReferenceID_t&);
    CRoadSegmentReferenceID(const CRoadSegmentID&, const CRoadRegulatorID&);
    CRoadSegmentReferenceID(const CRoadSegmentID&);

    explicit operator RoadSegmentReferenceID_t();

    CRoadSegmentReferenceID(const CRoadSegmentReferenceID&);
    CRoadSegmentReferenceID& operator=(const CRoadSegmentReferenceID&);

    bool operator==(const CRoadSegmentReferenceID&) const;
    bool operator!=(const CRoadSegmentReferenceID&) const;
    bool operator<(const CRoadSegmentReferenceID&) const;
    bool operator>(const CRoadSegmentReferenceID&) const;

    CRoadRegulatorID region_field; /* OPTIONAL */
    CRoadSegmentID id_field;
  private:
    RoadSegmentReferenceID_t RoadSegmentReferenceID_{};

};

} /* frame */
} /* v2x */

void freeRoadSegmentReferenceIDASN(RoadSegmentReferenceID_t *);

#endif /* ROAD_SEGMENT_REFERENCE_ID_HPP_ */
