#ifndef SPEEDAND_HEADING_AND_THROTTLE_CONFIDENCE_HPP_
#define SPEEDAND_HEADING_AND_THROTTLE_CONFIDENCE_HPP_

#include "data_elements/SpeedConfidence.hpp"
#include "data_elements/HeadingConfidence.hpp"
#include "data_elements/ThrottleConfidence.hpp"
#include "SpeedandHeadingandThrottleConfidence.h"

/*
 * DF_SpeedHeadingThrottleConfidence data frame is a single data frame combining multiple related bit fields
 * into one concept.
 *
 * ASN.1 Representation:
 * SpeedandHeadingandThrottleConfidence ::= SEQUENCE {
 * heading          HeadingConfidence,
 * speed            SpeedConfidence,
 * throttle         ThrottleConfidence
 * }
*/

namespace v2x {
namespace frame {

using namespace v2x::element;

class CSpeedandHeadingandThrottleConfidence {
  public:
    CSpeedandHeadingandThrottleConfidence();
    CSpeedandHeadingandThrottleConfidence(const CSpeedandHeadingandThrottleConfidence &);
    CSpeedandHeadingandThrottleConfidence(const CHeadingConfidence&, const CSpeedConfidence&,const CThrottleConfidence&);

    CSpeedandHeadingandThrottleConfidence(const SpeedandHeadingandThrottleConfidence_t &);

    explicit operator SpeedandHeadingandThrottleConfidence_t();
    CSpeedandHeadingandThrottleConfidence& operator=(const CSpeedandHeadingandThrottleConfidence&);
    bool operator==(const CSpeedandHeadingandThrottleConfidence&) const;
    bool operator!=(const CSpeedandHeadingandThrottleConfidence&) const;

    CHeadingConfidence heading;
    CSpeedConfidence speed;
    CThrottleConfidence throttle;

  private:
    SpeedandHeadingandThrottleConfidence_t SpeedandHeadingandThrottleConfidence_ = SpeedandHeadingandThrottleConfidence_t();
};

}; /* frame */
}; /* v2x */

#endif /* SPEEDAND_HEADING_AND_THROTTLE_CONFIDENCE_HPP_ */
