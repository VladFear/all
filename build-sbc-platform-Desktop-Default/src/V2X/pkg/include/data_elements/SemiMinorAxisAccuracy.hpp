#ifndef SEMI_MINOR_AXIS_ACCURACY_HPP_
#define SEMI_MINOR_AXIS_ACCURACY_HPP_

#include "SemiMinorAxisAccuracy.h"

/*
 * The DE_SemiMinorAxisAccuracy data element is used to express the radius of the semi-minor axis of an ellipsoid
 * representing the accuracy which can be expected from a GNSS system in 5cm steps, typically at a one sigma level of
 * confidence.
 *
 * ASN.1 Representation:
 * SemiMinorAxisAccuracy ::= INTEGER (0..255)  -- semi-minor axis accuracy at one standard dev
                                               -- range 0-12.7 meter, LSB = .05m
                                               -- 254 = any value equal or greater than 12.70 meter
                                               -- 255 = unavailable semi-minor axis value
*/

const double UnitSemiMinorAxisAccuracy = 0.05;

namespace v2x {
namespace element {

class CSemiMinorAxisAccuracy {
  public:
    explicit CSemiMinorAxisAccuracy();

    CSemiMinorAxisAccuracy(const double& value);

    virtual ~CSemiMinorAxisAccuracy();

    CSemiMinorAxisAccuracy(const CSemiMinorAxisAccuracy& other);
    explicit operator SemiMinorAxisAccuracy_t() const;
    explicit operator double() const;

    void set(double const& value);

    CSemiMinorAxisAccuracy& operator=(const CSemiMinorAxisAccuracy& other);

    bool operator==(const CSemiMinorAxisAccuracy& other) const;
    bool operator!=(const CSemiMinorAxisAccuracy& other) const;

    bool operator<(const CSemiMinorAxisAccuracy& other) const;
    bool operator>(const CSemiMinorAxisAccuracy& other) const;

  private:
    SemiMinorAxisAccuracy_t value_;
};

} /* element */
} /* v2x */

#endif  /* SEMI_MINOR_AXIS_ACCURACY_HPP_ */
