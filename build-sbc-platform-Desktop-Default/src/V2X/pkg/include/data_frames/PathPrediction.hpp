#ifndef PATH_PREDICTION_HPP_
#define PATH_PREDICTION_HPP_

/*
 * The DF_PathPrediction data frame allows vehicles and other type of users to share their predicted path trajectory
 * by estimating a future path of travel. This future trajectory estimation provides an indication of future positions of the
 * transmitting vehicle and can significantly enhance in-lane and out-of-lane threat classification. Trajectories in the
 * PathPrediction data element are represented by the RadiusOfCurvature element. The algorithmic approach and allowed
 * error limits are defined in a relevant standard using the data frame. To help distinguish between steady state and non-
 * steady state conditions, a confidence factor is included in the data element to provide an indication of signal accuracy due
 * to rapid change in driver input. When driver input is in steady state (straight roadways or curves with a constant radius of
 * curvature), a high confidence value is reported. During non-steady state conditions (curve transitions, lane changes, etc.),
 * signal confidence is reduced.
 *
 * ASN.1 Representation:
 * PathPrediction ::= SEQUENCE {
 * radiusOfCurve RadiusOfCurvature,     -- LSB units of 10cm
                                        -- straight path to use value of 32767
 * confidence    Confidence,            -- LSB units of 0.5 percent
 * ...}
*/

#include "data_elements/Confidence.hpp"
#include "data_elements/RadiusOfCurvature.hpp"
#include "PathPrediction.h"

using namespace v2x::element;

namespace v2x {
namespace frame {

class CPathPrediction;

class CPathPrediction {
  public:
    CPathPrediction();
    CPathPrediction(const PathPrediction_t&);
    CPathPrediction(const CPathPrediction&);
    CPathPrediction(const CConfidence&, const CRadiusOfCurvature&);

    explicit operator PathPrediction_t();

    CPathPrediction& operator=(const CPathPrediction&);
    bool operator==(const CPathPrediction&) const;
    bool operator!=(const CPathPrediction&) const;

    CConfidence confidence;
    CRadiusOfCurvature radiusOfCurve;

  private:
    PathPrediction_t PathPrediction_ = PathPrediction_t();
};

} /* frame */
} /* v2x */

#endif /* PATH_PREDICTION_HPP_ */
