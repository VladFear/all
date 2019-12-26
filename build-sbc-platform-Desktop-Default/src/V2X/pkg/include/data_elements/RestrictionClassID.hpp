#ifndef RESTRICTION_CLASS_ID_HPP_
#define RESTRICTION_CLASS_ID_HPP_

#include "RestrictionClassID.h"

/*
 * The DE_RestrictionClass data element defines an intersection-unique value
 * to convey data about classes of users.
 *
 * RestrictionClassID ::= INTEGER (0..255)
 * -- An index value to identify data about classes of users
 * -- the value used varies with each intersection's
 * -- needs and is defined in the map to the assigned
 * -- classes of supported users.
 */

namespace v2x {
namespace element {

class CRestrictionClassID {
  public:
    explicit CRestrictionClassID();
    CRestrictionClassID(const RestrictionClassID_t &value);

    virtual ~CRestrictionClassID();

    CRestrictionClassID(const CRestrictionClassID &value);
    explicit operator RestrictionClassID_t() const;

    void set(RestrictionClassID_t const& value);

    CRestrictionClassID& operator=(const CRestrictionClassID& other);

    bool operator==(const CRestrictionClassID& other) const;
    bool operator!=(const CRestrictionClassID& other) const;

    bool operator<(const CRestrictionClassID& other) const;
    bool operator>(const CRestrictionClassID& other) const;

  private:
    RestrictionClassID_t _restriction_class_id;
};

} /* v2x */
} /* element */

#endif /* RESTRICTION_CLASS_ID_HPP_ */
