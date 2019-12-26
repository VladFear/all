#ifndef SIREN_IN_USE_HPP_
#define SIREN_IN_USE_HPP_

#include <SirenInUse.h>

/*
 * A data element which is set if any sort of audible alarm is being emitted from the vehicle. This includes various
 * common sirens as well as backup beepers and other slow speed maneuvering alerts.
 * Used to reflect any type or style of audio alerting when a vehicle is progressing and transmitting DSRC messages to
 * others about its path. Intended to be used as part of the DSRC safety message for public safety vehicles (and others
 * which alert during maneuvers) operating in the area.
 *
 * ASN.1 Representation:
 * SirenInUse ::= ENUMERATED {
 * unavailable      (0), -- Not Equipped or unavailable
 * notInUse         (1),
 * inUse            (2),
 * reserved         (3) -- for future use
*/

namespace v2x {
namespace element {

class CSirenInUse {
  public:
    explicit CSirenInUse();
    CSirenInUse(const SirenInUse_t& value);

    virtual ~CSirenInUse();

    CSirenInUse(const CSirenInUse& other);

    explicit operator SirenInUse_t() const;

    void set(const SirenInUse_t& value);

    CSirenInUse& operator=(const CSirenInUse& other);

    bool operator==(const CSirenInUse& other) const;
    bool operator!=(const CSirenInUse& other) const;

    bool operator<(const CSirenInUse& other) const;
    bool operator>(const CSirenInUse& other) const;

  private:
    SirenInUse_t state_;
};

} /* element */
} /* v2x */

#endif	/* SIREN_IN_USE_HPP_ */
