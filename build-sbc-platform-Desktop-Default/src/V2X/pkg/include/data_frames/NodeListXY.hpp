#ifndef NODE_LIST_XY_HPP_
#define NODE_LIST_XY_HPP_

#include "NodeListXY.h"
#include "NodeXY.hpp"
#include "ComputedLane.hpp"

namespace v2x {
namespace frame {

class CNodeListXY {
public:
    CNodeListXY();
    CNodeListXY(const NodeListXY_t &);
    CNodeListXY(const CNodeSetXY &);
    CNodeListXY(const CComputedLane &);
    CNodeListXY(const CNodeListXY &);

    explicit operator NodeListXY_t();

    CNodeListXY &operator=(const CNodeListXY &);
    bool operator==(const CNodeListXY &) const;
    bool operator!=(const CNodeListXY &) const;

    /* add union when appear problem with memory */
    CNodeSetXY nodes;
    CComputedLane computed;

  private:
    NodeListXY_t nodeListXY_{};
};

} /* frame */
} /* v2x */

void freeNodeListXYASN(NodeListXY_t *asn_type);

#endif /* NODE_LIST_XY_HPP_ */
