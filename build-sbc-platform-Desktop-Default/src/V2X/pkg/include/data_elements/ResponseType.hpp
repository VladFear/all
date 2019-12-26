#ifndef RESPONSE_TYPE_HPP_
#define RESPONSE_TYPE_HPP_

#include <ResponseType.h>

/*
*  7.156  Data Element: DE_ResponseType
 * Use: The response type and general driving behavior which this vehicle is engaged in at the time themessage 
 * is being sent. This is thtype of response (driving behavior) which a public safety, 
 * or other type of authorized vehicle, is engaged in when transmitting alerts. 
 * These are used as part of the DSRC safety message content for public safety vehicles operating in the area.
 * 
 * ASN.1 Representation: 
 *  ResponseType ::= ENUMERATED {
 *    notInUseOrNotEquipped      (0),
 *    emergency                  (1),  --active service call at emergency level
 *    nonEmergency               (2),  --also used when returning from service call
 *    pursuit                    (3),  --sender driving may be erratic
 *    stationary                 (4),  --sender is not moving, stopped along roadside
 *    slowMoving                 (5),  --such a mowers, litter trucks, etc.
 *    stopAndGoMovement          (6),  --such as school bus or garbage truck
 *    ...
 *    }
 * 
 * Used By: This entry is directly used by the following 2 other data structures in this standard (record type, 
 * descriptive name, ASN.1, and XML name (if present) of each):
 *    DF  DF_EmergencyDetails              <ASN>, and
 *    MSG MSG_EmergencyVehicleAlert (EVA)  <ASN>.
 * In addition, this item may be used by data structures in other ITS standards.
 * 
 * 
 * 
 * 
 * 
 * 
 */

namespace v2x {
namespace element {

class CResponseType {
  public:
    explicit CResponseType();
    CResponseType(const ResponseType_t& value);
    virtual ~CResponseType();
    CResponseType(const CResponseType& other);

    explicit operator ResponseType_t() const;
    void set(const ResponseType_t& value);

    CResponseType& operator=(const CResponseType& other);

    bool operator==(const CResponseType& other) const;
    bool operator!=(const CResponseType& other) const;

    bool operator<(const CResponseType& other) const;
    bool operator>(const CResponseType& other) const;

  private:
    ResponseType_t value_;
};

} /* element */
} /* v2x */

#endif	/* RESPONSE_TYPE_HPP_ */
