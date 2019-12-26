#ifndef MINUTE_OF_THE_YEAR_HPP_
#define MINUTE_OF_THE_YEAR_HPP_

#include "MinuteOfTheYear.h"

/*
 * Expresses the number of elapsed minutes of the current year in the time system
 * being used (typically UTC time). Indicate when the message was created.
 *
 * INTEGER ( 0 .. 527040 )
 * -- 527040 - indicates invalid value
 */

namespace v2x {
namespace element {

class CMinuteOfTheYear {
  public:
    explicit CMinuteOfTheYear();
    CMinuteOfTheYear(const MinuteOfTheYear_t &value);

    virtual ~CMinuteOfTheYear();

    CMinuteOfTheYear(const CMinuteOfTheYear &value);
    explicit operator MinuteOfTheYear_t() const;

    void set(MinuteOfTheYear_t const& value);

    CMinuteOfTheYear& operator=(const CMinuteOfTheYear& other);

    bool operator==(const CMinuteOfTheYear& other) const;
    bool operator!=(const CMinuteOfTheYear& other) const;

    bool operator<(const CMinuteOfTheYear& other) const;
    bool operator>(const CMinuteOfTheYear& other) const;

  private:
    MinuteOfTheYear_t _moty;
};

} /* element */
} /* v2x */

#endif /* MINUTE_OF_THE_YEAR_HPP_ */
