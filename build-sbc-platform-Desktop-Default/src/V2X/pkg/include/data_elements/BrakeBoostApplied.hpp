#ifndef BRAKE_BOOST_APPLIED_HPP_
#define BRAKE_BOOST_APPLIED_HPP_

#include <BrakeBoostApplied.h>

/*
 * This is a data element which, when set to the "on" state, indicates emergency braking. This data element is an
 * on/off value which indicates engagement of the vehicle's brake boost assist function (as well as an unavailable state).
 * Brake boost assist is available on some vehicles. It detects the potential of a situation requiring maximum braking and
 * pre-charges the brake system even before the driver presses the brake pedal. This situation is detected either by
 * measuring a rapid release of the accelerator pedal or via a forward sensing system. Some systems also apply full braking
 * when the driver presses the pedal, even with a light force. Multiple reports by equipped vehicles activating their brake
 * boost at the same location is an indication of an emergency situation on the road and is therefore of use to road
 * authorities.
 *
 * ASN.1 Representation:
 * BrakeBoostApplied ::= ENUMERATED {
 * unavailable (0), -- Vehicle not equipped with brake boost
                    -- or brake boost data is unavailable
 * off         (1), -- Vehicle's brake boost is off
 * on          (2) -- Vehicle's brake boost is on (applied)
 * }
*/

namespace v2x {
namespace element {

class CBrakeBoostApplied {
  public:
    explicit CBrakeBoostApplied();
    CBrakeBoostApplied(const BrakeBoostApplied_t& value);

    virtual ~CBrakeBoostApplied();

    CBrakeBoostApplied(const CBrakeBoostApplied& other);

    explicit operator BrakeBoostApplied_t() const;

    void set(const BrakeBoostApplied_t& value);

    CBrakeBoostApplied& operator=(const CBrakeBoostApplied& other);

    bool operator==(const CBrakeBoostApplied& other) const;
    bool operator!=(const CBrakeBoostApplied& other) const;

    bool operator<(const CBrakeBoostApplied& other) const;
    bool operator>(const CBrakeBoostApplied& other) const;

  private:
    BrakeBoostApplied_t state_;
};

} /* element */
} /* v2x */

#endif	/* BRAKE_BOOST_APPLIED_HPP_ */
