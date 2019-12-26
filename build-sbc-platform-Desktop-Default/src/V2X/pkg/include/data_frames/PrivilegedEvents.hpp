#ifndef PRIVILEGED_EVENTS_HPP_
#define PRIVILEGED_EVENTS_HPP_

#include "PrivilegedEvents.h"
#include "data_elements/CBitString.hpp"
#include "data_elements/SSPindex.hpp"

/*
* The DF_PrivilegedEvents data frame provides a means to describe various public safety events. The information in
* this data frame (along with the BSM message in which it is sent) can be used to determine various aspects about the
* sender.
*
* ASN.1 Representation:
* PrivilegedEvents ::= SEQUENCE {
* -- CERT SSP Privilege Details
* sspRights     SSPindex,
* -- The active event list
* event         PrivilegedEventFlags,
* ... }
*/

namespace v2x {
namespace frame {

using namespace v2x::element;

class CPrivilegedEvents {
  public:
    CPrivilegedEvents();
    CPrivilegedEvents(const CPrivilegedEvents&);
    CPrivilegedEvents(const PrivilegedEvents_t &);
    CPrivilegedEvents(const CSSPindex&, const CBitString<16>&);

    explicit operator PrivilegedEvents_t();

    CPrivilegedEvents & operator = (const CPrivilegedEvents &);
    bool operator == (const CPrivilegedEvents &) const;
    bool operator != (const CPrivilegedEvents &) const;

    CSSPindex sspRights;
    CBitString<16> event;

  private:
    PrivilegedEvents_t PrivilegedEvents_{};
};

} /* frame */
} /* v2x */

void freePrivilegedEventsASN(PrivilegedEvents_t*);

#endif /* PRIVILEGED_EVENTS_HPP_ */
