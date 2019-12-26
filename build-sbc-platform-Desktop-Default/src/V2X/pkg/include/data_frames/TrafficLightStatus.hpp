#ifndef TRAFFIC_LIGHT_H_
#define TRAFFIC_LIGHT_H_

#include "data_frames/IntersectionState.hpp"
#include "SPAT.h"

/*
 * The Signal Phase and Timing (SPAT) message is used to convey the current status of one or more signalized
 * intersections. Along with the MSG_MapData message (which describes a full geometric layout of an intersection) the
 * receiver of this message can determine the state of the signal phasing and when the next expected phase will occur.
 * The SPAT message sends the current movement state of each active phase in the system as needed (such as values of
 * what states are active and values at what time a state has begun/does begin earliest, is expected to begin most likely and
 * will end latest). The state of inactive movements is not normally transmitted. Movements are mapped to specific
 * approaches and connections of ingress to egress lanes and by use of the SignalGroupID in the MapData message
 * The current signal preemption and priority status values (when present or active) are also sent. A more complete
 * summary of any pending priority or preemption events can be found in the Signal Status message.
 * ASN.1 Representation:
 * SPAT ::= SEQUENCE {
 * timeStamp        MinuteOfTheYear OPTIONAL,
 * name             DescriptiveName OPTIONAL, -- human readable name for this collection
                                              -- to be used only in debug mode
 * intersections IntersectionStateList,       -- sets of SPAT data (one per intersection)
                                              -- If PrioritizationResponse data is required, it is found
                                              -- in the RegionalSPAT entry below
 * regional SEQUENCE (SIZE(1..4)) OF RegionalExtension {{REGION.Reg-SPAT}} OPTIONAL, ... }
*/

namespace v2x {
namespace frame {

using namespace v2x::frame;


class TrafficLightStatus {
  public:
    TrafficLightStatus();
    TrafficLightStatus(const CIntersectionStateList &);
    TrafficLightStatus(const CMinuteOfTheYear &, const CDescriptiveName &);
    TrafficLightStatus(const CIntersectionStateList &, const CMinuteOfTheYear &, const CDescriptiveName &);
    TrafficLightStatus(const SPAT_t&);

    TrafficLightStatus(const TrafficLightStatus&);
    explicit operator SPAT_t();
    TrafficLightStatus& operator=(const TrafficLightStatus&);
    bool operator==(const TrafficLightStatus&) const;
    bool operator!=(const TrafficLightStatus&) const;

    CMinuteOfTheYear timeStamp;
    CDescriptiveName name;
    CIntersectionStateList intersections;

  private:
    SPAT_t SPAT_{};
};

} /* frame */
} /* v2x */

#endif /* TRAFFIC_LIGHT_H_ */
