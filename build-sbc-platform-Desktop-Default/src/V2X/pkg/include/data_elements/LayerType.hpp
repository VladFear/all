#ifndef LAYER_TYPE_HPP_
#define LAYER_TYPE_HPP_

#include "LayerType.h"

/*
 * The DE_LayerType is a data element used to uniquely identify the type of information to be found in a layer of a
 * geographic map fragment such as an intersection.
 *
 * ASN.1 Representation:
 * LayerType ::= ENUMERATED {
 * none,
 * mixedContent, -- two or more of the below types
 * generalMapData,
 * intersectionData,
 * curveData,
 * roadwaySectionData,
 * parkingAreaData,
 * sharedLaneData,
 * ... }
*/

namespace v2x {
namespace element {

class CLayerType {
  public:

    explicit CLayerType();
    CLayerType(const e_LayerType& value);
    CLayerType(const CLayerType& other);
    virtual ~CLayerType();

    explicit operator e_LayerType() const;
    void set(const e_LayerType& value);

    CLayerType& operator=(const CLayerType& other);

    bool operator==(const CLayerType& other) const;
    bool operator!=(const CLayerType& other) const;

    bool operator<(const CLayerType& other) const;
    bool operator>(const CLayerType& other) const;

  private:
    e_LayerType value_ = LayerType_none;
};

} /* element */
} /* v2x */

#endif /* LAYER_TYPE_HPP_ */
