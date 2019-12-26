#ifndef INTERSECTION_STATE_HPP_
#define INTERSECTION_STATE_HPP_

/*
 * The IntersectionState data frame is used to convey various information about the
 * current or future movement state of a designated collection of one or more
 * lanes of a common type.
 *
 * IntersectionState ::= SEQUENCE {
 *      movementName     DescriptiveName OPTIONAL,
 *      signalGroup      SignalGroupID,
 *      state-time-speed IntersectionStateList,
 *      maneuverAssistList ManeuverAssistList OPTIONAL,
 *      regional        SEQUENCE (SIZE(1..4)) OF
 *              RegionalExtension {{REGION.Reg-IntersectionState}} OPTIONAL,
 *      ...
 * }
 */


#include "data_elements/LaneID.hpp"
#include "data_elements/MinuteOfTheYear.hpp"
#include "data_elements/MsgCount.hpp"
#include "data_elements/DSecond.hpp"
#include "MovementState.hpp"
#include "IntersectionReferenceID.hpp"
#include "data_elements/CBitString.hpp"
#include "ConnectionManeuverAssist.h"
#include "IntersectionState.h"

namespace v2x {
namespace frame {

using namespace element;

class CIntersectionState;
typedef std::vector<std::shared_ptr<CIntersectionState>> CIntersectionStateList;

class CIntersectionState {
  public:
    CIntersectionState();
    CIntersectionState(CIntersectionReferenceID&, CMovementStateList&, CMsgCount&, CBitString<16>&);

    CIntersectionState(const CIntersectionState&);
    CIntersectionState(const IntersectionState_t&);

    explicit operator IntersectionState_t();
    CIntersectionState& operator=(const CIntersectionState&);
    bool operator==(const CIntersectionState&) const;
    bool operator!=(const CIntersectionState&) const;


    CDescriptiveName name;
    CIntersectionReferenceID id;
    CMsgCount revision;
    CBitString<16> status;
    CMinuteOfTheYear moy;
    CDSecond timeStamp;
    CEnabledLaneList enabledLanes;
    CMovementStateList states;
    CManeuverAssistList maneuverAssistList;

  private:
    IntersectionState_t IntersectionState_{};

};

} /* frame */
} /* v2x */

void freeIntersectionStateASN(IntersectionState_t*);

#endif /* INTERSECTION_STATE_HPP_ */
