#ifndef AMBIENTAIRTEMPERATURE_HPP_
#define AMBIENTAIRTEMPERATURE_HPP_

#include "AmbientAirTemperature.h"

/*
 * data element is used to relate the measured Ambient Air Temperature from a
 * vehicle or other device. Its measurement range and precision follows that defined by
 * the relevant OBD-II standards. This provides for a precision of one degree Celsius
 * and a range of -40 to +230 degrees. In this use we reduce the upper value allow
 * to be +150 and to allow it to be encoded in a one octet value. The value of -40 deg C
 * is encoded as zero and every degree above that increments the transmitted value by one,
 * resulting in a transmission range of 0 to 191. Hence, a measurement value representing
 * 25 degrees Celsius is transmitted as 40+25=65 or Hex 0x41.
 *
 * ASN.1 Representation:
 *   AmbientAirTemperature ::= INTEGER (0..191)
 *   -- in deg C with a -40 offset
 *   -- The value 191 shall indicate an unknown value
 */

namespace v2x {
namespace element {

class CAmbientAirTemperature {
  public:
    explicit CAmbientAirTemperature();

    CAmbientAirTemperature(const AmbientAirTemperature_t& value);

    virtual ~CAmbientAirTemperature();

    CAmbientAirTemperature(const CAmbientAirTemperature& other);
    explicit operator AmbientAirTemperature_t() const;
    explicit operator int() const;


    void set(const AmbientAirTemperature_t& value);

    CAmbientAirTemperature& operator=(const CAmbientAirTemperature& other);

    bool operator==(const CAmbientAirTemperature& other) const;
    bool operator!=(const CAmbientAirTemperature& other) const;

    bool operator<(const CAmbientAirTemperature& other) const;
    bool operator>(const CAmbientAirTemperature& other) const;

  private:
    AmbientAirTemperature_t value_;
};

} /* element */
} /* v2x */

#endif /* AMBIENTAIRTEMPERATURE_HPP_ */
