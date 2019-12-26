#ifndef ANTI_LOCK_BRAKE_STATUS_HPP_
#define ANTI_LOCK_BRAKE_STATUS_HPP_

#include <AntiLockBrakeStatus.h>

/*
 * The DE_AntiLockBrakeStatus data element reflects the status of the vehicle ABS. The element can inform others
 * that the vehicle is not equipped with ABS or, if equipped, if the ABS status is unavailable. If the vehicle is equipped with
 * ABS and the status is available, the element reports whether the system is in an Off, On or Engaged state
 *
 * ASN.1 Representation:
 * AntiLockBrakeStatus ::= ENUMERATED {
 * unavailable (0), -- B'00 Vehicle Not Equipped with ABS Brakes
 *                  -- or ABS Brakes status is unavailable
 * off         (1), -- B'01 Vehicle's ABS are Off
 * on          (2), -- B'10 Vehicle's ABS are On ( but not Engaged )
 * engaged     (3), -- B'11 Vehicle's ABS control is Engaged on any wheel
 * }
*/

namespace v2x {
namespace element {

class CAntiLockBrakeStatus {
  public:
    explicit CAntiLockBrakeStatus();
    CAntiLockBrakeStatus(const AntiLockBrakeStatus_t& value);

    virtual ~CAntiLockBrakeStatus();

    CAntiLockBrakeStatus(const CAntiLockBrakeStatus& other);

    explicit operator AntiLockBrakeStatus_t() const;

    void set(const AntiLockBrakeStatus_t& value);

    CAntiLockBrakeStatus& operator=(const CAntiLockBrakeStatus& other);

    bool operator==(const CAntiLockBrakeStatus& other) const;
    bool operator!=(const CAntiLockBrakeStatus& other) const;

    bool operator<(const CAntiLockBrakeStatus& other) const;
    bool operator>(const CAntiLockBrakeStatus& other) const;

  private:
    AntiLockBrakeStatus_t state_;
};

} /* element */
} /* v2x */

#endif	/* ANTI_LOCK_BRAKE_STATUS_HPP_ */
