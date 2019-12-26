#ifndef INTERSECTION_REFERENCE_ID_
#define INTERSECTION_REFERENCE_ID_
/*
 * The IntersectionReferenceID data frame conveys the combination of an
 * optional RoadRegulatorID and of an IntersectionID that is unique within
 * that region.
 *
 * IntersectionReferenceID ::= SEQUENCE {
 *      region RoadRegulatorID OPTIONAL,
 *      id     IntersectionID
 * }
 */

#include "data_elements/RoadRegulatorID.hpp"
#include "data_elements/IntersectionID.hpp"
#include "IntersectionReferenceID.h"

namespace v2x {
namespace frame {

using namespace element;

class CIntersectionReferenceID {
  public:
    explicit CIntersectionReferenceID();
    CIntersectionReferenceID(const CIntersectionID& id);
    CIntersectionReferenceID(const IntersectionReferenceID_t&);
    CIntersectionReferenceID(const CRoadRegulatorID& region, const CIntersectionID& id);

    CIntersectionReferenceID(const CIntersectionReferenceID&);

    virtual ~CIntersectionReferenceID();

    explicit operator IntersectionReferenceID_t() ;

    CIntersectionReferenceID& operator=(const CIntersectionReferenceID&);
    bool operator==(const CIntersectionReferenceID&) const;
    bool operator!=(const CIntersectionReferenceID&) const;
    bool operator<(const CIntersectionReferenceID&) const;
    bool operator>(const CIntersectionReferenceID&) const;

    CRoadRegulatorID region; /* OPTIONAL */
    CIntersectionID  id;

  private:
    IntersectionReferenceID_t _refId{};
};

} /* frame */
} /* v2x */

void freeIntersectionReferenceIDASN(IntersectionReferenceID_t *);

#endif /* INTERSECTION_REFERENCE_ID_ */
