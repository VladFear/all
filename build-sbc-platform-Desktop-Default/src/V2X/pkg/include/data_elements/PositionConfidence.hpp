#ifndef POSITION_CONFIDENCE_HPP_
#define POSITION_CONFIDENCE_HPP_

#include <PositionConfidence.h>

/*
 * The DE_PositionConfidence entry is used to provide the 95% confidence level for the currently reported value of
 * entries such as the DE_Position entries, taking into account the current calibration and precision of the sensor(s) used to
 * measure and/or calculate the value. It is used in the horizontal plane. This data element is only to provide the listener with
 * information on the limitations of the sensing system; not to support any type of automatic error correction or to imply a
 * guaranteed maximum error. This data element should not be used for fault detection or diagnosis, but if a vehicle is able
 * to detect a fault, the confidence interval should be increased accordingly. The frame of reference and axis of rotation used
 * shall be accordance with that defined in Section 11 of this standard.
 *
 * ASN.1 Representation:
 * PositionConfidence ::= ENUMERATED {
 * unavailable (0), -- B'0000 Not Equipped or unavailable
 * a500m       (1), -- B'0001 500m or about 5 * 10 ^ -3 decimal degrees
 * a200m       (2), -- B'0010 200m or about 2 * 10 ^ -3 decimal degrees
 * a100m       (3), -- B'0011 100m or about 1 * 10 ^ -3 decimal degrees
 * a50m        (4), -- B'0100 50m or about 5 * 10 ^ -4 decimal degrees
 * a20m        (5), -- B'0101 20m or about 2 * 10 ^ -4 decimal degrees
 * a10m        (6), -- B'0110 10m or about 1 * 10 ^ -4 decimal degrees
 * a5m         (7), -- B'0111 5m or about 5 * 10 ^ -5 decimal degrees
 * a2m         (8), -- B'1000 2m or about 2 * 10 ^ -5 decimal degrees
 * a1m         (9), -- B'1001 1m or about 1 * 10 ^ -5 decimal degrees
 * a50cm       (10), -- B'1010 0.50m or about 5 * 10 ^ -6 decimal degrees
 * a20cm       (11), -- B'1011 0.20m or about 2 * 10 ^ -6 decimal degrees
 * a10cm       (12), -- B'1100 0.10m or about 1 * 10 ^ -6 decimal degrees
 * a5cm        (13), -- B'1101 0.05m or about 5 * 10 ^ -7 decimal degrees
 * a2cm        (14), -- B'1110 0.02m or about 2 * 10 ^ -7 decimal degrees
 * a1cm        (15) -- B'1111 0.01m or about 1 * 10 ^ -7 decimal degrees
 * }
 * -- Encoded as a 4 bit value
*/

namespace v2x {
namespace element {

class CPositionConfidence {
  public:
    explicit CPositionConfidence();
    CPositionConfidence(const PositionConfidence_t& value);

    virtual ~CPositionConfidence();

    CPositionConfidence(const CPositionConfidence& other);

    explicit operator PositionConfidence_t() const;

    void set(const PositionConfidence_t& value);

    CPositionConfidence& operator=(const CPositionConfidence& other);

    bool operator==(const CPositionConfidence& other) const;
    bool operator!=(const CPositionConfidence& other) const;

    bool operator<(const CPositionConfidence& other) const;
    bool operator>(const CPositionConfidence& other) const;

  private:
    PositionConfidence_t state_;
};

} /* element */
} /* v2x */

#endif	/* POSITION_CONFIDENCE_HPP_ */
