#ifndef DATA_PARAMETERS_HPP_
#define DATA_PARAMETERS_HPP_

#include "data_elements/DescriptiveName.hpp"
#include "DataParameters.h"

/*
 * The DataParameters data frame is used to provide basic (static) information on how a map fragment was
 * processed or determined.
 *
 * ASN.1 Representation:
 * DataParameters ::= SEQUENCE {
 * processMethod IA5String(SIZE(1..255))
 * processAgency IA5String(SIZE(1..255))
 * lastCheckedDate IA5String(SIZE(1..255))
 * geoidUsed IA5String(SIZE(1..255))
 * ... }
*/

namespace v2x {
namespace frame {

using namespace element;

class CDataParameters {
  public:

    CDataParameters();
    CDataParameters(const DataParameters_t&);
    CDataParameters(const CDataParameters&);

    explicit operator DataParameters_t();
    CDataParameters& operator=(const CDataParameters&);
    bool operator==(const CDataParameters&) const;
    bool operator!=(const CDataParameters&) const;

    CDescriptiveName processMethod;
    CDescriptiveName processAgency;
    CDescriptiveName lastCheckedDate;
    CDescriptiveName geoidUsed;

  private:
    DataParameters_t DataParameters_{};

};

} /* v2x */
} /* frame */

void freeDataParametersASN(DataParameters_t*);

#endif /* DATA_PARAMETERS_HPP_ */
