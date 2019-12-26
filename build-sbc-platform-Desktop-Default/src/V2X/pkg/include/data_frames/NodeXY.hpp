#ifndef NODE_XY_HPP_
#define NODE_XY_HPP_

/*
 * The DF_NodeXY data frame presents a structure to hold data for a single node point in a path. Each selected node
 * has an X and Y offset from the prior node point (or a complete lat-long representation in some cases) as well as optional
 * attribute information. The node list for a lane (or other object) is made up of a sequence of these to describe the desired
 * path. The X,Y points are selected to reflect the centerline of the path with sufficient accuracy for the intended applications.
 * Simple lanes can be adequately described with only two node points, while lanes with curvature may require more points.
 * Changes to the lane width and elevation can be expressed in the NodeAttributes entry, as well as various attributes that
 * pertain to either the current node point or to one of more subsequent segments along the list of lane node points. As a
 * broad concept, NodeAttributes are used to describe aspects of the lane that persist for only a portion of the overall lane
 * path (either at a node or over a set of segments).
 * A further description of the use of the NodeOffsetPoint and the Attributes data concepts can be found in the data
 * dictionary entries for each one. Note that each allows regional variants to be supported as well.
 *
 * ASN.1 Representation:
 * NodeXY ::= SEQUENCE {
 * delta NodeOffsetPointXY, -- A choice of which X,Y offset value to use
                            -- this includes various delta values as well a regional choice
 * attributes NodeAttributeSetXY OPTIONAL, -- Any optional Attributes which are needed
                                           -- This includes changes to the current lane width and elevation
 * ... }
 *
*/

#include "NodeOffsetPointXY.hpp"
#include "NodeAttributeSetXY.hpp"
#include "NodeXY.h"

namespace v2x {
namespace frame {

class CNodeXY;
typedef std::vector<CNodeXY> CNodeSetXY;

class CNodeXY {
  public:
    CNodeXY();
    CNodeXY(const NodeXY_t&);
    CNodeXY(const CNodeXY&);
    CNodeXY(const CNodeOffsetPointXY&, const CNodeAttributeSetXY&);
    CNodeXY(const CNodeOffsetPointXY&);
    CNodeXY(const CPosition3D& coord);

    explicit operator NodeXY_t();

    CNodeXY& operator=(const CNodeXY&);
    bool operator==(const CNodeXY&) const;
    bool operator!=(const CNodeXY&) const;

    CNodeOffsetPointXY delta_field;
    CNodeAttributeSetXY attributes_field; /* OPTIONAL */

  private:
    NodeXY_t _node{};
};

} /* frame */
} /* v2x */

void freeNodeXYASN(NodeXY_t*);

#endif /* NODE_XY_HPP_ */
