#ifndef AUXULIARY_BRAKE_STATUS_HPP_
#define AUXULIARY_BRAKE_STATUS_HPP_

#include <AuxiliaryBrakeStatus.h>

/*
 * The DE_AuxiliaryBrakeStatus data element reflects the status of the auxiliary brakes (sometimes referred to as the
 * parking brake) of the vehicle. The element can inform others that the vehicle is not equipped with auxiliary brakes or, if
 * equipped, if the auxiliary brakes status is unavailable. If the vehicle is equipped with auxiliary brakes and the status is
 * available, the element reports whether the auxiliary brakes are in a fully released (Off) state or in an engaged or in the
 * process of being engaged (On) state
 *
 * ASN.1 Representation:
 * AuxiliaryBrakeStatus ::= ENUMERATED {
 * unavailable (0), -- B'00 Vehicle Not Equipped with Aux Brakes
                    -- or Aux Brakes status is unavailable
 * off         (1), -- B'01 Vehicle's Aux Brakes are Off
 * on          (2), -- B'10 Vehicle's Aux Brakes are On ( Engaged )
 * reserved    (3), -- B'11
 * }
*/

namespace v2x {
namespace element {

class CAuxiliaryBrakeStatus {
  public:
    explicit CAuxiliaryBrakeStatus();
    CAuxiliaryBrakeStatus(const AuxiliaryBrakeStatus_t& value);

    virtual ~CAuxiliaryBrakeStatus();

    CAuxiliaryBrakeStatus(const CAuxiliaryBrakeStatus& other);

    explicit operator AuxiliaryBrakeStatus_t() const;

    void set(const AuxiliaryBrakeStatus_t& value);

    CAuxiliaryBrakeStatus& operator=(const CAuxiliaryBrakeStatus& other);

    bool operator==(const CAuxiliaryBrakeStatus& other) const;
    bool operator!=(const CAuxiliaryBrakeStatus& other) const;

    bool operator<(const CAuxiliaryBrakeStatus& other) const;
    bool operator>(const CAuxiliaryBrakeStatus& other) const;

  private:
    AuxiliaryBrakeStatus_t state_;
};

} /* element */
} /* v2x */

#endif	/* AUXULIARY_BRAKE_STATUS_HPP_ */
