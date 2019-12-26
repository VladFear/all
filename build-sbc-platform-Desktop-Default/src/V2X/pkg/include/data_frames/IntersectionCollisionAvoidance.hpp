#ifndef INTERSECTION_COLLISION_HPP_
#define INTERSECTION_COLLISION_HPP_

#include "data_frames/BSMcoreData.hpp"
#include "data_frames/PathPrediction.hpp"
#include "data_frames/IntersectionReferenceID.hpp"
#include "data_frames/ApproachOrLane.hpp"
#include "data_elements/MinuteOfTheYear.hpp"
#include "data_elements/MsgCount.hpp"
#include "data_frames/PathHistory.hpp"
#include "IntersectionCollision.h"


namespace v2x {
namespace frame {

class IntersectionCollisionAvoidance {

  public:

    IntersectionCollisionAvoidance();
    IntersectionCollisionAvoidance(const IntersectionCollision_t &);

    IntersectionCollisionAvoidance(const IntersectionCollisionAvoidance &);
    explicit operator IntersectionCollision_t();
    IntersectionCollisionAvoidance& operator=(const IntersectionCollisionAvoidance&);

    bool operator==(const IntersectionCollisionAvoidance&) const;
    bool operator!=(const IntersectionCollisionAvoidance&) const;

    CMsgCount msgCnt;
    CTemporaryID tempId;
    CMinuteOfTheYear timeStamp;
    v2x::frame::CBSMcoreData partOne; //BSMCoreData it's Car
    CPathHistory pathHistory;
    CPathPrediction pathPrediction;
    CIntersectionReferenceID  intersectionID;
    CApproachOrLane laneNumber;
    CBitString<13> eventFlag;
  private:
    IntersectionCollision_t IntersectionCollision_{};

};

} /* frame */
} /* v2x */

#endif /* INTERSECTION_COLLISION_HPP_ */
