#ifndef EMERGENCY_VEHICLE_HPP_
#define EMERGENCY_VEHICLE_HPP_

#include "data_elements/MinuteOfTheYear.hpp"
#include "data_elements/ResponseType.hpp"
#include "data_elements/TemporaryID.hpp"
#include "data_elements/VehicleMass.hpp"
#include "data_elements/VehicleType.hpp"
#include "data_frames/EmergencyDetails.hpp"
#include "RoadSideAlert.hpp"
#include "EmergencyVehicleAlert.h"

/*
 * The Emergency Vehicle Alert message is used to broadcast warning messages to surrounding vehicles that an
 * emergency vehicle (typically an incident responder of some type) is operating in the vicinity and that additional caution is
 * required. The message itself is built on the original ATIS roadside alert message which in turn uses the common ITIS
 * phrase list to both describe the event and provide advice and recommendation for travelers. The Emergency Vehicle Alert
 * message appends to the message some additional data elements regarding the overall type of vehicle involved and other
 * useful data. Note that this message can be used by both private and public response vehicles, and that the relative priority
 * of each (as well as security certificates) is determined in the application layer.
 *
 * ASN.1 Representation:
 * EmergencyVehicleAlert ::= SEQUENCE {
 * timeStamp            MinuteOfTheYear   OPTIONAL,
 * id                   TemporaryID       OPTIONAL,
 * rsaMsg               RoadSideAlert,              -- the DSRCmsgID inside this
                                                    -- data frame is set as per the
                                                    -- RoadSideAlert.
 * responseType         ResponseType      OPTIONAL,
 * details              EmergencyDetails  OPTIONAL, -- Combines these 3 items:
                                                    -- SirenInUse,
                                                    -- LightbarInUse,
                                                    -- MultiVehicleReponse,
 * mass                 VehicleMass       OPTIONAL,
 * basicType            VehicleType       OPTIONAL, -- gross size and axle cnt
 * */

namespace v2x {
namespace frame {

using namespace v2x::element;

class EmergencyVehicle {
  public:
    EmergencyVehicle();
    EmergencyVehicle(const CRoadSideAlert &);
    EmergencyVehicle(const EmergencyVehicleAlert_t &);

    EmergencyVehicle(const EmergencyVehicle&);
    explicit operator EmergencyVehicleAlert_t();
    EmergencyVehicle& operator=(const EmergencyVehicle&);
    bool operator==(const EmergencyVehicle&) const;
    bool operator!=(const EmergencyVehicle&) const;

    CMinuteOfTheYear timeStamp;
    CTemporaryID id;
    CRoadSideAlert rsaMsg;
    CResponseType responseType;
    CEmergencyDetails details;
    CVehicleMass mass;
    CVehicleType basicType;

  private:
    EmergencyVehicleAlert_t EmergencyVehicleAlert_{};
};

} /* frame */
} /* v2x */

#endif /* EMERGENCY_VEHICLE_HPP_ */
