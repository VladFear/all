#ifndef ROAD_SEGMENT_HPP_
#define ROAD_SEGMENT_HPP_

#include "RoadSegmentReferenceID.hpp"
#include "data_elements/MsgCount.hpp"
#include "data_elements/LaneWidth.hpp"
#include "GenericLane.hpp"
#include "RoadSegment.h"

/*
 * The DF_ RoadSegment data frame is a complete description of a RoadSegment including its geometry and its
 * allowed navigational paths (independent of any additional regulatory restrictions that may apply over time or from user
 * classification) and any current disruptions such as a work zone or incident event.
 *
 * ASN.1 Representation:
 * RoadSegment ::= SEQUENCE {
 * name          DescriptiveName OPTIONAL,
 * id            RoadSegmentReferenceID, -- a globally unique value for the segment
 * revision      MsgCount,               -- Required default values about the descriptions to follow
 * refPoint      Position3D,             -- the reference from which subsequent
                                         -- data points are offset until a new
                                         -- point is used.
 * laneWidth     LaneWidth OPTIONAL,     -- Reference width used by all subsequent
                                         -- lanes unless a new width is given
 * speedLimits   SpeedLimitList OPTIONAL,-- Reference regulatory speed limits
                                         -- used by all subsequent
                                         -- lanes unless a new speed is given
                                         -- See Section 11 for converting and
                                         -- translating speed expressed in mph
                                         -- into units of m/s
                                         -- Data describing disruptions in the RoadSegment
                                         -- such as work zones etc will be added here;
                                         -- in the US the SAE ITIS codes would be used here
                                         -- The details regarding each lane type in the RoadSegment
 * roadLaneSet   RoadLaneSetList,
 * regional SEQUENCE (SIZE(1..4)) OF RegionalExtension {{REGION.Reg-RoadSegment}} OPTIONAL, ... }
*/

namespace v2x {
namespace frame {

using namespace element;
typedef CLaneList CRoadLaneSetList;

class  CRoadSegment;
typedef std::vector<std::shared_ptr<CRoadSegment>> CRoadSegmentList;

class CRoadSegment {
  public:
    CRoadSegment();
    CRoadSegment(const RoadSegment_t&);
    CRoadSegment(const CDescriptiveName&, const CRoadSegmentReferenceID&, const CMsgCount&, const CPosition3D&, const CLaneWidth&,
                 const CRegulatorySpeedLimitList&, const CLaneList&);
    CRoadSegment(const CRoadSegmentReferenceID&, const CMsgCount&, const CPosition3D&, const CRoadLaneSetList&);

    CRoadSegment(const CRoadSegment&);
    explicit operator RoadSegment_t();
    CRoadSegment& operator=(const CRoadSegment&);
    bool operator==(const CRoadSegment&) const;
    bool operator!=(const CRoadSegment&) const;

    CDescriptiveName name_field;                    /* OPTIONAL */
    CRoadSegmentReferenceID id_field;
    CMsgCount revision_field;
    CPosition3D refPoint_field;
    CLaneWidth laneWidth_field;                     /* OPTIONAL */
    CRegulatorySpeedLimitList speedLimits_field;    /* OPTIONAL */
    CRoadLaneSetList roadLaneSet_field;

  private:
    RoadSegment_t RoadSegment_{};
};

} /* frame */
} /* v2x */

void freeRoadSegmentASN(RoadSegment_t *);

#endif /* ROAD_SEGMENT_HPP_ */
