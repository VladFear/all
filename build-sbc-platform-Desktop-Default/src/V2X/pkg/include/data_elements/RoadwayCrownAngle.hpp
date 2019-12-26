#ifndef ROADWAY_CROWN_ANGLE_HPP__
#define ROADWAY_CROWN_ANGLE_HPP__

#include "RoadwayCrownAngle.h"

/*
 * The RoadwayCrownAngle data element relates the gross tangential angle of the roadway surface with respect to
 * the local horizontal axis and is measured at the indicated part of the lane. This measurement is typically made at the
 * crown (centerline) or at an edge of the lane path. Its typical use is to relate data used in speed warning and traction
 * calculations for the lane segment or roadway segment in which the measurement is taken.
 *
 * ASN.1 Representation:
 * RoadwayCrownAngle ::= INTEGER (-128..127)
 * -- In LSB units of 0.3 degrees of angle
 * -- over a range of -38.1 to + 38.1 degrees
 * -- The value -128 shall be used for unknown
 * -- The value zero shall be used for angles
 * -- which are between -0.15 and +0.15
 */

const double UnitRoadwayCrownAngle = 0.3;

namespace v2x {
namespace element {

class CRoadwayCrownAngle {
  public:
    explicit CRoadwayCrownAngle();
    CRoadwayCrownAngle(const double &value);

    virtual ~CRoadwayCrownAngle();

    CRoadwayCrownAngle(const CRoadwayCrownAngle &value);
    explicit operator RoadwayCrownAngle_t() const;
    explicit operator double() const;

    void set(double const& value);

    CRoadwayCrownAngle& operator=(const CRoadwayCrownAngle& other);

    bool operator==(const CRoadwayCrownAngle& other) const;
    bool operator!=(const CRoadwayCrownAngle& other) const;

    bool operator<(const CRoadwayCrownAngle& other) const;
    bool operator>(const CRoadwayCrownAngle& other) const;

  private:
    RoadwayCrownAngle_t roadway_crown_angle_;
};

} /* v2x */
} /* element */

#endif /* ROADWAY_CROWN_ANGLE_HPP__ */
