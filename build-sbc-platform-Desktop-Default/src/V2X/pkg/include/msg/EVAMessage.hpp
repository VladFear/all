#ifndef EVA_MESSAGE_HPP_
#define EVA_MESSAGE_HPP_

#include "IV2XMessage.hpp"
#include "data_frames/EmergencyVehicle.hpp"

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
 * timeStamp        MinuteOfTheYear                                     OPTIONAL,
 * id               TemporaryID                                         OPTIONAL,
 * rsaMsg           RoadSideAlert,  -- the DSRCmsgID inside this
                                    -- data frame is set as per the
                                    -- RoadSideAlert.
 * responseType     ResponseType                                        OPTIONAL,
 * details          EmergencyDetails                                    OPTIONAL,
                                    -- Combines these 3 items:
                                    -- SirenInUse,
                                    -- LightbarInUse,
                                    -- MultiVehicleReponse,
 * mass             basicType                                           OPTIONAL,
 * VehicleMass      VehicleType                                         OPTIONAL,
                                    -- gross size and axle cnt
 * -- type of vehicle and agency when known
 * vehicleType      ITIS.VehicleGroupAffected                           OPTIONAL,
 * responseEquip    ITIS.IncidentResponseEquipment                      OPTIONAL,
 * responderType    ITIS.ResponderGroupAffected                         OPTIONAL,
 * regional         SEQUENCE (SIZE(1..4)) OF
                    RegionalExtension {{REGION.Reg-EmergencyVehicleAlert}} OPTIONAL,
 * ... }
*/

namespace v2x {
namespace msg {

class EVAMessage: public IV2XMessage {
  public:
    EVAMessage();
    virtual ~EVAMessage() override;

    void setV2XParams(const std::shared_ptr<v2x::frame::EmergencyVehicle> src);
    void getV2XParams(std::shared_ptr<v2x::frame::EmergencyVehicle> dest);

    virtual void setMessageFrame(std::shared_ptr<MessageFrame_t> frame) override;
    virtual std::shared_ptr<MessageFrame_t> getMessageFrame() override;
    virtual V2XMessageType getType() override {
        return V2XMessageType::EVA;
    }

  private:
    std::shared_ptr<MessageFrame_t> messageFrame_;
    void freeEVAMsgMem(const std::shared_ptr<MessageFrame_t> &msgFrame);

};

} /* msg */
} /* v2x */

#endif /* EVA_MESSAGE_HPP_ */
