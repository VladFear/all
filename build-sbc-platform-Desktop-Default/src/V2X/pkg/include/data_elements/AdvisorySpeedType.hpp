#ifndef ADVISORY_SPEED_TYPE_HPP_
#define ADVISORY_SPEED_TYPE_HPP_

#include <AdvisorySpeedType.h>

/*
 * 7.3  Data Element: DE_AdvisorySpeedType
 * Use: The DE_AdvisorySpeedType data element relates the type of travel to which a given speed refers. 
 * This element is typically used as part of an AdvisorySpeed data frame for signal phase and timing data. 
 * 
 * ASN.1 Representation: 
 *  AdvisorySpeedType ::= ENUMERATED {
 *    none       (0),
 *    greenwave  (1),
 *    ecoDrive   (2),
 *    transit  (3),
 *    ... 
 *    } --Note: subject to further growth
 * 
 * Used By: This entry is used directly by one other data structure in this standard, 
 * a DF called DF_AdvisorySpeed<ASN>. In addition, this item may be used by data structures 
 * in other ITS standards.
*/

namespace v2x {
namespace element {

class CAdvisorySpeedType {
  public:
    explicit CAdvisorySpeedType();
    CAdvisorySpeedType(const AdvisorySpeedType_t& value);
    virtual ~CAdvisorySpeedType();
    CAdvisorySpeedType(const CAdvisorySpeedType& other);

    explicit operator AdvisorySpeedType_t() const;
    void set(const AdvisorySpeedType_t& value);

    CAdvisorySpeedType& operator=(const CAdvisorySpeedType& other);

    bool operator==(const CAdvisorySpeedType& other) const;
    bool operator!=(const CAdvisorySpeedType& other) const;

    bool operator<(const CAdvisorySpeedType& other) const;
    bool operator>(const CAdvisorySpeedType& other) const;

  private:
    AdvisorySpeedType_t value_;
};

} /* element */
} /* v2x */

#endif	/* ADVISORY_SPEED_TYPE_HPP_ */
