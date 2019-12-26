#ifndef ROAD_REGULATOR_ID_HPP_
#define ROAD_REGULATOR_ID_HPP_

#include "RoadRegulatorID.h"

/*
 * The RoadRegulatorID is a 16-bit globally unique identifier assigned to an
 * entity responsible for assigning Intersection IDs in the region over which
 * it has such authority.
 *
 * RoadRegulatorID ::= INTEGER (0..65535)
 */

namespace v2x {
namespace element {

class CRoadRegulatorID {
  public:
    explicit CRoadRegulatorID();
    CRoadRegulatorID(const RoadRegulatorID_t &value);

    virtual ~CRoadRegulatorID();

    CRoadRegulatorID(const CRoadRegulatorID &value);
    explicit operator RoadRegulatorID_t() const;

    void set(RoadRegulatorID_t const& value);

    CRoadRegulatorID& operator=(const CRoadRegulatorID& other);

    bool operator==(const CRoadRegulatorID& other) const;
    bool operator!=(const CRoadRegulatorID& other) const;

    bool operator<(const CRoadRegulatorID& other) const;
    bool operator>(const CRoadRegulatorID& other) const;

  private:
    RoadRegulatorID_t _road_regulator_id;
};

} /* v2x */
} /* element */

#endif /* ROAD_REGULATOR_ID_HPP_ */
