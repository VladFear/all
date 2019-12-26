#ifndef LANE_WIDTH_HPP_
#define LANE_WIDTH_HPP_

#include "LaneWidth.h"

/*
 * data element conveys the width of a lane in LSB units of 1 cm. Maximum value for a lane is
 * 327.67 meters in width
 *
 * ASN.1 Representation:
 * LaneWidth ::= INTEGER (0..32767) -- units of 1 cm
 */

const double UnitLaneWidth = 0.01;

namespace v2x {
namespace element {

class CLaneWidth {
  public:
    explicit CLaneWidth();

    CLaneWidth(const double& value);

    virtual ~CLaneWidth();

    CLaneWidth(const CLaneWidth& other);
    explicit operator LaneWidth_t() const;
    explicit operator double() const;

    void set(double const& value);

    CLaneWidth& operator=(const CLaneWidth& other);

    bool operator==(const CLaneWidth& other) const;
    bool operator!=(const CLaneWidth& other) const;

    bool operator<(const CLaneWidth& other) const;
    bool operator>(const CLaneWidth& other) const;

  private:
    LaneWidth_t _LaneWidth;
};

} /* element */
} /* v2x */

#endif /* LANE_WIDTH_HPP_ */
