#ifndef SEMI_MAJOR_AXIS_ACCURACY_HPP_
#define SEMI_MAJOR_AXIS_ACCURACY_HPP_

#include "SemiMajorAxisAccuracy.h"

/*
 * The DE_SemiMajorAxisAccuracy data element is used to express the radius (length) of the semi-major axis of an
 * ellipsoid representing the accuracy which can be expected from a GNSS system in 5cm steps, typically at a one sigma
 * level of confidence.
 *
 * ASN.1 Representation:
 * SemiMajorAxisAccuracy ::= INTEGER (0..255)  -- semi-major axis accuracy at one standard dev
                                               -- range 0-12.7 meter, LSB = .05m
                                               -- 254 = any value equal or greater than 12.70 meter
                                               -- 255 = unavailable semi-major axis value
*/

const double UnitSemiMajorAxisAccuracy = 0.05;

namespace v2x {
namespace element {

class CSemiMajorAxisAccuracy {
  public:
    explicit CSemiMajorAxisAccuracy();

    CSemiMajorAxisAccuracy(const double& value);

    virtual ~CSemiMajorAxisAccuracy();

    CSemiMajorAxisAccuracy(const CSemiMajorAxisAccuracy& other);
    explicit operator SemiMajorAxisAccuracy_t() const;
    explicit operator double() const;

    void set(double const& value);

    CSemiMajorAxisAccuracy& operator=(const CSemiMajorAxisAccuracy& other);

    bool operator==(const CSemiMajorAxisAccuracy& other) const;
    bool operator!=(const CSemiMajorAxisAccuracy& other) const;

    bool operator<(const CSemiMajorAxisAccuracy& other) const;
    bool operator>(const CSemiMajorAxisAccuracy& other) const;

  private:
    SemiMajorAxisAccuracy_t value_;
};

} /* element */
} /* v2x */

#endif  /* SEMI_MAJOR_AXIS_ACCURACY_HPP_ */
