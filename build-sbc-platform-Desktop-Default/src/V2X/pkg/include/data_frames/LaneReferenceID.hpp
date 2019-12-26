#ifndef LANE_REFERENCE_ID_HPP_
#define LANE_REFERENCE_ID_HPP_

/*NOT V2X FRAME element*/

#include "data_elements/LaneID.hpp"
#include "data_frames/IntersectionReferenceID.hpp"

namespace v2x {
namespace frame {

using namespace element;

class CLaneReferenceID {
  public:
    explicit CLaneReferenceID();
    CLaneReferenceID(const CLaneID&, const CIntersectionReferenceID&);

    CLaneReferenceID(const CLaneReferenceID&);

    CLaneReferenceID& operator=(const CLaneReferenceID&);
    bool operator==(const CLaneReferenceID&) const;
    bool operator!=(const CLaneReferenceID&) const;
    bool operator<(const CLaneReferenceID&) const;
    bool operator>(const CLaneReferenceID&) const;

    CLaneID lane_id;
    CIntersectionReferenceID ref_id;
};

} /* v2x */
} /* frame */

#endif /* LANE_REFERENCE_ID_HPP_ */
