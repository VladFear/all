#ifndef LATITUDE_HPP_
#define LATITUDE_HPP_

#include "Latitude.h"

/*
 * The geographic latitude of an object, expressed in 1/10th
 * integer microdegrees, as a 31 bit value, and with reference
 * to the horizontal datum then in use. The value 900000001
 * shall be used when unavailable.
 *
 * ASN.1 Representation
 * Latitude ::= INTEGER (-900000000..900000001)
 * -- LSB = 1/10 micro degree
 *  -- Providing a range of plus-minus 90 degrees
*/

const double UnitLatitude = 0.0000001;

namespace v2x {
namespace element {

class CLatitude {
  public:
    explicit CLatitude();

    CLatitude(const double& value);

    virtual ~CLatitude();

    CLatitude(const CLatitude& other);
    explicit operator Latitude_t() const;
    explicit operator double() const;

    void set(double const& value);

    CLatitude& operator=(const CLatitude& other);

    bool operator==(const CLatitude& other) const;
    bool operator!=(const CLatitude& other) const;

    bool operator<(const CLatitude& other) const;
    bool operator>(const CLatitude& other) const;

  private:
    Latitude_t value_;
};

} /* v2x */
} /* element */

#endif /* LATITUDE_HPP_ */
