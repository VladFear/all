#ifndef ROAD_SIDE_ALERT_HPP_
#define ROAD_SIDE_ALERT_HPP_

#include "RoadSideAlert.h"
#include "data_elements/MsgCount.hpp"
#include "data_elements/MinuteOfTheYear.hpp"
#include "data_elements/Extent.hpp"
#include "data_frames/FullPositionVector.hpp"
#include "data_elements/DescriptiveName.hpp"
#include "data_elements/CBitString.hpp"
#include "data_elements/ITIScodes.hpp"

/*
 * This message is used to send alerts for nearby hazards to travelers. Unlike many other messages which use the
 * LRMS profiles to describe the areas affected, this message likely applies to the receiver by the very fact that it is received.
 * In other words, it does not use LRMS. Typically transmitted over the Dedicated Short Range Communications (DSRC)
 * media, this message provides simple alerts to travelers (both in vehicle and with portable devices). Typical example
 * messages would be "bridge icing ahead" or "train coming" or "ambulances operating in the area." The full range of ITIS
 * phrases are supported here, but those dealing with mobile hazards, construction zones, and roadside events are the ones
 * most frequently expected to be found in use.
 * This message is for alerting about roadway hazards; not for vehicle cooperative communications, mayday, or other safety
 * applications. It is generally presumed that each receiving device is aware of its own position and heading, but this is not a
 * requirement to receive and understand these messages, nor is having a local base map.
*/

namespace v2x {
namespace frame {

using namespace v2x::element;

class CRoadSideAlert {
  public:
    CRoadSideAlert();
    CRoadSideAlert(const CITIScodes &);
    CRoadSideAlert(const CMsgCount &, const CITIScodes &);
    CRoadSideAlert(const RoadSideAlert_t&);

    CRoadSideAlert(const CRoadSideAlert&);
    explicit operator RoadSideAlert_t();
    CRoadSideAlert& operator=(const CRoadSideAlert&);
    bool operator==(const CRoadSideAlert&) const;
    bool operator!=(const CRoadSideAlert&) const;

    CMsgCount msgCnt;
    CMinuteOfTheYear timeStamp;
    CITIScodes typeEvent;
    CDescriptiveName priority;
    CBitString<16> heading;
    CExtent extent;
    CFullPositionVector position;
    CDescriptiveName furtherInfoID;

  private:
    RoadSideAlert_t RoadSideAlert_{};
};

} /* frame */
} /* v2x */

void freeRoadSideAlertASN(RoadSideAlert_t*);

#endif /* ROAD_SIDE_ALERT_HPP_ */
