#ifndef MOVEMENT_STATE_HPP_
#define MOVEMENT_STATE_HPP_

/*
 * The MovementState data frame is used to convey various information about the
 * current or future movement state of a designated collection of one or more
 * lanes of a common type.
 *
 * MovementState ::= SEQUENCE {
 *      movementName     DescriptiveName OPTIONAL,
 *      signalGroup      SignalGroupID,
 *      state-time-speed MovementStateList,
 *      maneuverAssistList ManeuverAssistList OPTIONAL,
 *      regional        SEQUENCE (SIZE(1..4)) OF
 *              RegionalExtension {{REGION.Reg-MovementState}} OPTIONAL,
 *      ...
 * }
 */


#include "AdvisorySpeed.hpp"
#include "TimeChangeDetails.hpp"
#include "MovementEvent.hpp"
#include "data_elements/SignalGroupID.hpp"
#include "data_elements/DescriptiveName.hpp"
#include "data_frames/ConnectionManeuverAssist.hpp"
#include "MovementState.h"
#include <memory>

namespace v2x {
namespace frame {

using namespace element;

class CMovementState;
typedef std::vector<CMovementState> CMovementStateList;

class CMovementState {
  public:
    CMovementState();
    CMovementState(const CSignalGroupID&, const CMovementEventList&);

    CMovementState(const CMovementState&);
    CMovementState(const MovementState_t&);

    explicit operator MovementState_t();

    CMovementState& operator=(const CMovementState&);

    bool operator==(const CMovementState&) const;
    bool operator!=(const CMovementState &) const;

    CDescriptiveName movementName;
    CSignalGroupID signalGroup;
    CMovementEventList stateTimeSpeed;
    CManeuverAssistList maneuverAssistList;

  private:
    MovementState_t MovementState_{};
};

} /* frame */
} /* v2x */

void freeMovementStateASN(MovementState_t*);

#endif /* MOVEMENT_STATE_HPP */
