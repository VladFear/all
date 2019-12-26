#ifndef TIME_MARK_HPP_
#define TIME_MARK_HPP_

#include "TimeMark.h"

/*
 * data element is used to relate a moment in UTC (Coordinated Universal Time)
 * -based time when a signal phase is predicted to change, with a precision of
 * 1/10 of a second. A range of 60 full minutes is supported and it can be
 * presumed that the receiver shares a common sense of time with the sender
 * which is kept aligned to within a fraction of a second or better. If there
 * is a need to send a value greater than the range allowed by the data element
 * (over one hour in the future), the value 36000 shall be sent and shall be
 * interpreted to indicate an indefinite future time value. When the value to
 * be used is undefined or unknown a value of 36001 shall be sent. Note that
 * leap seconds are also supported.
 *
 * TimeMark ::= INTEGER (0..36001)
 * -- Tenths of a second in the current or next hour
 * -- In units of 1/10th second from UTC time
 * -- A range of 0~36000 covers one hour
 * -- The values 35991..35999 are used when a leap second occurs
 * -- The value 36000 is used to indicate time >3600 seconds
 * -- 36001 is to be used when value undefined or unknown
 * -- Note that this is NOT expressed in GPS time
 * -- or in local time
*/

const double UnitTimeMark = 0.1;

namespace v2x {
namespace element {

class CTimeMark {
  public:
    explicit CTimeMark();

    CTimeMark(const double& value);

    virtual ~CTimeMark();

    CTimeMark(const CTimeMark& other);
    explicit operator TimeMark_t() const;

    void set(const double& value);

    CTimeMark& operator=(const CTimeMark& other);

    bool operator==(const CTimeMark& right) const;
    bool operator!=(const CTimeMark& right) const;

    bool operator<(const CTimeMark& right) const;
    bool operator>(const CTimeMark& right) const;

  private:
    TimeMark_t value_;
};

} /* v2x */
} /* element */

#endif /* TIME_MARK_ID_HPP_ */
