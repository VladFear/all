#ifndef LAYER_ID_HPP_
#define LAYER_ID_HPP_

#include "LayerID.h"

/*
 * The DE_LayerID is a data element used to uniquely identify the layers of a geographic map fragment such as an
 * intersection. Note that the layer ID is used simply as a means to express a layer within a transmitted message; it has no
 * value as a unique or permanent naming system for the map object (such as an intersection or any of its component parts).
 *
 * ASN.1 Representation:
 * LayerID ::= INTEGER (0..100)
*/

namespace v2x {
namespace element {

class CLayerID {
  public:

    explicit CLayerID();
    CLayerID(const LayerID_t& value);
    CLayerID(const CLayerID& other);
    virtual ~CLayerID();

    explicit operator LayerID_t() const;
    void set(const LayerID_t& value);

    CLayerID& operator=(const CLayerID& other);

    bool operator==(const CLayerID& other) const;
    bool operator!=(const CLayerID& other) const;

    bool operator<(const CLayerID& other) const;
    bool operator>(const CLayerID& other) const;

  private:
    LayerID_t value_;
};

} /* element */
} /* v2x */

#endif /* LAYER_ID_HPP_ */
