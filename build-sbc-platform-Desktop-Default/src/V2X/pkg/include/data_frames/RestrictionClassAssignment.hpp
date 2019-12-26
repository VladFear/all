#ifndef RESTRICTION_CLASS_ASSIGNMENT_HPP_
#define RESTRICTION_CALSS_ASSIGNMENT_HPP_

#include "RestrictionClassAssignment.h"
#include "data_elements/RestrictionClassID.hpp"
#include "data_frames/RestrictionUserType.hpp"
#include <vector>
#include <memory>

/*
 * The DF_RestrictionClassAssignment data frame is used to assign (or bind) a single RestrictionClassID data
 * element to a list of all user classes to which it applies. A collection of these bindings is conveyed in the
 * RestrictionClassList data frame in the MAP message to travelers. The established index is then used in the lane object of
 * the MAP message, in the ConnectTo data frame, to qualify to whom a signal group ID applies when it is sent by the SPAT
 * message about a movement.
 *
 * ASN.1 Representation:
 * RestrictionClassAssignment ::= SEQUENCE {
 * id          RestrictionClassID,     -- the unique value (within an intersection or local region)
                                       -- that is assigned to this group of users
 * users       RestrictionUserTypeList -- The list of user types/classes
                                       -- to which this restriction ID applies
 * }
*/

namespace v2x {
namespace frame {

class CRestrictionClassAssignment;
typedef std::vector<std::shared_ptr<CRestrictionClassAssignment>> CRestrictionClassList;


class CRestrictionClassAssignment {
  public:

    CRestrictionClassAssignment();
    CRestrictionClassAssignment(const RestrictionClassAssignment_t &);
    CRestrictionClassAssignment(const CRestrictionClassAssignment&);
    CRestrictionClassAssignment(const CRestrictionClassID&);
    CRestrictionClassAssignment(const CRestrictionClassID&, const CRestrictionUserTypeList&);

    void set(const CRestrictionClassID&, const CRestrictionUserTypeList&);

    explicit operator RestrictionClassAssignment_t();

    CRestrictionClassAssignment& operator=(const CRestrictionClassAssignment&);
    bool operator==(const CRestrictionClassAssignment&) const;
    bool operator!=(const CRestrictionClassAssignment&) const;

    CRestrictionClassID id;
    CRestrictionUserTypeList users;
  private:
    RestrictionClassAssignment_t regSpeedLim_{};
};

} /* frame */
} /* v2x*/

void freeRestrictionClassAssignmentASN(RestrictionClassAssignment_t *);

#endif /* RESTRICTION_CALSS_ASSIGNMENT_HPP_ */
