#ifndef CONNECTING_LANE_HPP_
#define CONNECTING_LANE_HPP_

#include "data_elements/CBitString.hpp"
#include "data_elements/LaneID.hpp"
#include "ConnectingLane.h"

/*
 * The DF_ConnectingLane data concept ties a single lane to a single maneuver needed to reach it from another lane.
 * It is typically used to connect the allowed maneuver from the end of a lane to the outbound lane so that these can be
 * mapped to the SPAT message to which both lanes apply.
 *
 * ASN.1 Representation:
 * ConnectingLane ::= SEQUENCE {
 * lane     LaneID,                        -- Index of the connecting lane
 * maneuver AllowedManeuvers OPTIONAL      -- The Maneuver between
                                           -- the enclosing lane and this lane
                                           -- at the stop line to connect them
 *
 * }
*/

namespace v2x {
namespace frame {

using namespace element;

class CConnectingLane {
  public:

    CConnectingLane();
    CConnectingLane(const CConnectingLane&);
    CConnectingLane(const CLaneID&, const CBitString<12>&);
    CConnectingLane(const CLaneID&);

    explicit operator ConnectingLane_t();
    CConnectingLane& operator=(const CConnectingLane&);
    bool operator==(const CConnectingLane&) const;
    bool operator!=(const CConnectingLane&) const;

    CLaneID lane_field;
    mutable CBitString<12> maneuver_field; /* OPTIONAL */

  private:
    ConnectingLane_t connectingLane_ = ConnectingLane_t();

};

} /* v2x */
} /* frame */

void freeConnectingLaneASN(ConnectingLane_t *asn_type);

#endif /* CONNECTING_LANE_HPP_ */

