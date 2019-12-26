#ifndef FULL_POSITION_VECTOR_HPP
#define FULL_POSITION_VECTOR_HPP

#include "data_elements/Latitude.hpp"
#include "data_elements/Longitude.hpp"
#include "data_elements/Elevation.hpp"
#include "data_elements/Heading.hpp"
#include "data_elements/TimeConfidence.hpp"

#include "TransmissionAndSpeed.hpp"
#include "PositionAccuracy.hpp"
#include "PositionConfidenceSet.hpp"
#include "SpeedandHeadingandThrottleConfidence.hpp"
#include "DDateTime.hpp"

#include "FullPositionVector.h"

/*
 * A complete report of the vehicle's position, speed, and heading at an instant in time. Used in the probe vehicle
 * message (and elsewhere) as the initial position information. Often followed by other data frames that may provide offset
 * path data.
 *
 * ASN.1 Representation:
 * FullPositionVector ::= SEQUENCE {
 * utcTime                          DDateTime                       OPTIONAL, -- time with mSec precision
 * long                             Longitude,                                -- 1/10th microdegree
 * lat                              Latitude,                                 -- 1/10th microdegree
 * elevation                        Elevation                       OPTIONAL, -- units of 0.1 m
 * heading                          Heading                         OPTIONAL,
 * speed                            TransmissionAndSpeed            OPTIONAL,
 * posAccuracy                      PositionalAccuracy              OPTIONAL,
 * timeConfidence                   TimeConfidence                  OPTIONAL,
 * posConfidence                    PositionConfidenceSet           OPTIONAL,
 * speedConfidence                  SpeedandHeadingandThrottleConfidence OPTIONAL,
 * ...
 * }
*/

namespace v2x {
namespace frame {

class CFullPositionVector {
    typedef CDDateTime utcTime;
  public:
    CFullPositionVector();
    CFullPositionVector(const FullPositionVector_t &);
    CFullPositionVector(const CFullPositionVector &);
    CFullPositionVector(const CLongitude&, const CLatitude&);

    explicit operator FullPositionVector_t();

    CFullPositionVector & operator = (const CFullPositionVector &);
    bool operator == (const CFullPositionVector &) const;
    bool operator != (const CFullPositionVector &) const;

    utcTime utcTime_field;
    CLongitude longtitude_field;
    CLatitude latitude_field;
    CElevation elevation_field;
    CHeading heading_field;
    CTransmissionAndSpeed speed_field;
    CPositionAccuracy posAccuracy_field;
    CTimeConfidence timeConfidence_field;
    CPositionConfidenceSet posConfidence_field;
    CSpeedandHeadingandThrottleConfidence speedConfidence_field;

  private:
    FullPositionVector_t FullPositionVector_{};
};

}; /* frame */
}; /* v2x */

void freeFullPositionVectorASN(FullPositionVector_t *);

#endif /* FULL_POSITION_VECTOR_HPP */
