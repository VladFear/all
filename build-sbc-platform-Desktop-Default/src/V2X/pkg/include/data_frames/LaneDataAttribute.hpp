#ifndef LANE_DATA_ATTRIBUTE_HPP_
#define LANE_DATA_ATTRIBUTE_HPP_

#include <vector>

#include "RegulatorySpeedLimit.hpp"
#include "LaneDataAttribute.h"
#include "data_elements/DeltaAngle.hpp"
#include "data_elements/RoadwayCrownAngle.hpp"
#include "data_elements/MergeDivergeNodeAngle.hpp"

namespace v2x {
namespace frame {

using namespace v2x::element;

class CLaneDataAttribute;
typedef std::vector<std::pair<int,CLaneDataAttribute>> CLaneDataAttributeList;

class CLaneDataAttribute {
  public:
    enum Id {
        unselected,
        pathEndPointAngle_chosen = 1,
        laneCrownPointCenter_chosen = 2,
        laneCrownPointLeft_chosen = 3,
        laneCrownPointRight_chosen = 4,
        laneAngle_chosen = 5,
        speedLimits_chosen = 6
    };

    CLaneDataAttribute();
    CLaneDataAttribute(const LaneDataAttribute_t &);
    CLaneDataAttribute(const CLaneDataAttribute&);

    explicit operator LaneDataAttribute_t();

    CLaneDataAttribute& operator=(const CLaneDataAttribute&);
    int operator==(const CLaneDataAttribute&) const;
    int operator!=(const CLaneDataAttribute&) const;

    void set_pathEndPointAngle(const CDeltaAngle &);
    void set_laneCrownPointCenter(const CRoadwayCrownAngle &);
    void set_laneCrownPointLeft(const CRoadwayCrownAngle& );
    void set_laneCrownPointRight(const CRoadwayCrownAngle& );
    void set_laneAngle(const CMergeDivergeNodeAngle& );
    void set_speedLimits(const CRegulatorySpeedLimitList& );

  private:
    LaneDataAttribute_t laneDataAttr_;

    /* TODO: add union when apper problem with low memory */
    CDeltaAngle pathEndPointAngle_field;
    CRoadwayCrownAngle laneCrownPointCenter_field;
    CRoadwayCrownAngle laneCrownPointLeft_field;
    CRoadwayCrownAngle laneCrownPointRight_field;
    CMergeDivergeNodeAngle laneAngle_field;
    CRegulatorySpeedLimitList speedLimits_field;
};

} /* v2x */
} /* frame */

void freeLaneDataAttribute(LaneDataAttribute*);


#endif /* LANE_DATA_ATTRIBUTE_HPP_ */
