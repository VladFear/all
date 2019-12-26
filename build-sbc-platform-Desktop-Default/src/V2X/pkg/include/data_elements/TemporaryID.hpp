#ifndef TEMPID_HPP_
#define TEMPID_HPP_

#include "TemporaryID.h"
#include <sstream>
#include <string>

/*
 * This is the 4 octet random device identifier, called the TemporaryID. When used for a mobile OBU device, this value
 * will change periodically to ensure the overall anonymity of the vehicle, unlike a typical wireless or wired 802 device ID.
 * Because this value is used as a means to identify the local vehicles that are interacting during an encounter, it is used in
 * the message set. Other devices, such as infrastructure (RSUs), may have a fixed value for the temporary ID value. See
 * also DE_StationID which is used in other deployment regions.
 *
 * ASN.1 Representation:
 * TemporaryID ::= OCTET STRING (SIZE(4))
*/

namespace v2x {
namespace element {

class CTemporaryID {
  public:
    explicit CTemporaryID();

    CTemporaryID(const TemporaryID_t& asn_name);
    CTemporaryID(const std::string& name);

    CTemporaryID(const CTemporaryID& other);

    CTemporaryID& operator=(const CTemporaryID& other);

    virtual ~CTemporaryID();

    void set(const std::string& name);

    explicit operator TemporaryID_t() const;
    explicit operator TemporaryID_t*() const;
    explicit operator std::string() const;

    bool operator==(const CTemporaryID& other) const;
    bool operator!=(const CTemporaryID& other) const;

  private:
    std::string name_;
};

} /* v2x */
} /* element */

void freeTemporaryIDASN(TemporaryID_t *asn_name);

#endif /* TEMPID_HPP_ */
