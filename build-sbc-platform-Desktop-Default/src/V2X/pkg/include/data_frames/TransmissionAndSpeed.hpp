#ifndef TRANSMISSION_AND_SPEED_HPP_
#define TRANSMISSION_AND_SPEED_HPP_

#include "data_elements/TransmissionState.hpp"
#include "data_elements/Speed.hpp"
#include "TransmissionAndSpeed.h"

/*
 * The DF_TransmissionAndSpeed data frame expresses the speed of the vehicle and the state of the transmission.
 * The transmission state of 'reverse' can be used as a sign value for the speed element when needed.
 *
 * ASN.1 Representation:
 * TransmissionAndSpeed ::= SEQUENCE {
 * transmisson   TransmissionState,
 * speed         Velocity
 * }
 */

using namespace v2x::element;

namespace v2x {
namespace frame {

class CTransmissionAndSpeed {
  public:
    typedef CSpeed Velocity;

    CTransmissionAndSpeed();
    CTransmissionAndSpeed(const TransmissionAndSpeed_t&);
    CTransmissionAndSpeed(const CTransmissionAndSpeed&);
    CTransmissionAndSpeed(const CTransmissionState&, const Velocity&);

    ~CTransmissionAndSpeed();
    explicit operator TransmissionAndSpeed_t();

    CTransmissionAndSpeed & operator = (const CTransmissionAndSpeed&);
    bool operator == (const CTransmissionAndSpeed&) const;
    bool operator != (const CTransmissionAndSpeed&) const;

    CTransmissionState transmisson_field;
    Velocity speed_field;

  private:
    TransmissionAndSpeed_t TransmissionState_ = TransmissionAndSpeed_t();
};

}; /* frame */
}; /* v2x */

#endif /* TRANSMISSION_AND_SPEED_HPP_ */
