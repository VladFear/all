#ifndef ITIS_CODES_HPP_
#define ITIS_CODES_HPP_

#include "ITIScodes.h"

/*
 * The complete set of ITIS codes can be found in Volume Two of the J2540 Standard. This is a set of over 1,000
 * items which are used to encode common events and list items in ITS.
 *
 * ASN.1 Representation:
 * TIScodes ::= INTEGER (0.. 65535)
 * -- The defined list of ITIS codes is too long to list here
 * -- Many smaller lists use a sub-set of these codes as defined elements
 * -- Also enumerated values expressed as text constant are very common,
 * -- and in many deployments the list codes are used as a shorthand for
 * -- this text. Also the XML expressions commonly use a union of the
 * -- code values and the textual expressions.
 * -- Consult SAE J2540 for further details.
*/

namespace v2x {
namespace element {

class CITIScodes {
  public:
    explicit CITIScodes();
    CITIScodes(const ITIScodes_t &value);

    virtual ~CITIScodes();

    CITIScodes(const CITIScodes &value);
    explicit operator ITIScodes_t() const;

    void set(ITIScodes_t const& value);

    CITIScodes& operator=(const CITIScodes& other);

    bool operator==(const CITIScodes& other) const;
    bool operator!=(const CITIScodes& other) const;

    bool operator<(const CITIScodes& other) const;
    bool operator>(const CITIScodes& other) const;

  private:
    ITIScodes_t ITIScodes_;
};

} /* v2x */
} /* element */

#endif /* ITIS_CODES_HPP_ */
