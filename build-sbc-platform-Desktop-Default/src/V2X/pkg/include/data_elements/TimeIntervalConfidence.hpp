#ifndef TIME_INTERVAL_CONFIDENCE_HPP_
#define TIME_INTERVAL_CONFIDENCE_HPP_

#include "TimeIntervalConfidence.h"

/*
 * This is the statistical confidence for the predicted time of signal group
 * state change. For evaluation, the formula 10^(x/a)-b with a=82.5 and b=1.3
 * was used. The values are encoded as probability classes with proposed values
 * listed in the below table in the ASN.1 specification.
 *
 * TimeIntervalConfidence ::= INTEGER (0..15)
 */

namespace v2x {
namespace element {

class CTimeIntervalConfidence {
  public:
    CTimeIntervalConfidence();
    CTimeIntervalConfidence(const TimeIntervalConfidence_t& value);

    virtual ~CTimeIntervalConfidence();

    CTimeIntervalConfidence(const CTimeIntervalConfidence& other);
    explicit operator TimeIntervalConfidence_t() const;

    void set(const TimeIntervalConfidence_t& value);

    CTimeIntervalConfidence& operator=(const CTimeIntervalConfidence& other);

    bool operator==(const CTimeIntervalConfidence& other) const;
    bool operator!=(const CTimeIntervalConfidence& other) const;
    bool operator<(const CTimeIntervalConfidence& other) const;
    bool operator>(const CTimeIntervalConfidence& other) const;

  private:
    TimeIntervalConfidence_t _time_interval_confidence;
};

} /* v2x */
} /* element */

#endif /* TIME_INTERVAL_CONFIDENCE_HPP_ */
