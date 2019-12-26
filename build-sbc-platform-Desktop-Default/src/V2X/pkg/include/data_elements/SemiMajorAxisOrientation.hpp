#ifndef SEMI_MAJOR_AXIS_ORIENTATION_HPP_
#define SEMI_MAJOR_AXIS_ORIENTATION_HPP_

#include "SemiMajorAxisOrientation.h"

/*
 * The DE_ SemiMajorAxisOrientation data element is used to orientate the angle of the semi-major axis of an
 * ellipsoid representing the accuracy which can be expected from a GNSS system with respect to the coordinate system.
 *
 * ASN.1 Representation:
 * SemiMajorAxisOrientation ::= INTEGER (0..65535)  -- orientation of semi-major axis
                                                    -- relative to true north (0~359.9945078786 degrees)
                                                    -- LSB units of 360/65535 deg = 0.0054932479
                                                    -- a value of 0 shall be 0 degrees
                                                    -- a value of 1 shall be 0.0054932479 degrees
                                                    -- a value of 65534 shall be 359.9945078786 deg
                                                    -- a value of 65535 shall be used for orientation unavailable
*/

const double UnitSemiMajorAxisOrientation = 0.0054932479;

namespace v2x {
namespace element {

class CSemiMajorAxisOrientation {
  public:
    explicit CSemiMajorAxisOrientation();

    CSemiMajorAxisOrientation(const double& value);

    virtual ~CSemiMajorAxisOrientation();

    CSemiMajorAxisOrientation(const CSemiMajorAxisOrientation& other);
    explicit operator SemiMajorAxisOrientation_t() const;
    explicit operator double() const;

    void set(double const& value);

    CSemiMajorAxisOrientation& operator=(const CSemiMajorAxisOrientation& other);

    bool operator==(const CSemiMajorAxisOrientation& other) const;
    bool operator!=(const CSemiMajorAxisOrientation& other) const;

    bool operator<(const CSemiMajorAxisOrientation& other) const;
    bool operator>(const CSemiMajorAxisOrientation& other) const;

  private:
    SemiMajorAxisOrientation_t value_;
};

} /* element */
} /* v2x */

#endif  /* SEMI_MAJOR_AXIS_ORIENTATION_HPP_ */
