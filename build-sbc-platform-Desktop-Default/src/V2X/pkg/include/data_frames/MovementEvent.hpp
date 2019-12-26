#ifndef MOVEMENT_EVENT_HPP_
#define MOVEMENT_EVENT_HPP_

#include "data_elements/MovementPhaseState.hpp"

#include "TimeChangeDetails.hpp"
#include "AdvisorySpeed.hpp"

#include "MovementEvent.h"
#include <vector>

/*
 * The MovementEvent data frame contains details about a single movement. It is
 * used by the movement state to convey one of number of movements (typically
 * occurring over a sequence of times) for a SignalGroupID.
 *
 * MovementEvent ::= SEQUENCE {
 *      eventState MovementPhaseState,
 *      timing     TimeChangeDetails OPTIONAL,
 *      speeds     AdvisorySpeedList OPTIONAL,
 *      regional   SEQUENCE (SIZE(1..4)) OF
 *               RegionalExtension {{REGION.Reg-MovementEvent}} OPTIONAL,
 *      ...
 * }
 */


namespace v2x {
namespace frame {

using namespace element;

class CMovementEvent;
typedef std::vector<CMovementEvent> CMovementEventList;

class CMovementEvent {
  public:
    CMovementEvent();
    CMovementEvent(const CMovementPhaseState&);
    CMovementEvent(const MovementEvent_t&);

    CMovementEvent(const CMovementEvent&);

    explicit operator MovementEvent_t();

    CMovementEvent & operator = (const CMovementEvent &);
    bool operator == (const CMovementEvent &) const;
    bool operator != (const CMovementEvent &) const;

    CMovementPhaseState eventState;
    CTimeChangeDetails timing;
    CAdvisorySpeedList speeds;

  private:
    MovementEvent_t MovementEvent_{};
};

} /* frame */
} /* v2x */

void freeMovementEventASN(MovementEvent_t *);

#endif /* MOVEMENT_EVENT_HPP_ */
