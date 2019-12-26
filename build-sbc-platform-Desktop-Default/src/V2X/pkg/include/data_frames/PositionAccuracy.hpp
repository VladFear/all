#ifndef POSITION_ACCURACY_HPP_
#define POSITION_ACCURACY_HPP_

#include "PositionAccuracy.h"
#include "data_elements/SemiMajorAxisOrientation.hpp"
#include "data_elements/SemiMajorAxisAccuracy.hpp"
#include "data_elements/SemiMinorAxisAccuracy.hpp"

/*
 * The DF_PositionalAccuracy data frame consists of
 * various parameters of quality used to model the
 * accuracy of the positional determination with respect
 * to each given axis.
 *
 * ASN.1 Representation:
 * PositionalAccuracy ::= SEQUENCE {
 * -- NMEA-183 values expressed in strict ASN form
 * semiMajor SemiMajorAxisAccuracy,
 * semiMinor SemiMinorAxisAccuracy,
 * orientation SemiMajorAxisOrientation
 * }
*/

namespace v2x {
namespace frame {

using namespace v2x::element;

class CPositionAccuracy {
  public:
    explicit CPositionAccuracy();
    CPositionAccuracy(const CPositionAccuracy&);
    CPositionAccuracy(const PositionAccuracy_t&);
    CPositionAccuracy(const CSemiMajorAxisAccuracy&, const CSemiMinorAxisAccuracy&, const CSemiMajorAxisOrientation&);

    ~CPositionAccuracy();
    explicit operator PositionAccuracy_t();

    CPositionAccuracy& operator = (const CPositionAccuracy&);

    bool operator == (const CPositionAccuracy&) const;
    bool operator != (const CPositionAccuracy&) const;

    CSemiMajorAxisAccuracy semiMajor;
    CSemiMinorAxisAccuracy semiMinor;
    CSemiMajorAxisOrientation orientation;

  private:
    PositionAccuracy_t value_ = PositionAccuracy_t();

};

} /* frame */
} /* v2x */

#endif /* POSITION_ACCURACY_HPP_ */
