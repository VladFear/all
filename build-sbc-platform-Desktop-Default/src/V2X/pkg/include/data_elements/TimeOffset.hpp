#ifndef TIME_OFFSET_HPP_
#define TIME_OFFSET_HPP_

#include "TimeOffset.h"

/*
 * The DE_TimeOffset data element is used to convey an offset in time from a known point. It is typically used to relate
 * a set of measurements made in the recent past, such as a set of path points.
 * The above methodology is used when the offset is incorporated in data frames other than DF_PathHistoryPoint. Refer to
 * the Use paragraph of DF_PathHistory for the methodology to calculate this data element for use in DF_PathHistoryPoint.
 *
 * ASN.1 Representation:
 * TimeOffset ::= INTEGER (1..65535)
 * -- LSB units of of 10 mSec,
 * -- with a range of 0.01 seconds to 10 minutes and 55.34 seconds
 * -- a value of 65534 to be used for 655.34 seconds or greater
 * -- a value of 65535 to be unavailable
 */

const double UnitTimeOffset = 0.01;

namespace v2x {
namespace element {

class CTimeOffset {
  public:
    explicit CTimeOffset();
    CTimeOffset(const double&value);

    virtual ~CTimeOffset();

    CTimeOffset(const CTimeOffset &value);
    explicit operator TimeOffset_t() const;
    explicit operator double() const;

    void set(double const& value);

    CTimeOffset& operator=(const CTimeOffset& other);

    bool operator==(const CTimeOffset& other) const;
    bool operator!=(const CTimeOffset& other) const;

    bool operator<(const CTimeOffset& other) const;
    bool operator>(const CTimeOffset& other) const;

  private:
    TimeOffset_t TimeOffset;
};

} /* v2x */
} /* element */

#endif /* TIME_OFFSET_HPP_ */
