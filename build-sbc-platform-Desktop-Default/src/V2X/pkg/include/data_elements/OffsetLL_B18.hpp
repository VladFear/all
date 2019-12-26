#ifndef OFFSET_LL_B18_HPP_
#define OFFSET_LL_B18_HPP_

#include "OffsetLL-B18.h"

/*
 * An 18-bit delta offset in Lat or Long direction from the last point. The offset is positive to the East and to the North
 * directions. In LSB units of 0.1 microdegrees (unless a zoom is employed). The most negative value shall be used to
 * indicate an unknown value. It should be noted that while the precise range of the data element in degrees is a constant
 * value, the equivalent length in meters will vary with the position on the earth that is used.
 * The above methodology is used when the offset is incorporated in data frames other than DF_PathHistoryPoint. Refer to
 * the Use paragraph of DF_PathHistory for the methodology to calculate this data element for use in DF_PathHistoryPoint.
 *
 * ASN.1 Representation:
 * OffsetLL-B18 ::= INTEGER (-131072..131071)
 * -- A range of +- 0.0131071 degrees
 * -- The value +131071 shall be used for values >= than +0.0131071 degrees
 * -- The value -131071 shall be used for values <= than -0.0131071 degrees
 * -- The value -131072 shall be used unknown
 * -- In LSB units of 0.1 microdegrees (unless a zoom is employed)
 */

const double UnitOffsetLL_B18 = 0.0000001;

namespace v2x {
namespace element {

class COffsetLL_B18 {
  public:
    explicit COffsetLL_B18();
    COffsetLL_B18(const double&value);

    virtual ~COffsetLL_B18();

    COffsetLL_B18(const COffsetLL_B18 &value);
    explicit operator OffsetLL_B18_t() const;
    explicit operator double() const;

    void set(double const& value);

    COffsetLL_B18& operator=(const COffsetLL_B18& other);

    bool operator==(const COffsetLL_B18& other) const;
    bool operator!=(const COffsetLL_B18& other) const;

    bool operator<(const COffsetLL_B18& other) const;
    bool operator>(const COffsetLL_B18& other) const;

  private:
    OffsetLL_B18_t OffsetLL_B18;
};

} /* v2x */
} /* element */

#endif /* OFFSET_LL_B18_HPP_ */
