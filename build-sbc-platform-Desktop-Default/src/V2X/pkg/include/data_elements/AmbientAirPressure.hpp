#ifndef AMBIENTAIRPRESSURE_HPP_
#define AMBIENTAIRPRESSURE_HPP_

#include "AmbientAirPressure.h"

/*
 * Is used to relate the measured Ambient Pressure (Barometric Pressure)
 * from a vehicle or other device. The value of zero shall be used when not equipped.
 * The value of one indicates a pressure of 580 hPa.
 *
 * ASN.1 Representation:
 * AmbientAirPressure ::= INTEGER (0..255)
 * -- 8 Bits in hPa starting at 580 with a resolution of
 * -- 2 hPa resulting in a range of 580 to 1088
 */

namespace v2x {
namespace element {

class CAmbientAirPressure {
  public:
    explicit CAmbientAirPressure();

    CAmbientAirPressure(const AmbientAirPressure_t& value);

    virtual ~CAmbientAirPressure();

    CAmbientAirPressure(const CAmbientAirPressure& other);

    explicit operator AmbientAirPressure_t() const;
    explicit operator int() const;

    void set(const AmbientAirPressure_t& value);

    CAmbientAirPressure& operator=(const CAmbientAirPressure& other);

    bool operator==(const CAmbientAirPressure& other) const;
    bool operator!=(const CAmbientAirPressure& other) const;

    bool operator<(const CAmbientAirPressure& other) const;
    bool operator>(const CAmbientAirPressure& other) const;

  private:
    AmbientAirPressure_t value_;
};

} /* element */
} /* v2x */

#endif /* AMBIENTAIRPRESSURE_HPP_ */
