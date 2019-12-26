#ifndef LIGHTBAR_IN_USE_HPP_
#define LIGHTBAR_IN_USE_HPP_

#include <LightbarInUse.h>

/*
 * The DE_LightbarInUse is a data element in which the named bits are set to one if any sort of additional visible
 * lighting-alerting system is currently in use by a vehicle. This includes light bars and the various symbols they can indicate
 * as well as arrow boards, flashing lights (including back up alerts), and any other form of lighting not found on normal
 * vehicles of this type or related to safety systems. Used to reflect any type or style of visual alerting when a vehicle is
 * progressing and transmitting DSRC messages to other nearby vehicles about its path.
 *
 * ASN.1 Representation:
 * LightbarInUse ::= ENUMERATED {
 * unavailable            (0), -- Not Equipped or unavailable
 * notInUse               (1), -- none active
 * inUse                  (2),
 * yellowCautionLights    (3),
 * schooldBusLights       (4),
 * arrowSignsActive       (5),
 * slowMovingVehicle      (6),
 * freqStops              (7)
 * }
*/

namespace v2x {
namespace element {

class CLightbarInUse {
  public:
    explicit CLightbarInUse();
    CLightbarInUse(const LightbarInUse_t& value);

    virtual ~CLightbarInUse();

    CLightbarInUse(const CLightbarInUse& other);

    explicit operator LightbarInUse_t() const;

    void set(const LightbarInUse_t& value);

    CLightbarInUse& operator=(const CLightbarInUse& other);

    bool operator==(const CLightbarInUse& other) const;
    bool operator!=(const CLightbarInUse& other) const;

    bool operator<(const CLightbarInUse& other) const;
    bool operator>(const CLightbarInUse& other) const;

  private:
    LightbarInUse_t state_;
};

} /* element */
} /* v2x */

#endif	/* LIGHTBAR_IN_USE_HPP_ */
