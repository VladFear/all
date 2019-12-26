#ifndef ACCELERATION_HPP_
#define ACCELERATION_HPP_

#include <asn_src/Acceleration.h>

/* Data element represents the signed acceleration of the vehicle along some
 * known axis in units of 0.01 meters per second squared
 *
 * ASN.1 Representation:
 *	Acceleration ::= INTEGER (-2000..2001)
 *	    -- LSB units are 0.01 m/s^2
 *	    -- the value 2000 shall be used for values greater than 2000
 *	    -- the value -2000 shall be used for values less than -2000
 *	    -- a value of 2001 shall be used for Unavailable
 */

const double UnitAcceleration = 0.01;

namespace v2x {
namespace element {

class CAcceleration {
  public:
    explicit CAcceleration();
    CAcceleration(const double& value);

    virtual ~CAcceleration();

    CAcceleration(const CAcceleration& other);

    explicit operator Acceleration_t() const;
    explicit operator double() const;

    void set(double const& value);

    CAcceleration& operator=(const CAcceleration& other);

    bool operator==(const CAcceleration& other) const;
    bool operator!=(const CAcceleration& other) const;

    bool operator<(const CAcceleration& other) const;
    bool operator>(const CAcceleration& other) const;

  private:
    Acceleration_t accel_;
};

}   /* element */
}   /* v2x */

#endif	/* ACCELERATION_HPP_ */
