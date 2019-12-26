#ifndef MAP_UPDATE_HPP_
#define MAP_UPDATE_HPP_

#include "data_frames/IntersectionGeometry.hpp"
#include "data_frames/RoadSegment.hpp"
#include "data_elements/MinuteOfTheYear.hpp"
#include "data_elements/LayerID.hpp"
#include "data_elements/LayerType.hpp"
#include "data_frames/RestrictionClassAssignment.hpp"
#include "data_frames/DataParameters.hpp"
#include "MapData.h"

namespace v2x {
namespace frame {

class MapUpdate  {
  public:

    MapUpdate();
    MapUpdate(const MapData_t &);

    MapUpdate(const MapUpdate &);
    explicit operator MapData_t();
    MapUpdate& operator=(const MapUpdate&);

    bool operator==(const MapUpdate&) const;
    bool operator!=(const MapUpdate &) const;

    element::CMinuteOfTheYear timeStamp;
    element::CMsgCount msgIssueRevision;
    element::CLayerType layerType;
    element::CLayerID layerID;
    frame::CIntersectionGeometryList intersections;
    frame::CRoadSegmentList roadSegments;
    frame::CDataParameters dataParameters;
    frame::CRestrictionClassList restrictionList;
//    v2x::frame::CParkingArea parkingarea_;

  private:
    MapData_t MapData_{};

};

} /* frame */
} /* v2x */

#endif /* MAP_UPDATE_HPP_ */

