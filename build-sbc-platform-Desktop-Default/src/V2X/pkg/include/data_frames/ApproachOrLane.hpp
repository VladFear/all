#ifndef APPROACH_OR_LANE_HPP_
#define APPROACH_OR_LANE_HPP_

/*
 * The ApproachOrLane data frame is used to indicate a single approach or lane of interest. A typical use case would
 * be to relate where a vehicle was located with respect to the indexing system used in a DSRC map. Under many
 * operational conditions the precise lane may be unknown, and it is typical to then indicate the approach. [The relationship
 * between lane indexes and approach indexes is defined in the map.] A value of zero is used when the lane or approach is
 * unknown. See the entries for each data concept for further details.
 * ASN.1 Representation:
 * ApproachOrLane ::= CHOICE {
 * approach  ApproachID,
 * lane      LaneID
 * }
*/

#include "data_elements/ApproachID.hpp"
#include "data_elements/LaneID.hpp"
#include "ApproachOrLane.h"

using namespace v2x::element;

namespace v2x {
namespace frame {

class CApproachOrLane;

class CApproachOrLane {
  public:
    CApproachOrLane();
    CApproachOrLane(const ApproachOrLane_t&);
    CApproachOrLane(const CApproachOrLane&);
    CApproachOrLane(const CApproachID&, const CLaneID&);

    explicit operator ApproachOrLane_t();

    CApproachOrLane& operator=(const CApproachOrLane&);
    bool operator==(const CApproachOrLane&) const;
    bool operator!=(const CApproachOrLane&) const;

    CApproachID approach;
    CLaneID lane;

  private:
    ApproachOrLane_t ApproachOrLane_ = ApproachOrLane_t();
};

} /* frame */
} /* v2x */

#endif /* APPROACH_OR_LANE_HPP_ */
