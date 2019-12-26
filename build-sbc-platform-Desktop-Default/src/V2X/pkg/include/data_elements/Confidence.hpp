#ifndef CONFIDENCE_HPP_
#define CONFIDENCE_HPP_

#include "Confidence.h"

/*
 * The entry DE_Confidence is a data element representing the general confidence of another associated value.
 * ASN.1 Representation:
 * Confidence ::= INTEGER (0..200)
 * -- LSB units of 0.5 percent
 */

const double UnitConfidence = 0.5;

namespace v2x {
namespace element {

class CConfidence {
  public:
    explicit CConfidence();

    CConfidence(const double& value);

    virtual ~CConfidence();

    CConfidence(const CConfidence& other);

    explicit operator double() const;
    explicit operator Confidence_t() const;

    void set(const double& value);

    CConfidence& operator=(const CConfidence& other);

    bool operator==(const CConfidence& other) const;
    bool operator!=(const CConfidence& other) const;

    bool operator<(const CConfidence& other) const;
    bool operator>(const CConfidence& other) const;

  private:
    Confidence_t Confidence_;
};

} /* element */
} /* v2x */

#endif /* CONFIDENCE_HPP_ */
