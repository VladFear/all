#ifndef CONNECTION_MANEUVER_ASSIST_HPP_
#define CONNECTION_MANEUVER_ASSIST_HPP_

#include "data_elements/LaneConnectionID.hpp"
#include "data_elements/ZoneLength.hpp"
#include "data_elements/WaitOnStopline.hpp"
#include "data_elements/PedestrianBicycleDetect.hpp"
#include "ConnectionManeuverAssist.h"
#include <vector>

/*
 * The ConnectionManeuverAssist data frame contains information about the the
 * dynamic flow of traffic for the lane(s) and maneuvers in question (as
 *  determined by the LaneConnectionID)
 *
 * ConnectionManeuverAssist ::= SEQUENCE {
 *     connectionID       LaneConnectionID,
 *     queueLength        ZoneLength OPTIONAL,
 *     availableStorageLength ZoneLength OPTIONAL,
 *     waitOnStop         WaitOnStopline OPTIONAL,
 *     pedBicycleDetect   PedestrianBicycleDetect OPTIONAL,
 *     regional SEQUENCE (SIZE(1..4)) OF
 *           RegionalExtension {{REGION.Reg-ConnectionManeuverAssist}} OPTIONAL,
 *     ...
 * }
 */

namespace v2x {
namespace frame {

class CConnectionManeuverAssist;
typedef std::vector<CConnectionManeuverAssist> CManeuverAssistList;

using namespace element;

class CConnectionManeuverAssist {
  public:
    CConnectionManeuverAssist();
    CConnectionManeuverAssist(const CLaneConnectionID&);

    CConnectionManeuverAssist(const CConnectionManeuverAssist&);
    CConnectionManeuverAssist(const ConnectionManeuverAssist_t&);

    explicit operator ConnectionManeuverAssist_t();

    CConnectionManeuverAssist& operator=(const CConnectionManeuverAssist&);

    bool operator==(const CConnectionManeuverAssist&) const;
    bool operator!=(const CConnectionManeuverAssist&) const;

    CLaneConnectionID connectionID;
    CZoneLength queueLength;
    CZoneLength availableStorageLength;
    CWaitOnStopline waitOnStopline;
    CPedestrianBicycleDetect pedBicycleDetect;
  private:
    ConnectionManeuverAssist_t ConnectionManeuverAssist_{};

};

} /* frame */
} /* v2x */

void freeConnectionManeuverAssistASN(ConnectionManeuverAssist_t*);

#endif /* CONNECTION_MANEUVER_ASSIST_HPP_ */
