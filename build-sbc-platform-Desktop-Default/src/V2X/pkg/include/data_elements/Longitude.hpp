#ifndef LONGITUDE_HPP_
#define LONGITUDE_HPP_

#include "Longitude.h"

/*
 * The geographic longitude of an object, expressed in 1/10th
 * integer microdegrees, as a 32-bit value, and with reference
 * to the horizontal datum then in use. The value 1800000001
 * shall be used when unavailable.
 *
 * ASN.1 Representation:
 * Longitude ::= INTEGER (-1799999999..1800000001)
 * -- LSB = 1/10 micro degree
 * -- Providing a range of plus-minus 180 degrees
*/

const double UnitLongitude = 0.0000001;

namespace v2x {
namespace element {

class CLongitude {
  public:
    explicit CLongitude();

    CLongitude(const double& value);

    virtual ~CLongitude();

    CLongitude(const CLongitude& other);
    explicit operator Longitude_t() const;
    explicit operator double() const;

    void set(double const& value);

    CLongitude& operator=(const CLongitude& other);

    bool operator==(const CLongitude& other) const;
    bool operator!=(const CLongitude& other) const;

    bool operator<(const CLongitude& other) const;
    bool operator>(const CLongitude& other) const;

  private:
    Longitude_t value_;
};

} /* v2x */
} /* element */

#endif  /* LATITUDE_HPP_ */

