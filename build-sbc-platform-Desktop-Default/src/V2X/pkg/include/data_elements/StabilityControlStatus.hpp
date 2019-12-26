#ifndef STABILITY_CONTROL_STATUS_HPP_
#define STABILITY_CONTROL_STATUS_HPP_

#include <StabilityControlStatus.h>

/*
 * The DE_StabilityControlStatus data element reflects the current state of the stability control system. The element
 * can inform others that the vehicle is not equipped with stability control or, if equipped, if the stability control status is
 * unavailable. If the vehicle is equipped with stability control and the status is available, the element reports whether the
 * system is in an Off, On or Engaged state.
 *
 * ASN.1 Representation:
 * StabilityControlStatus ::= ENUMERATED {
 * unavailable (0), -- B'00 Not Equipped with SC
                    -- or SC status is unavailable
 * off         (1), -- B'01 Off
 * on          (2), -- B'10 On or active (but not engaged)
 * engaged     (3), -- B'11 stability control is Engaged
 * }
*/

namespace v2x {
namespace element {

class CStabilityControlStatus {
  public:
    explicit CStabilityControlStatus();
    CStabilityControlStatus(const StabilityControlStatus_t& value);

    virtual ~CStabilityControlStatus();

    CStabilityControlStatus(const CStabilityControlStatus& other);

    explicit operator StabilityControlStatus_t() const;

    void set(const StabilityControlStatus_t& value);

    CStabilityControlStatus& operator=(const CStabilityControlStatus& other);

    bool operator==(const CStabilityControlStatus& other) const;
    bool operator!=(const CStabilityControlStatus& other) const;

    bool operator<(const CStabilityControlStatus& other) const;
    bool operator>(const CStabilityControlStatus& other) const;

  private:
    StabilityControlStatus_t state_;
};

} /* element */
} /* v2x */

#endif	/* STABILITY_CONTROL_STATUS_HPP_ */
