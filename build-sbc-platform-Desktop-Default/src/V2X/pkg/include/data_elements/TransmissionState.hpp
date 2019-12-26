#ifndef TRANSMISSION_STATE_HPP_
#define TRANSMISSION_STATE_HPP_

#include <TransmissionState.h>

/*
 * Data element is used to provide the current state
 * of the vehicle transmission.
 *
 * ASN.1 Representation:
 * TransmissionState ::= ENUMERATED
 *	neutral		(0), -- Neutral
 *	park		(1), -- Park
 *	forwardGears	(2), -- Forward gears
 *	reverseGears	(3), -- Reverse gears
 *	reserved1	(4),
 *	reserved2	(5),
 *	reserved3	(6),
 *	unavailable	(7) -- not-equipped or unavailable value,
 *	-- Any related speed is relative to the vehicle reference frame used
 */

namespace v2x {
namespace element {

class CTransmissionState {
  public:
    explicit CTransmissionState();
    CTransmissionState(const TransmissionState_t& value);

    virtual ~CTransmissionState();

    CTransmissionState(const CTransmissionState& other);

    explicit operator TransmissionState_t() const;

    void set(const TransmissionState_t& value);

    CTransmissionState& operator=(const CTransmissionState& other);

    bool operator==(const CTransmissionState& other) const;
    bool operator!=(const CTransmissionState& other) const;

    bool operator<(const CTransmissionState& other) const;
    bool operator>(const CTransmissionState& other) const;

  private:
    TransmissionState_t state_;
};

}   /* element */
}   /* v2x */

#endif	/* TRANSMISSION_STATE_HPP_ */
