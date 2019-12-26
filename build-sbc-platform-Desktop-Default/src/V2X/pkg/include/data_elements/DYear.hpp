#ifndef D_YEAR_HPP_
#define D_YEAR_HPP_

#include "DYear.h"

/*
 * The DSRC year consists of integer values from zero to 4095 representing the year according to the Gregorian
 * calendar date system. The value of zero shall represent an unknown value.
 *
 * ASN.1 Representation:
 * DYear ::= INTEGER (0..4095) -- units of years
 */

namespace v2x {
namespace element {

class CDYear {
  public:
    explicit CDYear();

    CDYear(const DYear_t& value);

    virtual ~CDYear();

    CDYear(const CDYear& other);
    explicit operator DYear_t() const;

    void set(const DYear_t& value);

    CDYear& operator=(const CDYear& other);

    bool operator==(const CDYear& other) const;
    bool operator!=(const CDYear& other) const;

    bool operator<(const CDYear& other) const;
    bool operator>(const CDYear& other) const;

  private:
    DYear_t value_;
};

} /* element */
} /* v2x */

#endif /* D_YEAR_HPP_ */
