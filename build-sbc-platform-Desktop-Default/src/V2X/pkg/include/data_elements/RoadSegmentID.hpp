#ifndef ROAD_SEGMENT_ID_HPP_
#define ROAD_SEGMENT_ID_HPP_

#include "RoadSegmentID.h"

/*
 * The RoadSegmentID is used to uniquely define a section of roadway within a country or region in a 16-bit field.
 * Assignment rules for this value are established elsewhere and may use regional assignment schemas that vary. Within
 * the region the policies used to ensure an assigned value’s uniqueness before that value is reused is the responsibility of
 * that region. Such reuse is expected to occur, but over somewhat lengthy epoch (months).
 *
 * ASN.1 Representation:
 * RoadSegmentID ::= INTEGER (0..65535)
 * -- The values zero to 255 shall be used for testing only
 * -- Note that the value assigned to an RoadSegment will be
 * -- unique within a given regional ID only during its use
*/

namespace v2x {
namespace element {

class CRoadSegmentID {
  public:
    explicit CRoadSegmentID();
    CRoadSegmentID(const RoadSegmentID_t &value);

    virtual ~CRoadSegmentID();

    CRoadSegmentID(const CRoadSegmentID &value);
    explicit operator RoadSegmentID_t() const;

    void set(RoadSegmentID_t const& value);

    CRoadSegmentID& operator=(const CRoadSegmentID& other);

    bool operator==(const CRoadSegmentID& other) const;
    bool operator!=(const CRoadSegmentID& other) const;

    bool operator<(const CRoadSegmentID& other) const;
    bool operator>(const CRoadSegmentID& other) const;

  private:
    RoadSegmentID_t _road_segment_id;
};

} /* element */
} /* v2x */

#endif /* ROAD_SEGMENT_ID_HPP_ */
