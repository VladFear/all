#ifndef POSITION_CONFIDENCE_SET_HPP_
#define POSITION_CONFIDENCE_SET_HPP_

#include "PositionConfidenceSet.h"
#include "data_elements/PositionConfidence.hpp"
#include "data_elements/ElevationConfidence.hpp"

/*
* The DF_PositionConfidenceSet data frame combinesmultiple related bit fields into a single concept.
*
* PositionConfidenceSet ::= SEQUENCE {
*     pos        PositionConfidence, --for both horizontal directions
*     elevation  ElevationConfidence
* }
*/

using namespace v2x::element;

namespace v2x {
namespace frame {

class CPositionConfidenceSet {
  public:

    CPositionConfidenceSet();
    CPositionConfidenceSet(const CPositionConfidenceSet&);
    CPositionConfidenceSet(const PositionConfidenceSet_t &);
    CPositionConfidenceSet(const CPositionConfidence&,const CElevationConfidence&);
    ~CPositionConfidenceSet();

    explicit operator PositionConfidenceSet_t();

    CPositionConfidenceSet & operator = (const CPositionConfidenceSet &);
    bool operator == (const CPositionConfidenceSet &) const;
    bool operator != (const CPositionConfidenceSet &) const;

    CPositionConfidence pos;
    CElevationConfidence elevation;

  private:
    PositionConfidenceSet_t value_ = PositionConfidenceSet_t();
};

} /* frame */
} /* v2x */

#endif /* POSITION_CONFIDENCE_SET_HPP_ */
