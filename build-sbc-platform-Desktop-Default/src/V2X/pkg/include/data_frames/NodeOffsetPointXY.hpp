#ifndef NODE_OFFSET_POINT_XY_HPP_
#define NODE_OFFSET_POINT_XY_HPP_

/*
 * The DF_NodeOffsetPointXY data frame presents a structure to hold different sized data frames for a single node
 * point in a lane. Nodes are described in terms of X and Y offsets in units of 1 centimeter (when zoom is 1:1). Changes in
 * elevation and in the lane width can be expressed in a similar way with the optional Attributes data entry which appears
 * alongside the NodeOffsetPoint in use.
 * The choice of which node type is driven by the magnitude (size) of the offset data to be encoded. When the distance from
 * the last node point is smaller, the smaller entries can (and should) be chosen
 * Each single selected node is computed as an X and Y offset from the prior node point unless one of the entries reflecting
 * a complete lat-long representation is selected. In this case, subsequent entries become offsets from that point. This ability
 * was added for assistance with the development, storage, and back office exchange of messages where message size is
 * not a concern and should not be sent over the air due to its additional message payload size.
 * The general usage guidance is to construct the content of each lane node point with the smallest possible element to
 * conserve message size. However, using an element which is larger than needed is not a violation of the ASN.1 rules.
 * ASN.1 Representation: NodeOffsetPointXY ::= CHOICE {
 * -- Nodes with X,Y content
 * node-XY1 Node-XY-20b, -- node is within 5.11m of last node
 * node-XY2 Node-XY-22b, -- node is within 10.23m of last node
 * node-XY3 Node-XY-24b, -- node is within 20.47m of last node
 * node-XY4 Node-XY-26b, -- node is within 40.96m of last node
 * node-XY5 Node-XY-28b, -- node is within 81.91m of last node
 * node-XY6 Node-XY-32b, -- node is within 327.67m of last node
 * node-LatLon Node-LLmD-64b, -- node is a full 32b Lat/Lon range
 * regional RegionalExtension {{REGION.Reg-NodeOffsetPointXY}}
                                -- node which follows is of a
                                -- regional definition type}
*/

#include "Position3D.hpp"
#include "NodeOffsetPointXY.h"

namespace v2x {
namespace frame {

class CNodeOffsetPointXY {
  public:
    enum Id {
        unselected,
        node_XY1_chosen = 1,
        node_XY2_chosen = 2,
        node_XY3_chosen = 3,
        node_XY4_chosen = 4,
        node_XY5_chosen = 5,
        node_XY6_chosen = 6,
        node_LatLon_chosen = 7
    };

    CNodeOffsetPointXY();
    CNodeOffsetPointXY(const CPosition3D&);
    CNodeOffsetPointXY(const CNodeOffsetPointXY&);

    operator NodeOffsetPointXY_t();

    CNodeOffsetPointXY& operator=(const CNodeOffsetPointXY&);

    bool operator==(const CNodeOffsetPointXY&) const;
    bool operator!=(const CNodeOffsetPointXY&) const;

    //TODO: add union when apper problem with low memory
    CPosition3D node_LatLon_field;

  private:
    NodeOffsetPointXY_t node_ = NodeOffsetPointXY_t();
    const Id id = node_LatLon_chosen;

};

} /* v2x */
} /* frame */

#endif /* NODE_OFFSET_POINT_XY_HPP_ */
