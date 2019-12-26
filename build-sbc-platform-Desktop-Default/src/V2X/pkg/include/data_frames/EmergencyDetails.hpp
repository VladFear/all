#ifndef EMERGENCY_DETAILS_HPP_
#define EMERGENCY_DETAILS_HPP_

#include "data_elements/SSPindex.hpp"
#include "data_elements/SirenInUse.hpp"
#include "data_elements/LightbarInUse.hpp"
#include "data_elements/MultiVehicleResponse.hpp"
#include "data_frames/PrivilegedEvents.hpp"
#include "data_elements/ResponseType.hpp"
#include "EmergencyDetails.h"


/*
 * The EmergencyDetails data element combines several bit level items into a structure for efficient transmission
 * about the vehicle during a response call.
 *
 * ASN.1 Representation:
 * EmergencyDetails ::= SEQUENCE {
 * -- CERT SSP Privilege Details
 * sspRights            SSPindex, -- index set by CERT
 * sirenUse             SirenInUse,
 * lightsUse            LightbarInUse,
 * multi                MultiVehicleResponse,
 * events               PrivilegedEvents OPTIONAL,
 * responseType         ResponseType OPTIONAL,
 * ... }
*/

using namespace v2x::element;

namespace v2x {
namespace frame {

class CEmergencyDetails
{
public:
    CEmergencyDetails();
    CEmergencyDetails(const CEmergencyDetails &);
    CEmergencyDetails(const EmergencyDetails_t &);

    CEmergencyDetails(const CSSPindex&, const CSirenInUse&, const CLightbarInUse&, const CMultiVehicleResponse&);
    CEmergencyDetails(const CSSPindex&, const CSirenInUse&, const CLightbarInUse&, const CMultiVehicleResponse&, const CPrivilegedEvents&, const CResponseType&);

    explicit operator EmergencyDetails_t();

    CEmergencyDetails & operator = (const CEmergencyDetails &);
    bool operator == (const CEmergencyDetails &) const;
    bool operator != (const CEmergencyDetails &) const;

    CSSPindex sspRights;
    CSirenInUse sirenUse;
    CLightbarInUse lightsUse;
    CMultiVehicleResponse multi;
    CPrivilegedEvents events;
    CResponseType responseType;

private:
    EmergencyDetails_t EmergencyDetails_{};
};

}; /* frame */
}; /* v2x */

void freeEmergencyDetailsASN(EmergencyDetails_t *);

#endif /* EMERGENCY_DETAILS_HPP_ */
