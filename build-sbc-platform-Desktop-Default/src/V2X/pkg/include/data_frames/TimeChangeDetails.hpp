#ifndef TIME_CHANGE_DETAILS_HPP_
#define TIME_CHANGE_DETAILS_HPP_

#include "data_elements/TimeMark.hpp"
#include "data_elements/TimeIntervalConfidence.hpp"
#include "TimeChangeDetails.h"

/*
 * The TimeChangeDetails data frame conveys details about the timing of a phase
 * within a movement.
 *
 * TimeChangeDetails ::= SEQUENCE {
 *      startTime  TimeMark     OPTIONAL,
 *      minEndTime TimeMark,
 *      maxEndTime TimeMark     OPTIONAL,
 *      likelyTime TimeMark     OPTIONAL,
 *      confidence TimeIntervalConfidence OPTIONAL,
 *      nextTime   TimeMark     OPTIONAL
 */

namespace v2x {
namespace frame {

using namespace element;

class CTimeChangeDetails {

  public:
    CTimeChangeDetails();
    CTimeChangeDetails(const CTimeMark&);
    CTimeChangeDetails(const TimeChangeDetails_t&);

    CTimeChangeDetails(const CTimeChangeDetails&);

    explicit operator TimeChangeDetails_t();
    CTimeChangeDetails& operator=(const CTimeChangeDetails&);
    bool operator==(const CTimeChangeDetails&) const;
    bool operator!=(const CTimeChangeDetails&) const;

    CTimeMark               startTime;
    CTimeMark               minEndTime;
    CTimeMark               maxEndTime;
    CTimeMark               likelyTime;
    CTimeMark               nextTime;
    CTimeIntervalConfidence confidence;

  private:
    TimeChangeDetails_t TimeChangeDetails_{};

};

} /* frame */
} /* v2x */

void freeTimeChangeDetailsASN(TimeChangeDetails_t *);


#endif /* TIME_CHANGE_DETAILS_HPP_ */
