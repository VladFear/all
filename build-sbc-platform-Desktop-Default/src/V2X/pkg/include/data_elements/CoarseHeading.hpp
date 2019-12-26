#ifndef COARSE_HEADING_HPP_
#define COARSE_HEADING_HPP_

#include "CoarseHeading.h"

/*
 * The DE_CoarseHeading data element is used to provide a coarser sense of heading than the DE_Heading
 * provides.
 *
 * ASN.1 Representation:
 * CoarseHeading ::= INTEGER (0..240)
 * -- Where the LSB is in units of 1.5 degrees
 * -- over a range of 0~358.5 degrees
 * -- the value 240 shall be used for unavailable
 */

const double UnitCoarseHeading = 1.5;

namespace v2x {
namespace element {

class CCoarseHeading {
  public:
    explicit CCoarseHeading();
    CCoarseHeading(const double&value);

    virtual ~CCoarseHeading();

    CCoarseHeading(const CCoarseHeading &value);
    explicit operator CoarseHeading_t() const;
    explicit operator double() const;

    void set(double const& value);

    CCoarseHeading& operator=(const CCoarseHeading& other);

    bool operator==(const CCoarseHeading& other) const;
    bool operator!=(const CCoarseHeading& other) const;

    bool operator<(const CCoarseHeading& other) const;
    bool operator>(const CCoarseHeading& other) const;

  private:
    CoarseHeading_t CoarseHeading;
};

} /* v2x */
} /* element */

#endif /* COARSE_HEADING_HPP_ */
