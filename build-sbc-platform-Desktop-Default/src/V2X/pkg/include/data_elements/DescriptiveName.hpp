#ifndef DESCRIPTIVE_NAME_HPP_
#define DESCRIPTIVE_NAME_HPP_

#include "DescriptiveName.h"
#include <sstream>

/*
 * The DescriptiveName data element is used in maps and intersections to provide a human readable and
 * recognizable name for the feature that follows. It is typically used when debugging a data flow and not in production use.
 * One key exception to this general rule is to provide a human-readable string for disabled travelers in the case of
 * crosswalks and sidewalk lane objects.
 *
 * ASN.1 Representation:
 * DescriptiveName ::= IA5String (SIZE(1..63))
*/


namespace v2x {
namespace element {

class CDescriptiveName {
  public:
    explicit CDescriptiveName();

    CDescriptiveName(const DescriptiveName_t* asn_name);
    CDescriptiveName(const DescriptiveName_t asn_name);

    CDescriptiveName(const std::string& name);

    CDescriptiveName(const CDescriptiveName& other);

    CDescriptiveName& operator=(const CDescriptiveName& other);

    virtual ~CDescriptiveName();

    void set(const std::string& name);
    void set(const DescriptiveName_t* asn_name);

    explicit operator DescriptiveName_t*() const;
    explicit operator DescriptiveName_t() const;
    explicit operator std::string() const;

    bool operator==(const CDescriptiveName& other) const;
    bool operator!=(const CDescriptiveName& other) const;
  private:
    std::string name_;
};

} /* element */
} /* v2x */

void freeDescriptiveNameASN(DescriptiveName_t* asn_name);

#endif /* DESCRIPTIVE_NAME_HPP_ */
