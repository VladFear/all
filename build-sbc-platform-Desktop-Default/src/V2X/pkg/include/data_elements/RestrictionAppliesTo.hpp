#ifndef RESTRICTION_APPLIES_TO_HPP_
#define RESTRICTION_APPLIES_TO_HPP_

#include "RestrictionAppliesTo.h"

/*
 * The RestrictionAppliesTo data element provides a short list of common vehicle types which may have one or more
 * special movements at an intersection. In general, these movements are not visible to other traffic with signal heads, but
 *the SPAT data reflects the state of the movement. Various restricted movements at an intersection can be expressed
 * using this element to indicate where the movement applies.
 *
 * ASN.1 Representation:
 * RestrictionAppliesTo ::= ENUMERATED {
 * none,                -- applies to nothing
 * equippedTransit,     -- buses etc.
 * equippedTaxis,
 * equippedOther,       -- other vehicle types with
                        -- necessary signal phase state
                        -- reception equipment
 * emissionCompliant,   -- regional variants with more
                        -- definitive items also exist
 * equippedBicycle,
 * weightCompliant,
 * heightCompliant,     -- Items dealing with traveler needs serviced by the infrastructure
                        -- These end users (which are not vehicles) are presumed to be suitably equipped
 * pedestrians,
 * slowMovingPersons,
 * wheelchairUsers,
 * visualDisabilities,
 * audioDisabilities,   -- hearing
 * otherUnknownDisabilities,
 * ... }
*/

namespace v2x {
namespace element {

class CRestrictionAppliesTo {
  public:

    explicit CRestrictionAppliesTo();
    CRestrictionAppliesTo(const e_RestrictionAppliesTo& value);
    CRestrictionAppliesTo(const CRestrictionAppliesTo& other);
    virtual ~CRestrictionAppliesTo();

    explicit operator e_RestrictionAppliesTo() const;
    explicit operator long() const;
    void set(const e_RestrictionAppliesTo& value);

    CRestrictionAppliesTo& operator=(const CRestrictionAppliesTo& other);

    bool operator==(const CRestrictionAppliesTo& other) const;
    bool operator!=(const CRestrictionAppliesTo& other) const;

    bool operator<(const CRestrictionAppliesTo& other) const;
    bool operator>(const CRestrictionAppliesTo& other) const;

  private:
    e_RestrictionAppliesTo value_ = RestrictionAppliesTo_none;
};

} /* element */
} /* v2x */

#endif /* RESTRICTION_APPLIES_TO_HPP_ */
