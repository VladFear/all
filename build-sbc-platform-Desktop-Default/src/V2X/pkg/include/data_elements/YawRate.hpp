#ifndef YAW_RATE_HPP_
#define YAW_RATE_HPP_

#include "YawRate.h"

/*
 * The DE_YawRate data element provides the Yaw Rate of the vehicle, a signed value (to the right being positive)
 * expressed in 0.01 degrees per second. The element can used represent a vehicle's rotation about its vertical axis within a
 * certain time period, often at the time a Probe Data snapshot was taken. Another element, the Yaw Rate Confidence
 * Element provides additional information on the coarseness of the Yaw Rate element also in degrees per second.
 *
 * ASN.1 Representation:
 * YawRate ::= INTEGER (-32767..32767)  -- LSB units of 0.01 degrees per second (signed)
*/

const double UnitYawRate = 0.01;

namespace v2x {
namespace element {

class CYawRate {
  public:
    explicit CYawRate();
    CYawRate(const double&value);

    virtual ~CYawRate();

    CYawRate(const CYawRate &value);
    explicit operator YawRate_t() const;
    explicit operator double() const;

    void set(double const& value);

    CYawRate& operator=(const CYawRate& other);

    bool operator==(const CYawRate& other) const;
    bool operator!=(const CYawRate& other) const;

    bool operator<(const CYawRate& other) const;
    bool operator>(const CYawRate& other) const;

  private:
    YawRate_t value_;
};

} /* element */
} /* v2x */

#endif /* YAW_RATE_HPP_ */
