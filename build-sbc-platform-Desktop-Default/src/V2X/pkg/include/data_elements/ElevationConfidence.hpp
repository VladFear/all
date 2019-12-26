#ifndef ELEVATION_CONFIDENCE_HPP_
#define ELEVATION_CONFIDENCE_HPP_

#include <ElevationConfidence.h>

/*
 * The DE_ElevationConfidence data element is used to provide the 95% confidence level for the currently reported
 * value of DE_Elevation, taking into account the current calibration and precision of the sensor(s) used to measure and/or
 * calculate the value. This data element is only to provide the listener with information on the limitations of the sensing
 * system, not to support any type of automatic error correction or to imply a guaranteed maximum error. This data element
 * should not be used for fault detection or diagnosis, but if a vehicle is able to detect a fault, the confidence interval should
 * be increased accordingly. The frame of reference and axis of rotation used shall be in accordance with that defined in
 * Section 11.
 *
 * ASN.1 Representation:
 * ElevationConfidence ::= ENUMERATED {
 * unavailable (0), -- B'0000 Not Equipped or unavailable
 * elev-500-00 (1), -- B'0001 (500 m)
 * elev-200-00 (2), -- B'0010 (200 m)
 * elev-100-00 (3), -- B'0011 (100 m)
 * elev-050-00 (4), -- B'0100 (50 m)
 * elev-020-00 (5), -- B'0101 (20 m)
 * elev-010-00 (6), -- B'0110 (10 m)
 * elev-005-00 (7), -- B'0111 (5 m)
 * elev-002-00 (8), -- B'1000 (2 m)
 * elev-001-00 (9), -- B'1001 (1 m)
 * elev-000-50 (10), -- B'1010 (50 cm)
 * elev-000-20 (11), -- B'1011 (20 cm)
 * elev-000-10 (12), -- B'1100 (10 cm)
 * elev-000-05 (13), -- B'1101 (5 cm)
 * elev-000-02 (14), -- B'1110 (2 cm)
 * elev-000-01 (15) -- B'1111 (1 cm)
 * } -- Encoded as a 4
*/

namespace v2x {
namespace element {

class CElevationConfidence {
  public:
    explicit CElevationConfidence();
    CElevationConfidence(const ElevationConfidence_t& value);

    virtual ~CElevationConfidence();

    CElevationConfidence(const CElevationConfidence& other);

    explicit operator ElevationConfidence_t() const;

    void set(const ElevationConfidence_t& value);

    CElevationConfidence& operator=(const CElevationConfidence& other);

    bool operator==(const CElevationConfidence& other) const;
    bool operator!=(const CElevationConfidence& other) const;

    bool operator<(const CElevationConfidence& other) const;
    bool operator>(const CElevationConfidence& other) const;

  private:
    ElevationConfidence_t state_;
};

} /* element */
} /* v2x */

#endif	/* ELEVATION_CONFIDENCE_HPP_ */
