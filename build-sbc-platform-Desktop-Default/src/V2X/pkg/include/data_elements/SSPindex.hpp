#ifndef SSP_INDEX_HPP_
#define SSP_INDEX_HPP_

#include "SSPindex.h"

/*
 * The SSP index is used to control the data elements that follow the occurrence of the index. The index relates back
 * to the SSP contents in the CERT used to declare what content is allowed by that CERT. In the absence of a matching
 * index in the message sender’s CERT, the message contents are not valid.
 *
 * ASN.1 Representation:
 * SSPindex ::= INTEGER (0..31)
 */

namespace v2x {
namespace element {

class CSSPindex {
  public:
    explicit CSSPindex();

    CSSPindex(const SSPindex_t& value);

    virtual ~CSSPindex();

    CSSPindex(const CSSPindex& other);
    explicit operator SSPindex_t() const;

    void set(const SSPindex_t& value);

    CSSPindex& operator=(const CSSPindex& other);

    bool operator==(const CSSPindex& other) const;
    bool operator!=(const CSSPindex& other) const;

    bool operator<(const CSSPindex& other) const;
    bool operator>(const CSSPindex& other) const;

  private:
    SSPindex_t value_;
};

} /* element */
} /* v2x */

#endif /* SSP_INDEX_HPP_ */
