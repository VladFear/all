#ifndef THROTTLE_CONFIDENCE_HPP_
#define THROTTLE_CONFIDENCE_HPP_

#include "ThrottleConfidence.h"

/*
 * The DE_ThrottleConfidence data element is used to provide the 95% confidence level for the currently reported
 * value of DE_Throttle, taking into account the current calibration and precision of the sensor(s) used to measure and/or
 * calculate the value. This data element is only to provide information on the limitations of the sensing system, not to
 * support any type of automatic error correction or to imply a guaranteed maximum error. This data element should not be
 * used for fault detection or diagnosis, but if a vehicle is able to detect a fault, the confidence interval should be increased
 * accordingly. If a fault that triggers the MIL is of a nature to render throttle performance unreliable, then ThrottleConfidence
 * should be represented as "notEquipped."
 *
 * ASN.1 Representation:
 * ThrottleConfidence ::= ENUMERATED {
 * unavailable      (0), -- B'00 Not Equipped or unavailable
 * prec10percent    (1), -- B'01 10  percent Confidence level
 * prec1percent     (2), -- B'10 1   percent Confidence level
 * prec0-5percent   (3) -- B'11 0.5  percent Confidence level
 * }
 */

namespace v2x {
namespace element {

class CThrottleConfidence {
  public:
    explicit CThrottleConfidence();
    CThrottleConfidence(const ThrottleConfidence_t& value);
    virtual ~CThrottleConfidence();
    CThrottleConfidence(const CThrottleConfidence& other);

    explicit operator ThrottleConfidence_t() const;
    void set(const ThrottleConfidence_t& value);

    CThrottleConfidence& operator=(const CThrottleConfidence& other);

    bool operator==(const CThrottleConfidence& other) const;
    bool operator!=(const CThrottleConfidence& other) const;

    bool operator<(const CThrottleConfidence& other) const;
    bool operator>(const CThrottleConfidence& other) const;

  private:
    ThrottleConfidence_t value_;
};

} /* element */
} /* v2x */

#endif /* THROTTLE_CONFIDENCE_HPP_ */
