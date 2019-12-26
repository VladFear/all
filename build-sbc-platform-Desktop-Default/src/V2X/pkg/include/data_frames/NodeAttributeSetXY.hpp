#ifndef NODE_ATTRIBUTE_SET_XY_HPP_
#define NODE_ATTRIBUTE_SET_XY_HPP_

/*
 * The DF_NodeAttributeSetXY is a data frame used to convey one or more changes in the attribute set which occur
 * at the node point at which it is used. Some of these attributes persist until the end of the lane or until changed again or
 * turned off. Other attributes have a scope of use which is limited to the node in which they are found. Besides the basic
 * attributes, optional data elements for increasing or decreasing the width and elevation values from the prior values are
 * also provided.
 *
 * ASN.1 Representation:
 * NodeAttributeSetXY ::= SEQUENCE {
 * localNode NodeAttributeXYList OPTIONAL, -- Attribute states which pertain to this node point
 * disabled SegmentAttributeXYList OPTIONAL, -- Attribute states which are disabled at this node point
 * enabled SegmentAttributeXYList OPTIONAL, -- Attribute states which are enabled at this node point
                                            -- and which remain enabled until disabled or the lane ends dat
 * LaneDataAttributeList OPTIONAL, -- Attributes which require an additional data values
                                   -- some of these are local to the node point, while others
                                   -- persist with the provided values until changed
                                   -- and this is indicated in each entry
 * dWidth Offset-B10 OPTIONAL, -- A value added to the current lane width
                               -- at this node and from this node onwards, in 1cm steps
                               -- lane width between nodes are a linear taper between pts
                               -- the value of zero shall not be sent here
 * dElevation Offset-B10 OPTIONAL, -- A value added to the current Elevation
                                   -- at this node from this node onwards, in 10cm steps
                                   -- elevations between nodes are a linear taper between pts
                                   -- the value of zero shall not be sent here
 * regional SEQUENCE (SIZE(1..4)) OF
RegionalExtension {{REGION.Reg-NodeAttributeSetXY}} OPTIONAL,...
}
*/

#include "LaneDataAttribute.hpp"
#include "NodeAttributeSetXY.h"
#include "data_elements/Offset_B10.hpp"

namespace v2x {
namespace frame {

class CNodeAttributeSetXY {

  public:
    enum NodeAttributeXY {
        NodeAttributeXY_reserved = 0,
        NodeAttributeXY_stopLine = 1,
        NodeAttributeXY_roundedCapStyleA = 2,
        NodeAttributeXY_roundedCapStyleB = 3,
        NodeAttributeXY_mergePoint = 4,
        NodeAttributeXY_divergePoint = 5,
        NodeAttributeXY_downstreamStopLine = 6,
        NodeAttributeXY_downstreamStartNode = 7,
        NodeAttributeXY_closedToTraffic = 8,
        NodeAttributeXY_safeIsland = 9,
        NodeAttributeXY_curbPresentAtStepOff = 10
    };

    enum SegmentAttributeXY {
        SegmentAttributeXY_reserved = 0,
        SegmentAttributeXY_doNotBlock = 1,
        SegmentAttributeXY_whiteLine = 2,
        SegmentAttributeXY_mergingLaneLeft = 3,
        SegmentAttributeXY_mergingLaneRight = 4,
        SegmentAttributeXY_curbOnLeft = 5,
        SegmentAttributeXY_curbOnRight = 6,
        SegmentAttributeXY_loadingzoneOnLeft = 7,
        SegmentAttributeXY_loadingzoneOnRight = 8,
        SegmentAttributeXY_turnOutPointOnLeft = 9,
        turnOutPointOnRight = 10,
        SegmentAttributeXY_adjacentParkingOnLeft = 11,
        adjacentParkingOnRight = 12,
        adjacentBikeLaneOnLeft = 13,
        adjacentBikeLaneOnRight = 14,
        SegmentAttributeXY_sharedBikeLane = 15,
        SegmentAttributeXY_transitStopOnLeft = 16,
        SegmentAttributeXY_transitStopOnRight = 17,
        SegmentAttributeXY_transitStopInLane = 18,
        SegmentAttributeXY_sharedWithTrackedVehicle = 19,
        SegmentAttributeXY_safeIsland = 20,
        SegmentAttributeXY_lowCurbsPresent = 21,
        SegmentAttributeXY_rumbleStripPresent = 22,
        SegmentAttributeXY_audibleSignalingPresent = 23,
        SegmentAttributeXY_adaptiveTimingPresent = 24,
        SegmentAttributeXY_rfSignalRequestPresent = 25,
        SegmentAttributeXY_partialCurbIntrusion = 26,
        SegmentAttributeXY_taperToLeft = 27,
        taperToRight = 28,
        SegmentAttributeXY_taperToCenterLine = 29,
        SegmentAttributeXY_parallelParking = 30,
        SegmentAttributeXY_headInParking = 31,
        SegmentAttributeXY_freeParking = 32,
        SegmentAttributeXY_costToPark = 33,
        SegmentAttributeXY_midBlockCurbPresent = 34,
        SegmentAttributeXY_unEvenPavementPresent = 35
    };

    typedef enum NodeAttributeXY localNode;
    typedef enum SegmentAttributeXY disabled;
    typedef enum SegmentAttributeXY enabled;

    CNodeAttributeSetXY();
    CNodeAttributeSetXY(const NodeAttributeSetXY_t&);
    CNodeAttributeSetXY(const CNodeAttributeSetXY&);

    explicit operator NodeAttributeSetXY_t() ;

    CNodeAttributeSetXY& operator=(const CNodeAttributeSetXY&);
    bool operator==(const CNodeAttributeSetXY&) const;
    bool operator!=(const CNodeAttributeSetXY&) const;

    std::vector<NodeAttributeXY>localNode_field;
    std::vector<SegmentAttributeXY> disabled_field;
    std::vector<SegmentAttributeXY> enabled_field;
    CLaneDataAttributeList data_field;
    v2x::element::COffset_B10 dWidth_field;
    v2x::element::COffset_B10 dElevation_field;

  private:
    NodeAttributeSetXY_t nodeAttr_ = NodeAttributeSetXY_t();
};

} /* v2x */
} /* frame */

void freeNodeAttributeSetXYASN(NodeAttributeSetXY_t *asn_type);

#endif /* NODE_ATTRIBUTE_SET_XY_HPP_ */
