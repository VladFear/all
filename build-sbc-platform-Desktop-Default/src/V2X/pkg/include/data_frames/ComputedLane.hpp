#ifndef COMPUTED_LANE_HPP_
#define COMPUTED_LANE_HPP_

#include "ComputedLane.h"
#include "data_elements/LaneID.hpp"
#include "data_elements/DrivenLineOffsetSmall.hpp"
#include "data_elements/DrivenLineOffsetLarge.hpp"
#include "data_elements/Scale-B12.hpp"
#include "data_elements/Angle.hpp"

/*
 * The DF_ComputedLane data frame is used to contain information needed to compute one lane from another
 * (hence the name). This concept is used purely as a means of saving size in the message payload. The new lane is
 * expressed as an X,Y offset from the first point of the source lane. It can be optionally rotated and scaled. Any attribute
 * information found within the node of the source lane list cannot be changed and must be reused.
 *
 * ASN.1 Representation:
 * ComputedLane ::= SEQUENCE {
 * -- Data needed to created a computed lane
 * referenceLaneId  LaneID, -- the lane ID upon which this
                            -- computed lane will be based
                            -- Lane Offset in X and Y direction
 * offsetXaxisC
         CHOICE {
          small DrivenLineOffsetSm,
          large DrivenLineOffsetLg
                },
 * offsetYaxis
         CHOICE {
          small DrivenLineOffsetSm,
          large DrivenLineOffsetLg
                },
          -- A path X offset value for translations of the
          -- path's points when creating translated lanes.
          -- The values found in the reference lane are
          -- all offset based on the X and Y values from
          -- the coordinates of the reference lane's
          -- initial path point.
 * -- Lane Rotation
 * rotateXY Angle OPTIONAL,
          -- A path rotation value for the entire lane
          -- Observe that this rotates the existing orientation
          -- of the referenced lane, it does not replace it.
          -- Rotation occurs about the initial path point.
          -- Lane Path Scale (zooming)
 * scaleXaxis Scale-B12 OPTIONAL,
 * scaleYaxis Scale-B12 OPTIONAL,
          -- value for translations or zooming of the path's
          -- points. The values found in the reference lane
          -- are all expanded or contracted based on the X
          -- and Y and width values from the coordinates of
          -- the reference lane's initial path point.
          -- The Z axis remains untouched.
 * regional SEQUENCE (SIZE(1..4)) OF RegionalExtension {{REGION.Reg-ComputedLane}} OPTIONAL,
 * ... }
*/

namespace v2x {
namespace frame {

using namespace element;

class CComputedLane {
public:
    CComputedLane();
    CComputedLane(const ComputedLane_t&);
    CComputedLane(const CLaneID&, const CDrivenLineOffsetLg&, const CDrivenLineOffsetLg&);
    CComputedLane(const CComputedLane&);

    explicit operator ComputedLane_t();

    CComputedLane& operator=(const CComputedLane&);
    bool operator==(const CComputedLane&) const;
    bool operator!=(const CComputedLane&) const;

    CLaneID referenceLaneId;
    /* add union when appear problem with memory */
    CDrivenLineOffsetSm offsetXaxisSmall;
    CDrivenLineOffsetLg offsetXaxisLarge;

    /* add union when appear problem with memory */
    CDrivenLineOffsetSm offsetYaxisSmall;
    CDrivenLineOffsetLg offsetYaxisLarge;

    CAngle rotateXY; /* OPTIONAL */

    CScale_B12 scaleXaxis; /* OPTIONAL */
    CScale_B12 scaleYaxis; /* OPTIONAL */

  private:
    ComputedLane_t ComputedLane_{};
};

} /* frame */
} /* v2x */

void freeComputedLaneASN(ComputedLane_t *asn_type);

#endif /* COMPUTED_LANE_HPP_ */
