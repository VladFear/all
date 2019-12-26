#ifndef D_DATE_TIME_HPP_
#define D_DATE_TIME_HPP_

#include "data_elements/DYear.hpp"
#include "data_elements/DMonth.hpp"
#include "data_elements/DDay.hpp"
#include "data_elements/DHour.hpp"
#include "data_elements/DMinute.hpp"
#include "data_elements/DSecond.hpp"
#include "data_elements/DOffset.hpp"
#include "DDateTime.h"


/*
 * The DSRC style date is a compound value consisting of finite-length sequences of integers (not characters) of the
 * form: "yyyy, mm, dd, hh, mm, ss (sss+)" - as defined below.
 *
 * ASN.1 Representation:
 * DDateTime ::= SEQUENCE {
 * year    DYear
 * month   DMonth
 * day     DDay
 * hour    DHour
 * minute  DMinute OPTIONAL,
 * second  DSecond OPTIONAL,
 * offset  DOffset OPTIONAL -- time zone
 * }
*/

using namespace v2x::element;

namespace v2x {
namespace frame {

class CDDateTime
{
public:
    CDDateTime();
    CDDateTime(const CDDateTime &);
    CDDateTime(const DDateTime_t &);

    CDDateTime(const CDYear&, const CDMonth&, const CDDay&, const CDHour&, const CDMinute&, const CDSecond&, const CDOffset&);

    ~CDDateTime();

    explicit operator DDateTime_t();

    CDDateTime & operator = (const CDDateTime &);
    bool operator == (const CDDateTime &) const;
    bool operator != (const CDDateTime &) const;

    CDYear year;
    CDMonth month;
    CDDay day;
    CDHour hour;
    CDMinute minute;
    CDSecond second;
    CDOffset offset;

private:
    DDateTime_t DDateTime_{};
};

}; /* frame */
}; /* v2x */

void freeDDateTimeASN(DDateTime_t *);

#endif /* D_DATE_TIME_HPP_ */
