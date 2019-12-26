#ifndef INTERSECTION_ID_HPP_
#define INTERSECTION_ID_HPP_

#include "IntersectionID.h"

/*
 * The IntersectionID is used within a region to
 * uniquely define an intersection within that
 * country or region in a 16-bit field. Assignment
 * rules are established by the regional authority
 * associated with the RoadRegulatorID under which
 * this IntersectionID is assigned. Within the
 * region the policies used to ensure an assigned
 * value’s uniqueness before that value
 * is reused (if ever) is the responsibility of
 * that region. Any such reuse would be expected to
 * occur over a long epoch (many years).
 *
 * ASN.1 Representation:
 * IntersectionID ::= INTEGER (0..65535)
 * -- The values zero through 255 are allocated for testing purposes
 * -- Note that the value assigned to an intersection will be
 * -- unique within a given regional ID only
*/

namespace v2x {
namespace element {

class CIntersectionID {
  public:
    explicit CIntersectionID();
    CIntersectionID(const IntersectionID_t &value);

    virtual ~CIntersectionID();

    CIntersectionID(const CIntersectionID &value);
    explicit operator IntersectionID_t() const;

    void set(IntersectionID_t const& value);

    CIntersectionID& operator=(const CIntersectionID& other);

    bool operator==(const CIntersectionID& other) const;
    bool operator!=(const CIntersectionID& other) const;

    bool operator<(const CIntersectionID& other) const;
    bool operator>(const CIntersectionID& other) const;

  private:
    IntersectionID_t _intersection_id;
};

} /* v2x */
} /* element */

#endif /* INTERSECTION_ID_HPP_ */
