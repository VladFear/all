#ifndef LANE_ATTRIBUTES_HPP_
#define LANE_ATTRIBUTES_HPP_

#include "data_elements/CBitString.hpp"
#include "LaneTypeAttributes.hpp"
#include "LaneAttributes.h"

/*
 * The DF_LaneAttributes data frame holds all of the constant attribute information of any lane object (as well as
 * denoting the basic lane type itself) within a single structure. Constant attribute information are those values which do not
 * change over the path of the lane, such as the direction of allowed travel. Other lane attribute information can change at or
 * between each node.
 * The structure consists of three element parts as follows: LaneDirection specifies the allowed directions of travel, if any.
 * LaneSharing indicates whether this lane type is shared with other types of travel modes or users. The lane type is defined
 * in LaneTypeAttributes, along with additional attributes specific to that type.
 * The fundamental type of lane object is described by the element selected in the LaneTypeAttributes data concept.
 * Additional information specific or unique to a given lane type can be found there as well. A regional extension is provided
 * as well.
 * Note that combinations of regulatory maneuver information such as "both a left turn and straight ahead movement are
 * allowed, but never a u-turn," are expressed by the AllowedManeuvers data concept which typically follows after this
 * element and in the same structure. Note that not all lane objects require this information (for example a median). The
 * various values are set via bit flags to indicate the assertion of a value. Each defined lane type contains the bit flags
 * suitable for its application area.
 * Note that the concept of LaneSharing is used to indicate that there are other users of this lane with equal regulatory rights
 * to occupy the lane (which is a term this standard does not formally define since it varies by world region). A typical case is
 * a light rail vehicle running along the same lane path as motorized traffic. In such a case, motor traffic may be allowed
 * equal access to the lane when a train is not present. Another case would be those intersection lanes (at the time of writing
 * rather unusual) where bicycle traffic is given full and equal right of way to an entire width of motorized vehicle lane. This
 * example would not be a bike lane or bike box in the traditional sense.
 *
 * ASN.1 Representation:
 * LaneAttributes ::= SEQUENCE {
 * directionalUse LaneDirection,      -- directions of lane use
 * sharedWith     LaneSharing,        -- co-users of the lane path
 * laneType       LaneTypeAttributes, -- specific lane type data
 * regional RegionalExtension {{REGION.Reg-LaneAttributes}} OPTIONAL
 * }
*/

namespace v2x {
namespace frame {

    class CLaneAttributes {
    public:
        enum LaneDirection {
            ingressPath = 0,
            egressPath = 1
        };

        enum LaneSharing {
            overlappingLaneDescriptionProvided = 0,
            multipleLanesTreatedAsOneLane,
            otherNonMotorizedTrafficTypes,
            individualMotorizedVehicleTraffic,
            busVehicleTraffic,
            taxiVehicleTraffic,
            pedestriansTraffic,
            cyclistVehicleTraffic,
            trackedVehicleTraffic,
            pedestrianTraffic
        };

        CLaneAttributes();
        CLaneAttributes(const CLaneAttributes&);
        CLaneAttributes(const LaneAttributes_t &);
        CLaneAttributes(const v2x::element::CBitString<2>&, const v2x::element::CBitString<10>&, const CLaneTypeAttributes&);

        CLaneAttributes& operator=(const CLaneAttributes&);
        int operator==(const CLaneAttributes&) const;
        int operator!=(const CLaneAttributes&) const;

        explicit operator LaneAttributes_t();

        v2x::element::CBitString<2> directionalUse_field;
        v2x::element::CBitString<10> sharedWith_field;
        CLaneTypeAttributes laneType_field;

    private:
        LaneAttributes_t LaneAttributes_{};


    };

} /* frame */
} /* v2x */

    void freeLaneAttributesASN(LaneAttributes_t* asn_type);

#endif /* LANE_ATTRIBUTES_HPP_ */
