#ifndef APPROACH_ID_HPP_
#define APPROACH_ID_HPP_

#include "ApproachID.h"

/*
 * The DE_ApproachID data element is used to relate the index of an approach, either ingress or egress within the
 * subject lane. In general, an approach index in the context of a timing movement is not of value in the MAP and SPAT
 * process because the lane ID and signal group ID concepts handle this with more precision. This value can also be useful
 * as an aid as it can be used to indicate the gross position of a moving object (vehicle) when its lane level accuracy is
 * unknown. This value can also be used when a deployment represents sets of lanes as groups without further details (as is
 * done in Japan).
 *
 * ASN.1 Representation:
 * ApproachID ::= INTEGER (0..15) -- zero to be used when valid value is unknown
*/

namespace v2x {
namespace element {

class CApproachID {
  public:
    explicit CApproachID();
    CApproachID(const ApproachID_t& value);

    virtual ~CApproachID();

    CApproachID(const CApproachID &other);
    explicit operator ApproachID_t() const;

    void set(const ApproachID_t& value);

    CApproachID& operator=(const CApproachID& other);

    bool operator==(const CApproachID& other) const;
    bool operator!=(const CApproachID& other) const;

    bool operator<(const CApproachID& other) const;
    bool operator>(const CApproachID& other) const;

  private:
    ApproachID_t approachID_;
};

} /* element */
} /* v2x */

#endif /* APPROACH_ID_HPP_ */
