#ifndef LANE_TYPE_ATTRIBUTES_HPP_
#define LANE_TYPE_ATTRIBUTES_HPP_

#include "data_elements/CBitString.hpp"
#include "LaneTypeAttributes.h"

/*
 * Use: The Lane Type Attributes data frame is used to hold attribute information specific to a given lane type. It is typically
 * used in the DE_LaneAttributes data frame as part of an overall description of a lane object. Information unique to the
 * specific type of lane is found here. Information common to lanes is expressed in other entries. The various values are set
 * by bit flags to indicate the assertion of a value. Each defined lane type contains bit flags suitable for its application area.
 *
 * ASN.1 Representation:
 * LaneTypeAttributes ::= CHOICE {
 * vehicle         LaneAttributes-Vehicle,        -- motor vehicle lanes
 * crosswalk       LaneAttributes-Crosswalk,      -- pedestrian crosswalks
 * bikeLane        LaneAttributes-Bike,           -- bike lanes
 * sidewalk        LaneAttributes-Sidewal         -- pedestrian sidewalk paths
 * median          LaneAttributes-Barrier,        -- medians & channelization
 * striping        LaneAttributes-Striping,       -- roadway markings
 * trackedVehicle  LaneAttributes-TrackedVehicle, -- trains and trolleys
 * parking         LaneAttributes-Parking,        -- parking and stopping lanes
 * ... }
*/

namespace v2x {
namespace frame {

    class CLaneTypeAttributes {
    public:
        enum Id {
            unselected,
            vehicle_chosen = 1,
            crosswalk_chosen = 2,
            bikeLane_chosen = 3,
            sidewalk_chosen = 4,
            median_chosen = 5,
            striping_chosen = 6,
            trackedVehicle_chosen = 7,
            parking_chosen = 8
        };

        CLaneTypeAttributes();
        CLaneTypeAttributes(const CLaneTypeAttributes&);
        CLaneTypeAttributes(const LaneTypeAttributes_t &);

        CLaneTypeAttributes& operator=(const CLaneTypeAttributes&);
        bool operator==(const CLaneTypeAttributes&) const;
        bool operator!=(const CLaneTypeAttributes&) const;

        explicit operator LaneTypeAttributes_t ();

        v2x::element::CBitString<8> get_vehicle() const;
        void set_vehicle(const size_t& pos);
        void set_vehicle(const v2x::element::CBitString<8>&);

        v2x::element::CBitString<16> get_crosswalk() const;
        void set_crosswalk(const size_t& pos);
        void set_crosswalk(const v2x::element::CBitString<16>&);

        v2x::element::CBitString<16> get_bikeLane() const;
        void set_bikeLane(const size_t& pos);
        void set_bikeLane(const v2x::element::CBitString<16>&);

        v2x::element::CBitString<16> get_sidewalk() const;
        void set_sidewalk(const size_t& pos);
        void set_sidewalk(const v2x::element::CBitString<16>&);

        v2x::element::CBitString<16> get_median() const;
        void set_median(const size_t& pos);
        void set_median(const v2x::element::CBitString<16>&);

        v2x::element::CBitString<16> get_striping() const;
        void set_striping(const size_t& pos);
        void set_striping(const v2x::element::CBitString<16>&);

        v2x::element::CBitString<16> get_trackedVehicle() const;
        void set_trackedVehicle(const size_t& pos);
        void set_trackedVehicle(const v2x::element::CBitString<16>&);

        v2x::element::CBitString<16> get_parking() const;
        void set_parking(const size_t& pos);
        void set_parking(const v2x::element::CBitString<16>&);
        LaneTypeAttributes_t laneTypeAttributes_= {};

    private:
        //TODO: add union when apper problem with low memory
        v2x::element::CBitString<8> vehicle_field;
        v2x::element::CBitString<16> crosswalk_field;
        v2x::element::CBitString<16> bikeLane_field;
        v2x::element::CBitString<16> sidewalk_field;
        v2x::element::CBitString<16> median_field;
        v2x::element::CBitString<16> striping_field;
        v2x::element::CBitString<16> trackedVehicle_field;
        v2x::element::CBitString<16> parking_field;
    };

} /* frame */
} /* v2x */

void freeLaneTypeAttributesASN(LaneTypeAttributes_t *asn_type);

#endif /* LANE_TYPE_ATTRIBUTES_HPP_ */
