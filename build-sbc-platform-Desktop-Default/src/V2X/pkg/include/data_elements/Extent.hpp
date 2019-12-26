#ifndef EXTENT_HPP_
#define EXTENT_HPP_

#include "Extent.h"

/*
 * The spatial distance over which this message applies and should be presented to the driver. Under certain
 * conditions some messages may never be shown to the driver of a vehicle if they are short in duration and other conflicting
 * needs supersede access to the display until such time as the subject message is no longer relevant.
 *
 * ASN.1 Representation:
 * Extent ::= ENUMERATED {
 * useInstantlyOnly
 * useFor3meters        (0),
 * useFor10meters       (1),
 * useFor50meters       (2),
 * useFor100meters      (3),
 * useFor500meters      (4),
 * useFor1000meters     (5),
 * useFor5000meters     (6),
 * useFor10000meters    (8),
 * useFor50000meters    (9),
 * useFor100000meters   (10),
 * useFor500000meters   (11),
 * useFor1000000meters  (12),
 * useFor5000000meters  (13),
 * useFor10000000meters (14),
 * forever              (15) -- very wide area
 * } -- Encoded as a 4bit value
 */

namespace v2x {
namespace element {

class CExtent {
  public:
    explicit CExtent();
    CExtent(const Extent_t& value);
    virtual ~CExtent();
    CExtent(const CExtent& other);

    explicit operator Extent_t() const;
    void set(const Extent_t& value);

    CExtent& operator=(const CExtent& other);

    bool operator==(const CExtent& other) const;
    bool operator!=(const CExtent& other) const;

    bool operator<(const CExtent& other) const;
    bool operator>(const CExtent& other) const;

  private:
    Extent_t value_;
};

} /* element */
} /* v2x */

#endif /* EXTENT_HPP_ */
