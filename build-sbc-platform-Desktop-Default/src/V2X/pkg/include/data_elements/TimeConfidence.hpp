#ifndef TIME_CONFIDENCE_HPP_
#define TIME_CONFIDENCE_HPP_

#include <TimeConfidence.h>

/*
 * The DE_TimeConfidence data element is used to provide the 95% confidence level for the currently reported value
 * of time, taking into account the current calibration and precision of the sensor(s) used to measure and/or calculate the
 * value. This data element is only to provide information on the limitations of the sensing system, not to support any type of
 * automatic error correction or to imply a guaranteed maximum error. This data element should not be used for fault
 * detection or diagnosis, but if a vehicle is able to detect a fault, the confidence interval should be increased accordingly.
*/

namespace v2x {
namespace element {

class CTimeConfidence {
  public:
    explicit CTimeConfidence();
    CTimeConfidence(const e_TimeConfidence& value);

    virtual ~CTimeConfidence();

    CTimeConfidence(const CTimeConfidence& other);

    explicit operator TimeConfidence_t() const;

    void set(const e_TimeConfidence& value);

    CTimeConfidence& operator=(const CTimeConfidence& other);

    bool operator==(const CTimeConfidence& other) const;
    bool operator!=(const CTimeConfidence& other) const;

    bool operator<(const CTimeConfidence& other) const;
    bool operator>(const CTimeConfidence& other) const;

  private:
    TimeConfidence_t state_;
};

}   /* element */
}   /* v2x */

#endif	/* TIME_CONFIDENCE_HPP_ */
