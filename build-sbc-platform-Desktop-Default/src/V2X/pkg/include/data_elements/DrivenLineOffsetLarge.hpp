#ifndef DRIVEN_LINE_OFFSET_LARGE_HPP_
#define DRIVEN_LINE_OFFSET_LARGE_HPP_

#include "DrivenLineOffsetLg.h"

/*
 * The DE_DrivenLineOffsetLarge data element is an integer value expressing the offset in a defined axis from a
 * reference lane number from which a computed lane is offset. The measurement is taken from the reference lane center
 * line to the new center line, independent of any width values. The units are a signed value with an LSB of 1 cm.
 *
 * ASN.1 Representation:
 * DrivenLineOffsetLg ::= INTEGER (-32767..32767) -- LSB units are 1 cm.
 */


namespace v2x {
namespace element {

class CDrivenLineOffsetLg {
  public:
    explicit CDrivenLineOffsetLg();
    CDrivenLineOffsetLg(const DrivenLineOffsetLg_t& value);

    virtual ~CDrivenLineOffsetLg();

    CDrivenLineOffsetLg(const CDrivenLineOffsetLg &other);
    explicit operator DrivenLineOffsetLg_t() const;

    void set(const DrivenLineOffsetLg_t& value);

    CDrivenLineOffsetLg& operator=(const CDrivenLineOffsetLg& other);

    bool operator==(const CDrivenLineOffsetLg& other) const;
    bool operator!=(const CDrivenLineOffsetLg& other) const;

    bool operator<(const CDrivenLineOffsetLg& other) const;
    bool operator>(const CDrivenLineOffsetLg& other) const;

  private:
    DrivenLineOffsetLg_t drivenLineOffsetLg_ = 0;
};

} /* element */
} /* v2x */

#endif /* DRIVEN_LINE_OFFSET_LARGE_HPP_ */
