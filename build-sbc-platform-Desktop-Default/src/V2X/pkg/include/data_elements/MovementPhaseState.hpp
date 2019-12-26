#ifndef MOVEMENT_PHASE_STATE_HPP_
#define MOVEMENT_PHASE_STATE_HPP_

#include "MovementPhaseState.h"

/*
 * It is expected that the allowed transitions from one state to another will be defined by regional deployments. Not all
 * regions will use all states; however, no new states are to be defined. In most regions a regulatory body provides precise
 * legal definitions of these state changes. For example, in the US the MUTCD is used, as is indicated in the US regional
 * variant of the above image. In various regions and modes of transportation, the visual expression of these states varies
 * (the precise meaning of various color combinations, shapes, and/or flashing etc.). The below definition is designed to to
 * be independent of these regional conventions.
 * In the US permissive is often referred to as a "round ball" while protected implies it has a directional arrow associated with
 * it. The allowed single maneuver for a given lane to lane connection can be used to disambiguate this in the ConnectsTo
 * data frame for that lane.
*/

namespace v2x {
namespace element {

class CMovementPhaseState {
  public:
    explicit CMovementPhaseState();
    CMovementPhaseState(const MovementPhaseState_t& value);

    virtual ~CMovementPhaseState();

    CMovementPhaseState(const CMovementPhaseState& other);

    explicit operator MovementPhaseState_t() const;

    void set(const MovementPhaseState_t& value);

    CMovementPhaseState& operator=(const CMovementPhaseState& other);

    bool operator==(const CMovementPhaseState& other) const;
    bool operator!=(const CMovementPhaseState& other) const;

    bool operator<(const CMovementPhaseState& other) const;
    bool operator>(const CMovementPhaseState& other) const;

  private:
    MovementPhaseState_t state_;
};

} /* element */
} /* v2x */

#endif /* MOVEMENT_PHASE_STATE_HPP_ */
