#ifndef DELTA_ANGLE_HPP_
#define DELTA_ANGLE_HPP_

#include "DeltaAngle.h"

/*
 *The DeltaAngle data element provides the final angle used in the last point of
 * the lane path. Used to "cant" the stop line of the lane.
 *
 * ASN.1 Representation:
 * DeltaAngle ::= INTEGER (-150..150)
 * -- With an angle range from
 * -- negative 150 to positive 150
 * -- in one degree steps where zero is directly
 * -- along the axis or the lane center line as defined by the
 * -- two closest points
 */

namespace v2x {
namespace element {

class CDeltaAngle {
  public:
    explicit CDeltaAngle();
    CDeltaAngle(const DeltaAngle_t &value);

    virtual ~CDeltaAngle();

    CDeltaAngle(const CDeltaAngle &value);
    explicit operator DeltaAngle_t() const;

    void set(DeltaAngle_t const& value);

    CDeltaAngle& operator=(const CDeltaAngle& other);

    bool operator==(const CDeltaAngle& other) const;
    bool operator!=(const CDeltaAngle& other) const;

    bool operator<(const CDeltaAngle& other) const;
    bool operator>(const CDeltaAngle& other) const;

  private:
    DeltaAngle_t delta_angle_;
};

} /* v2x */
} /* element */

#endif /* DELTA_ANGLE_HPP_ */
