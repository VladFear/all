#ifndef MERGE_DIVERGE_NODE_ANGLE_HPP_
#define MERGE_DIVERGE_NODE_ANGLE_HPP_

#include "MergeDivergeNodeAngle.h"

/*
 * The angle at which another lane path meets the current lanes at the node point. Typically found in the node
 * attributes and used to describe the angle of the departing or merging lane. Note that oblique and obtuse angles are
 * allowed.
 *
 * ASN.1 Representation:
 * MergeDivergeNodeAngle ::= INTEGER (-180..180)
 * -- In units of 1.5 degrees from north
 * -- the value -180 shall be used to represent
 * -- data is not available or unknown
*/

namespace v2x {
namespace element {

class CMergeDivergeNodeAngle {
  public:
    explicit CMergeDivergeNodeAngle();

    CMergeDivergeNodeAngle(const MergeDivergeNodeAngle_t& value);

    virtual ~CMergeDivergeNodeAngle();

    CMergeDivergeNodeAngle(const CMergeDivergeNodeAngle& other);
    explicit operator MergeDivergeNodeAngle_t() const;

    void set(const MergeDivergeNodeAngle_t& value);

    CMergeDivergeNodeAngle& operator=(const CMergeDivergeNodeAngle& other);

    bool operator==(const CMergeDivergeNodeAngle& other) const;
    bool operator!=(const CMergeDivergeNodeAngle& other) const;

    bool operator<(const CMergeDivergeNodeAngle& other) const;
    bool operator>(const CMergeDivergeNodeAngle& other) const;

  private:
    MergeDivergeNodeAngle_t merge_diverge_node_angle_;
};

} /* v2x */
} /* element */

#endif /* MERGE_DIVERGE_NODE_ANGLE_HPP_ */
