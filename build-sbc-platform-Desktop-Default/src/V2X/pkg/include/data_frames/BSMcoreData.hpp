#ifndef BSMcore_Data_HPP_
#define BSMcore_Data_HPP_

#include "data_elements/Latitude.hpp"
#include "data_elements/Longitude.hpp"
#include "data_elements/Elevation.hpp"
#include "data_elements/TransmissionState.hpp"
#include "data_elements/Speed.hpp"
#include "data_elements/Heading.hpp"
#include "data_elements/SteeringWheelAngle.hpp"
#include "data_elements/TemporaryID.hpp"
#include "data_frames/PositionAccuracy.hpp"
#include "data_frames/AccelerationSet4Way.hpp"
#include "data_frames/BrakeSystemStatus.hpp"
#include "data_frames/VehicleSize.hpp"
#include "data_elements/DSecond.hpp"
#include "data_elements/MsgCount.hpp"
#include "BSMcoreData.h"

/*
 * The DF_BSMcoreData data frame contains the critical core data elements deemed to be needed with every BSM
 * issued. This data frame’s contents are often referred to as the "BSM Part One", although it is reused in other places as
 * well.
 * ASN.1 Representation:
 * BSMcoreData ::= SEQUENCE {
 * msgCnt           MsgCount,
 * id               TemporaryID,
 * secMark          DSecond,
 * lat              Latitude,
 * long             Longitude,
 * elev             Elevation,
 * accuracy         PositionalAccuracy,
 * transmission     TransmissionState,
 * speed            Speed,
 * heading          Heading,
 * angle            SteeringWheelAngle,
 * accelSet         AccelerationSet4Way,
 * brakes           BrakeSystemStatus,
 * size             VehicleSize
 * }
*/


namespace v2x {
namespace frame {

class CBSMcoreData {
  public:
    CBSMcoreData();
    CBSMcoreData(const BSMcoreData_t &);

    CBSMcoreData(const CBSMcoreData &);
    explicit operator BSMcoreData_t();
    CBSMcoreData& operator=(const CBSMcoreData&);

    bool operator==(const CBSMcoreData&) const;
    bool operator!=(const CBSMcoreData&) const;

    CMsgCount msgCount;
    CTemporaryID tempId;
    CDSecond secMark;
    CLatitude latitude;
    CLongitude longitude;
    CElevation elevation;
    CPositionAccuracy accuracy;
    CTransmissionState transmissionState;
    CSpeed speed;
    CHeading heading;
    CSteeringWheelAngle angle;
    CAccelerationSet4Way accelSet;
    CBrakeSystemStatus brakeSystemStatus;
    CVehicleSize vehicleSize;

  private:
    BSMcoreData_t BSMcoreData_{};

};

} /* frame */
} /* v2x */

#endif /* BSMcore_Data_HPP_ */
