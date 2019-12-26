#ifndef D_SECOND_HPP_
#define D_SECOND_HPP_

#include "DSecond.h"

/*
 * The DSRC second expressed in this data element consists of integer values
 * from zero to 60999, representing the milliseconds within a minute. A leap
 * second is represented by the value range 60000 to 60999. The value of 65535
 * shall represent an unavailable value in the range of the minute. The values
 * from 61000 to 65534 are reserved.
 *
 * DSecond ::= INTEGER (0..65535) -- units of milliseconds
 */

namespace v2x {
namespace element {

class CDSecond {
  public:
    explicit CDSecond();
    CDSecond(const DSecond_t& value);

    virtual ~CDSecond();

    CDSecond(const CDSecond &value);
    explicit operator DSecond_t() const;

    void set(const DSecond_t& value);

    CDSecond& operator=(const CDSecond& rhs);

    bool operator==(const CDSecond& rhs) const;
    bool operator!=(const CDSecond& rhs) const;

    bool operator<(const CDSecond& rhs) const;
    bool operator>(const CDSecond& rhs) const;

  private:
    DSecond_t dsecond_;
};

} /* v2x */
} /* element */

#endif /* D_SECOND_HPP_ */
