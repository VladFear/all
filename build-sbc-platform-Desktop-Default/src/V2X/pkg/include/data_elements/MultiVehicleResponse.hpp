#ifndef MULTI_VEHICLE_RESPONSE_HPP_
#define MULTI_VEHICLE_RESPONSE_HPP_

#include <MultiVehicleResponse.h>

/*
 * DE_MultiVehicleResponse is a data element which is set if the vehicle transmitting believes that more than one
 * vehicle (regardless of the dispatch or command and control organization of those vehicles or their agency) are currently
 * en-route or involved in the response to the event. When received in a message by another vehicle OBU, this data element
 * indicates to other vehicles that additional response vehicles may be converging to the same location and that additional
 * caution is warranted.
 * Used to indicate that more that one vehicle is responding and traveling in a closely aligned fashion (one after the other in
 * a loose platoon formation). This DE is intended to be used with the DSRC “public safety vehicle operating in the area” use
 * case.
 *
 * ASN.1 Representation:
 * MultiVehicleResponse ::= ENUMERATED {
 * unavailable      (0), -- Not Equipped or unavailable
 * singleVehicle    (1),
 * multiVehicle     (2),
 * reserved         (3) -- for future use
 * }
*/

namespace v2x {
namespace element {

class CMultiVehicleResponse {
  public:
    explicit CMultiVehicleResponse();
    CMultiVehicleResponse(const MultiVehicleResponse_t& value);

    virtual ~CMultiVehicleResponse();

    CMultiVehicleResponse(const CMultiVehicleResponse& other);

    explicit operator MultiVehicleResponse_t() const;

    void set(const MultiVehicleResponse_t& value);

    CMultiVehicleResponse& operator=(const CMultiVehicleResponse& other);

    bool operator==(const CMultiVehicleResponse& other) const;
    bool operator!=(const CMultiVehicleResponse& other) const;

    bool operator<(const CMultiVehicleResponse& other) const;
    bool operator>(const CMultiVehicleResponse& other) const;

  private:
    MultiVehicleResponse_t state_;
};

} /* element */
} /* v2x */

#endif	/* MULTI_VEHICLE_RESPONSE_HPP_ */
