#ifndef LINE_CONNECTION_ID_HPP_
#define LINE_CONNECTION_ID_HPP_

#include "LaneConnectionID.h"

/*
 * The LaneConnectionID data entry is used to state a connection index for a
 * lane to lane connection. It is used to relate this connection between the
 * lane (defined in the MAP) and any dynamic clearance data sent in the SPAT.
 *
 * INTEGER ( 0 .. 255 )
 */

namespace v2x {
namespace element {

class CLaneConnectionID {
  public:
    explicit CLaneConnectionID();

    CLaneConnectionID(const LaneConnectionID_t& value);

    virtual ~CLaneConnectionID();

    CLaneConnectionID(const CLaneConnectionID& other);
    explicit operator LaneConnectionID_t() const;

    void set(LaneConnectionID_t const& value);

    CLaneConnectionID& operator=(const CLaneConnectionID& other);

    bool operator==(const CLaneConnectionID& other) const;
    bool operator!=(const CLaneConnectionID& other) const;

    bool operator<(const CLaneConnectionID& other) const;
    bool operator>(const CLaneConnectionID& other) const;

  private:
    LaneConnectionID_t _lane_con_id;
};

} /* v2x */
} /* element */

#endif /* LINE_CONNECTION_ID_HPP_ */
