#ifndef SPEED_CONFIDENCE_HPP_
#define SPEED_CONFIDENCE_HPP_

#include "SpeedConfidence.h"

/*
 * The DE_SpeedConfidencedata  elementis  used  to  provide  the  95%  confidence
 * level  for  the  currently  reported value  of  DE_Speed,  taking  into  account  
 * the  current  calibration  and  precision  of  the  sensor(s)  used  to  measure  
 * and/or calculate  the  value. This  data  element  is  only  to  provide  
 * the  listener  with  information  on  the  limitations  of  the  sensing system, 
 * not to support any type of automatic error correction or to imply a guaranteed 
 * maximum error. This data element should not be used for fault detection or diagnosis, 
 * but if a vehicle is able to detect a fault, the confidence interval should be  
 * increased  accordingly.  The  frame  of  reference  and  axis  of  rotation  used  
 * shall  be  in  accordance  with  that  defined Section 11.
 *  ASN.1   Representation: 
 * 
 *  SpeedConfidence ::= ENUMERATED {
 *      unavailable (0), --Not Equipped or unavailable
 *      prec100ms   (1), --100  meters / sec
 *      prec10ms    (2), --10   meters / sec
 *      prec5ms     (3), --5    meters / sec
 *      prec1ms     (4), --1    meters / sec
 *      prec0-1ms   (5), --0.1  meters / sec
 *      prec0-05ms  (6), --0.05 meters / sec
 *      prec0-01ms  (7)  --0.01 meters / sec
 *      }
 */

namespace v2x {
namespace element {

class CSpeedConfidence {
  public:
    explicit CSpeedConfidence();
    CSpeedConfidence(const SpeedConfidence_t& value);
    virtual ~CSpeedConfidence();
    CSpeedConfidence(const CSpeedConfidence& other);

    explicit operator SpeedConfidence_t() const;
    void set(const SpeedConfidence_t& value);

    CSpeedConfidence& operator=(const CSpeedConfidence& other);

    bool operator==(const CSpeedConfidence& other) const;
    bool operator!=(const CSpeedConfidence& other) const;

    bool operator<(const CSpeedConfidence& other) const;
    bool operator>(const CSpeedConfidence& other) const;

  private:
    SpeedConfidence_t value_;
};

} /* element */
} /* v2x */

#endif /* SPEED_CONFIDENCE_HPP_ */
