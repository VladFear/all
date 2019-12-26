#ifndef LANE_ID_HPP_
#define LANE_ID_HPP_

#include "LaneID.h"
#include <vector>

/*
 * Conveyes an assigned index that is unique within an intersecion
 *
 * INTEGER ( 0 .. 255 )
 * -- 0   - unused or unknown lane ID
 * -- 255 - reserved for future use
 */

namespace v2x {
namespace element {

class  CLaneID;
typedef std::vector<CLaneID> COverlayLaneList;
typedef std::vector<CLaneID> CEnabledLaneList;

class CLaneID {
  public:
    explicit CLaneID();

    CLaneID(const LaneID_t& value);

    virtual ~CLaneID();

    CLaneID(const CLaneID& other);
    explicit operator LaneID_t() const;

    void set(const LaneID_t& value);

    CLaneID& operator=(const CLaneID& other);

    bool operator==(const CLaneID& left) const;
    bool operator!=(const CLaneID& left) const;

    bool operator<(const CLaneID& left) const;
    bool operator>(const CLaneID& left) const;

  private:
    LaneID_t _lane_id;
};

} /* element */
} /* v2x */

#endif /* LANE_ID_HPP_ */
