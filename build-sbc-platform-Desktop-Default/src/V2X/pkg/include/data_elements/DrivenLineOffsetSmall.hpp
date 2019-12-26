#ifndef DRIVEN_LINE_OFFSET_SMALL_HPP_
#define DRIVEN_LINE_OFFSET_SMALL_HPP_

#include "DrivenLineOffsetSm.h"

/*
 * The DrivenLineOffsetSmall data element is an integer value expressing the offset in a defined axis from a reference
 * lane number from which a computed lane is offset. The measurement is taken from the reference lane center line to the
 * new center line, independent of any width values. The units are a signed value with an LSB of 1 cm.
 *
 * ASN.1 Representation:
 * DrivenLineOffsetSm ::= INTEGER (-2047..2047) -- LSB units are 1 cm.
 */


namespace v2x {
namespace element {

class CDrivenLineOffsetSm {
  public:
    explicit CDrivenLineOffsetSm();
    CDrivenLineOffsetSm(const DrivenLineOffsetSm_t& value);

    virtual ~CDrivenLineOffsetSm();

    CDrivenLineOffsetSm(const CDrivenLineOffsetSm &other);
    explicit operator DrivenLineOffsetSm_t() const;

    void set(const DrivenLineOffsetSm_t& value);

    CDrivenLineOffsetSm& operator=(const CDrivenLineOffsetSm& other);

    bool operator==(const CDrivenLineOffsetSm& other) const;
    bool operator!=(const CDrivenLineOffsetSm& other) const;

    bool operator<(const CDrivenLineOffsetSm& other) const;
    bool operator>(const CDrivenLineOffsetSm& other) const;

  private:
    DrivenLineOffsetSm_t drivenLineOffsetSm_ = 0;
};

} /* element */
} /* v2x */

#endif /* DRIVEN_LINE_OFFSET_SMALL_HPP_ */
