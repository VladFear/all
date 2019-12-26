#ifndef PATH_HISTORY_POINT_HPP_
#define PATH_HISTORY_POINT_HPP_

#include "PathHistoryPoint.h"
#include "data_elements/OffsetLL_B18.hpp"
#include "data_elements/VertOffset_B12.hpp"
#include "data_elements/TimeOffset.hpp"
#include "data_elements/Speed.hpp"
#include "data_frames/PositionAccuracy.hpp"
#include "data_elements/CoarseHeading.hpp"
#include <vector>

/*
 * The PathHistoryPoint data frame is used to convey a single point in the path of an object (typically a motor vehicle)
 * described as a sequence of such position points. The sequence and number of these points (defined in another data
 * frame) is selected to convey the desired level of accuracy and precision required by the application.
 * The lat-long offset units used in the PathHistoryPointType data frame support units of 1/10th micro degrees of lat and
 * long. The elevation offset units are in 10cm units. The time is expressed in units of 10 milliseconds. The
 * PositionalAccuracy entry uses 3 elements to relate the pseudorange noise measured in the system. The heading and
 * speed are not offset values, and follow the units defined in the ASN comments. All of these items are defined further in the
 * relevant data entries.
 *
 * ASN.1 Representation:
 * PathHistoryPoint ::= SEQUENCE {
 * latOffset                OffsetLL-B18,
 * lonOffset                OffsetLL-B18,
 * elevationOffset          VertOffset-B12,
 * timeOffset               TimeOffset,                    -- Offset backwards in time
 * speed                    Speed               OPTIONAL,  -- Speed over the reported period
 * posAccuracy              PositionalAccuracy  OPTIONAL,  -- The accuracy of this value
 * heading                  CoarseHeading       OPTIONAL,  -- overall heading
 * ...}
*/


namespace v2x {
namespace frame {

class CPathHistoryPoint;
typedef std::vector<CPathHistoryPoint> CPathHistoryPointList;


class CPathHistoryPoint {
  public:
    CPathHistoryPoint();
    CPathHistoryPoint(const PathHistoryPoint_t &);
    CPathHistoryPoint(const COffsetLL_B18 &, const COffsetLL_B18 &, const CVertOffset_B12 &, const CTimeOffset &);
    CPathHistoryPoint(const CPathHistoryPoint &);

    explicit operator PathHistoryPoint_t();

    CPathHistoryPoint &operator=(const CPathHistoryPoint &);
    bool operator==(const CPathHistoryPoint &) const;
    bool operator!=(const CPathHistoryPoint &) const;

    COffsetLL_B18 latOffset;
    COffsetLL_B18 lonOffset;
    CVertOffset_B12 elevationOffset;
    CTimeOffset timeOffset;
    CSpeed speed;
    CPositionAccuracy posAccuracy;
    CCoarseHeading heading;

  private:
    PathHistoryPoint_t PathHistoryPoint_{};
};

} /* frame */
} /* v2x */

void freePathHistoryPointASN(PathHistoryPoint_t *asn_type);

#endif /* PATH_HISTORY_POINT_HPP_ */
