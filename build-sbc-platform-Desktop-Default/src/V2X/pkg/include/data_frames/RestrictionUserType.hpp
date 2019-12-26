#ifndef RESTRICTION_USER_TYPE_HPP_
#define RESTRICTION_USER_TYPE_HPP_

#include "RestrictionUserType.h"
#include "data_elements/RestrictionAppliesTo.hpp"
#include <vector>

/*
 * The DF_RestrictionUserType data frame is used to provide a means to select one, and only one, user type or class
 * from a number of well-known lists. The selected entry is then used in the overall Restriction Class assignment process to
 * indicate that a given GroupID (a way of expressing a movement in the SPAT/MAP system) applies to (is restricted to) this
 * class of user.
 *
 * ASN.1 Representation:
 * RestrictionUserType ::= CHOICE {
 * basicType RestrictionAppliesTo, -- a set of the most commonly used types
 * regional SEQUENCE (SIZE(1..4)) OF RegionalExtension {{REGION.Reg-RestrictionUserType}}, ... }
*/

namespace v2x {
namespace frame {

using namespace v2x::element;
class CRestrictionUserType;
typedef std::vector<CRestrictionUserType> CRestrictionUserTypeList;


class CRestrictionUserType {
  public:

    CRestrictionUserType();
    CRestrictionUserType(const CRestrictionUserType&);
    CRestrictionUserType(const RestrictionUserType_t&);
    CRestrictionUserType(const CRestrictionAppliesTo&);

    explicit operator RestrictionUserType_t();

    CRestrictionUserType& operator=(const CRestrictionUserType&);
    bool operator==(const CRestrictionUserType&) const;
    bool operator!=(const CRestrictionUserType&) const;

    CRestrictionAppliesTo basicType_field;

  private:
    RestrictionUserType_t RestrictionUserType_ = RestrictionUserType_t();

};

} /* frame */
} /* v2x*/

#endif /* RESTRICTION_USER_TYPE_HPP_ */
