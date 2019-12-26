#ifndef PATH_HISTORY_HPP_
#define PATH_HISTORY_HPP_

#include "data_frames/FullPositionVector.hpp"
#include "data_elements/CBitString.hpp"
#include "data_frames/PathHistoryPoint.hpp"
#include "PathHistory.h"
/*
 * The PathHistory data frame defines a geometric path reflecting time-tagged vehicle movement over some period of
 * time and/or distance. A sequence of Path History Points is used along with an initial position (and the GNSS status at that
 * time) to create a set of straight line segments representing the path.
 * The points present in the history represent a concise representation of the actual path history of the vehicle based on
 * allowable position error tolerance between the actual vehicle path and its concise representation. This data frame allows
 * creating a sequence of positions, typically a vehicle motion track, over a limited period of time or distance. These positions
 * are each called PathHistoryPoint.
 * The initial anchor point shall be the initialPosition data frame or be provided in the message in which the PathHistory is
 * sent (such as the BSM Part I). If the PathHistory is sent in a message which provides the Full Position vector or similar
 * initial position data, then the optional initialPosition element shall not be sent.
 * The initial anchor point is used to create the offset values of the set. All Path History Points are older in time than the
 * anchor point used. Each Path History Point is subtracted from the initial anchor point to create the offset values. The first
 * point set in the message is the closest in time to the anchor point; older points follow in the order in which they were
 * determined. Note that this methodology produces offsets where positive is in the South, West and Down directions. The
 * sign of these offsets is inverted from conventions used elsewhere in this standard
 *
 * ASN.1 Representation:
 * PathHistory ::= SEQUENCE {
 * initialPosition      FullPositionVector      OPTIONAL,
 * currGNSSstatus       GNSSstatus              OPTIONAL,
 * crumbData            PathHistoryPointList,
 * ...}
*/

namespace v2x {
namespace frame {

class CPathHistory {
  public:
    CPathHistory();
    CPathHistory(const PathHistory_t&);
    CPathHistory(const CPathHistory&);
    CPathHistory(const CFullPositionVector&, const CBitString<8>&, const CPathHistoryPointList&);
    CPathHistory(const CPathHistoryPointList&);

    explicit operator PathHistory_t();

    CPathHistory& operator=(const CPathHistory&);
    bool operator==(const CPathHistory&) const;
    bool operator!=(const CPathHistory&) const;

    CFullPositionVector initialPosition; /* OPTIONAL */
    CBitString<8> currGNSSstatus;        /* OPTIONAL */
    CPathHistoryPointList crumbData;

  private:
    PathHistory_t PathHistory_{};
};

} /* frame */
} /* v2x */

void freePathHistoryASN(PathHistory_t*);

#endif /* NODE_XY_HPP_ */
