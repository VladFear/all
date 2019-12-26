#ifndef TRACTION_CONTROL_STATUS_HPP_
#define TRACTION_CONTROL_STATUS_HPP_

#include <TractionControlStatus.h>

/*
 * The DE_TractionControlStatus data element reflects the status of the vehicle traction control system. The element
 * can inform others that the vehicle is not equipped with traction control or, if equipped, if the traction control status is
 * unavailable. If the vehicle is equipped with traction control and the status is available, the element reports whether the
 * system is in an Off, On or Engaged state.
 *
 * ASN.1 Representation:
 * TractionControlStatus ::= ENUMERATED {
 * unavailable (0), -- B'00 Not Equipped with traction control
                    -- or traction control status is unavailable
 * off         (1), -- B'01 traction control is Off
 * on          (2), -- B'10 traction control is On (but not Engaged)
 * engaged     (3), -- B'11 traction control is Engaged
}
*/

namespace v2x {
namespace element {

class CTractionControlStatus {
  public:
    explicit CTractionControlStatus();
    CTractionControlStatus(const TractionControlStatus_t& value);

    virtual ~CTractionControlStatus();

    CTractionControlStatus(const CTractionControlStatus& other);

    explicit operator TractionControlStatus_t() const;

    void set(const TractionControlStatus_t& value);

    CTractionControlStatus& operator=(const CTractionControlStatus& other);

    bool operator==(const CTractionControlStatus& other) const;
    bool operator!=(const CTractionControlStatus& other) const;

    bool operator<(const CTractionControlStatus& other) const;
    bool operator>(const CTractionControlStatus& other) const;

  private:
    TractionControlStatus_t state_;
};

} /* element */
} /* v2x */

#endif	/* TRACTION_CONTROL_STATUS_HPP_ */
