#ifndef WAIT_ON_STOP_LINE_HPP_
#define WAIT_ON_STOP_LINE_HPP_

#include "WaitOnStopline.h"

/*
 * data element is used to indicate to the vehicle that it must stop at the
 * stop line and not move past.
 *
 * WaitOnStopline ::= BOOLEAN --
 * -- True or False
 * -- If "true", the vehicles on this specific connecting
 * -- maneuver have to stop on the stop-line
 * -- and not to enter the collision area
 */

namespace v2x {
namespace element {

class CWaitOnStopline {
  public:
    explicit CWaitOnStopline();

    CWaitOnStopline(const WaitOnStopline_t& value);

    virtual ~CWaitOnStopline();

    CWaitOnStopline(const CWaitOnStopline& value);
    explicit operator WaitOnStopline_t() const;

    void set(const WaitOnStopline_t& value);

    CWaitOnStopline& operator=(const CWaitOnStopline& other);

    bool operator==(const CWaitOnStopline& other) const;
    bool operator!=(const CWaitOnStopline& other) const;

  private:
    WaitOnStopline_t _wait_on_stop_line;
};

} /* v2x */
} /* element */

#endif /* WAIT_ON_STOP_LINE_HPP_ */
