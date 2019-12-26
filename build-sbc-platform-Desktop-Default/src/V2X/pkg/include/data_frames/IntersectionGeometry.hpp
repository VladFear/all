#ifndef INTERSECTION_GEOMETRY_HPP_
#define INTERSECTION_GEOMETRY_HPP_

#include "IntersectionGeometry.h"
#include "data_elements/MsgCount.hpp"
#include "data_elements/LaneWidth.hpp"
#include "GenericLane.hpp"
#include "IntersectionReferenceID.hpp"

/*
 * A complete description of an intersection's roadway geometry and its allowed navigational paths (independent of
 * any additional regulatory restrictions that may apply over time or from user classification).
 *
 * ASN.1 Representation:
 * IntersectionGeometry ::= SEQUENCE {
 * name          DescriptiveName OPTIONAL,          -- For debug use only
 * id            IntersectionReferenceID,           -- A globally unique value set,
                                                    -- consisting of a regionID and
                                                    -- intersection ID assignment
 * revision      MsgCount,                          -- Required default values about lane descriptions follow
 * refPoint      Position3D,                        -- The reference from which subsequent
                                                    -- data points are offset until a new
                                                    -- point is used.
 * laneWidth     LaneWidth OPTIONAL,                -- Reference width used by all subsequent
                                                    -- lanes unless a new width is given
 * speedLimits   SpeedLimitList OPTIONAL,           -- Reference regulatory speed limits
                                                    -- used by all subsequent
                                                    -- lanes unless a new speed is given
                                                    -- See Section 11 for converting and
                                                    -- translating speed expressed in mph
                                                    -- into units of m/s
                                                    -- Complete details regarding each lane type in this intersection
 * laneSet       LaneList,                          -- Data about one or more lanes
                                                    -- (all lane data is found here)
                                                    -- Data describing how to use and request preemption and
                                                    -- priority services from this intersection (if supported)
                                                    -- NOTE Additonal data may be added in the next release of the
                                                    -- standard at this point to handle this concept
 * preemptPriorityData PreemptPriorityList OPTIONAL,-- data about one or more regional
                                                    -- preempt or priority zones
 * regional SEQUENCE (SIZE(1..4)) OF RegionalExtension {{REGION.Reg-IntersectionGeometry}} OPTIONAL, ... }
*/

namespace v2x {
namespace frame {

class  CIntersectionGeometry;
typedef std::vector<std::shared_ptr<CIntersectionGeometry>> CIntersectionGeometryList;

class CIntersectionGeometry {
  public:

    CIntersectionGeometry();
    CIntersectionGeometry(const IntersectionGeometry_t &);
    CIntersectionGeometry(const CIntersectionReferenceID& id);
    CIntersectionGeometry(const CDescriptiveName&, const CIntersectionReferenceID&, const CMsgCount&, const CPosition3D&, const CLaneWidth&,
                          const CRegulatorySpeedLimitList&, const CLaneList&/*, const preemptPriorityData&*/);
    CIntersectionGeometry(const CIntersectionReferenceID&, const CMsgCount&, const CPosition3D&, const CLaneList&);

    CIntersectionGeometry(const CIntersectionGeometry&);
    CIntersectionGeometry& operator=(const CIntersectionGeometry&);
    bool operator==(const CIntersectionGeometry&) const;
    bool operator!=(const CIntersectionGeometry&) const;

    explicit operator IntersectionGeometry_t();

    CDescriptiveName name_field;                  /* OPTIONAL */
    CIntersectionReferenceID id_field;
    CMsgCount revision_field;
    CPosition3D refPoint_field;
    CLaneWidth laneWidth_field;                   /* OPTIONAL */
    CRegulatorySpeedLimitList speedLimits_field;  /* OPTIONAL */
    CLaneList laneSet_field;

    std::shared_ptr<CGenericLane> getLane(CLaneID);
    void addLane(std::shared_ptr<CGenericLane> lane);


  private:
    IntersectionGeometry_t IntersectionGeometry_{};

    /* -- NOTE Additonal data may be added in the next release of the
       -- standard at this point to handle this concept
     CpreemptPriorityData preemptPriorityData_field;*/
};

} /* frame */
} /* v2x */

void freeIntersectionGeometryASN(IntersectionGeometry *);

#endif /* INTERSECTION_GEOMETRY_HPP_ */
