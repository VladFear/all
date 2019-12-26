#ifndef GENERIC_LANE_HPP_
#define GENERIC_LANE_HPP_

#include <vector>
#include <memory>
#include "data_elements/ApproachID.hpp"
#include "data_elements/CBitString.hpp"
#include "data_elements/DescriptiveName.hpp"
#include "Connection.hpp"
#include "NodeListXY.hpp"
#include "LaneAttributes.hpp"
#include "LaneReferenceID.hpp"
#include "IntersectionReferenceID.hpp"

#include "GenericLane.h"

/*
 * The GenericLane data frame is used for all types of lanes, e.g. motorized vehicle lanes, crosswalks, medians. The
 * GenericLane describes the basic attribute information of the lane. The LaneID value for each lane is unique within an
 * intersection. One use for the LaneID is in the SPAT message, where a given signal or movement phase is mapped to a
 * set of applicable lanes using their respective LaneIDs. The NodeList2 data frame includes a sequence of offset points (or
 * node points) representing the center line path of the lane. As described in this standard, node points are sets of variable
 * sized delta orthogonal offsets from the prior point in the node path. (The initial point is offset from the LLH anchor point
 * used in the intersection.) Each node point may convey optional attribute data as well. The use of attributes is described
 * further in the Node definition, and in a later clause, but an example use would be to indicate a node point where the lane
 * width changes.
 * It should be noted that a "lane" is an abstract concept that can describe objects other than motorized vehicle lanes, and
 * that the generic lane structure (using features drawn from Japanese usage) also allows combining multiple physical lanes
 * into a single lane object. In addition, such lanes can describe connectivity points with other lanes beyond a single
 * intersection, extending such a lane description over multiple nearby physical intersections and side streets which
 * themselves may not be equipped or assigned an index number in the regional intersection numbering system. (See the
 * ConnectsTo entry for details) This has value when describing a broader service area in terms of the roadway network,
 * probably with less precision and detail.
 *
 * ASN.1 Representation:
 * GenericLane ::= SEQUENCE {
 * laneID            LaneID,                        -- The unique ID number assigned
                                                    -- to this lane object
 * name              DescriptiveName OPTIONAL,      -- often for debug use only
                                                    -- but at times used to name ped crossings
 * ingressApproach   ApproachID OPTIONAL,           -- inbound
 * egressApproach    ApproachID OPTIONAL,           -- outbound
                                                    -- Approach IDs to which this lane belongs
 * laneAttributes    LaneAttributes,                -- All Attribute information about
                                                    -- the basic selected lane type
                                                    -- Directions of use, Geometric co-sharing
                                                    -- and Type Specific Attributes
                                                    -- These Attributes are 'lane - global' that is,
                                                    -- they are true for the entire length of the lane
 * maneuvers         AllowedManeuvers OPTIONAL,     -- the permitted maneuvers for this lane
 * nodeList          NodeListXY,                    -- Lane spatial path information as well as
                                                    -- various Attribute information along the node path
                                                    -- Attributes found here are more general and may
                                                    -- come and go over the length of the lane.
 * connectsTo        ConnectsToList OPTIONAL,       -- a list of other lanes and their signal group IDs
                                                    -- each connecting lane and its signal group ID
                                                    -- is given, therefore this element provides the
                                                    -- information formerly in "signalGroups" in prior
                                                    -- editions.
overlays             OverlayLaneList OPTIONAL,      -- A list of any lanes which have spatial paths that
                                                    -- overlay (run on top of, and not simply cross)
                                                    -- the path of this lane when used
 * regional SEQUENCE (SIZE(1..4)) OF RegionalExtension {{REGION.Reg-GenericLane}} OPTIONAL,
 * ... }
*/

namespace v2x {
namespace frame {

class CGenericLane;
typedef std::vector<std::shared_ptr<CGenericLane> > CLaneList;

class CGenericLane {
  public:
    CGenericLane();
    CGenericLane(const GenericLane_t &);
    CGenericLane(const CGenericLane&);
    CGenericLane(const CLaneID&, const CLaneReferenceID&, const CDescriptiveName&, const CApproachID&,
                 const CApproachID&, const CLaneAttributes&, const v2x::element::CBitString<12>&,
                 const CNodeListXY&, const CConnectsToList&, const COverlayLaneList&);
    CGenericLane(const CLaneID&, const CLaneAttributes&, const CNodeListXY&);
    CGenericLane(const CLaneID& laneID);
    CGenericLane(const CLaneReferenceID& refID);
    CGenericLane(const CLaneID& laneID, const CIntersectionReferenceID& intersectionID);


    CGenericLane& operator=(const CGenericLane&);
    bool operator==(const CGenericLane&) const;
    bool operator!=(const CGenericLane&) const;

    explicit operator GenericLane_t ();

    CLaneID laneID_field;
    CDescriptiveName name_field;            /*OPTIONAL*/
    CApproachID ingressApproach_field;      /*OPTIONAL*/
    CApproachID egressApproach_field;       /*OPTIONAL*/
    CLaneAttributes laneAttributes_field;
    CBitString<12> maneuvers_field;         /*OPTIONAL*/
    CNodeListXY nodeList_field;
    CConnectsToList connectsTo_field;       /*OPTIONAL*/
    COverlayLaneList overlays_field;        /*OPTIONAL*/

    void addConnection(const std::shared_ptr<CGenericLane> lane, const CBitString<12>& maneurs);
    void addConnection(const CConnection conn);

    /* extension for hackathon */
    CLaneReferenceID laneRef_field;
    int numberOnTheRoad_field = 0;

  private:
    GenericLane_t GenericLane_{};
};

} /* frame */
} /* v2x */

void freeGenericLane(GenericLane_t *asn_type);

#endif /* GENERIC_LANE_HPP_ */
