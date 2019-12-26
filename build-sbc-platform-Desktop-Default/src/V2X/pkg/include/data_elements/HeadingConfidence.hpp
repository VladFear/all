#ifndef HEADING_CONFIDENCE_HPP_
#define HEADING_CONFIDENCE_HPP_

#include "HeadingConfidence.h"

/*
 * The DE_HeadingConfidence data element is used to provide the 95% confidence level for the currently reported
 * value of DE_Heading, taking into account the current calibration and precision of the sensor(s) used to measure and/or
 * calculate the value. This data element is only to provide the listener with information on the limitations of the sensing
 * system, not to support any type of automatic error correction or to imply a guaranteed maximum error. This data element
 * should not be used for fault detection or diagnosis, but if a vehicle is able to detect a fault, the confidence interval should
 * be increased accordingly. The frame of reference and axis of rotation used shall be in accordance with that defined
 * Section 11.
 * ASN.1 Representation:
 * HeadingConfidence ::= ENUMERATED {
 * unavailable          (0), -- B'000 Not Equipped or unavailable
 * prec10deg            (1), -- B'010 10    degrees
 * prec05deg            (2), -- B'011 5     degrees
 * prec01deg            (3), -- B'100 1     degrees
 * prec0-1deg           (4), -- B'101 0.1   degrees
 * prec0-05deg          (5), -- B'110 0.05  degrees
 * prec0-01deg          (6), -- B'110 0.01  degrees
 * prec0-0125deg        (7)  -- B'111 0.0125 degrees, aligned with heading LSB
} -- Encoded as a 3 bit value
 */

namespace v2x {
namespace element {

class CHeadingConfidence {
  public:
    explicit CHeadingConfidence();
    CHeadingConfidence(const HeadingConfidence_t& value);
    virtual ~CHeadingConfidence();
    CHeadingConfidence(const CHeadingConfidence& other);

    explicit operator HeadingConfidence_t() const;
    void set(const HeadingConfidence_t& value);

    CHeadingConfidence& operator=(const CHeadingConfidence& other);

    bool operator==(const CHeadingConfidence& other) const;
    bool operator!=(const CHeadingConfidence& other) const;

    bool operator<(const CHeadingConfidence& other) const;
    bool operator>(const CHeadingConfidence& other) const;

  private:
    HeadingConfidence_t value_;
};

} /* element */
} /* v2x */

#endif /* HEADING_CONFIDENCE_HPP_ */
