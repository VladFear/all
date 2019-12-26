#ifndef RADIUS_OF_CURVATURE_HPP_
#define RADIUS_OF_CURVATURE_HPP_

#include "RadiusOfCurvature.h"

/*
 * The entry DE_RadiusOfCurvature is a data element representing an estimate of the current trajectory of the sender.
 * The value is represented as a first order of curvature approximation, as a circle with a radius R and an origin located at
 * (0,R), where the x-axis is bore sight from the transmitting vehicle's perspective and normal to the vehicle's vertical axis.
 * The vehicle's (x,y,z) coordinate frame follows the SAE convention. Radius R will be positive for curvatures to the right
 * when observed from the transmitting vehicle's perspective. Radii shall be capped at a maximum value supported by the
 * Path Prediction radius data type. Overflow of this data type shall be interpreted by the receiving vehicle as "a straight
 * path" prediction. The radius can be derived from a number of sources including, but not limited to, map databases, rate
 * sensors, vision systems, and global positioning. The precise algorithm to be used is outside the scope of this document.
 *
 * ASN.1 Representation:
 * RadiusOfCurvature ::= INTEGER (-32767..32767)
 * -- LSB units of 10cm
 * -- A straight path to use value of 32767
 */

const double UnitRadiusOfCurvature = 10;

namespace v2x {
namespace element {

class CRadiusOfCurvature {
  public:
    explicit CRadiusOfCurvature();

    CRadiusOfCurvature(const double& value);

    virtual ~CRadiusOfCurvature();

    CRadiusOfCurvature(const CRadiusOfCurvature& other);

    explicit operator double() const;
    explicit operator RadiusOfCurvature_t() const;

    void set(const double& value);

    CRadiusOfCurvature& operator=(const CRadiusOfCurvature& other);

    bool operator==(const CRadiusOfCurvature& other) const;
    bool operator!=(const CRadiusOfCurvature& other) const;

    bool operator<(const CRadiusOfCurvature& other) const;
    bool operator>(const CRadiusOfCurvature& other) const;

  private:
    RadiusOfCurvature_t RadiusOfCurvature_;
};

} /* element */
} /* v2x */

#endif /* RADIUS_OF_CURVATURE_HPP_ */
