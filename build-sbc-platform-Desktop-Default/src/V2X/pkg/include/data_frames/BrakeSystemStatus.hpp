#ifndef BRAKE_SYSTEM_STATUS_HPP_
#define BRAKE_SYSTEM_STATUS_HPP_

#include "BrakeSystemStatus.h"
#include "data_elements/CBitString.hpp"
#include "data_elements/TractionControlStatus.hpp"
#include "data_elements/AntiLockBrakeStatus.hpp"
#include "data_elements/StabilityControlStatus.hpp"
#include "data_elements/BrakeBoostApplied.hpp"
#include "data_elements/AuxiliaryBrakeStatus.hpp"

/*
 * Conveys a variety of information about
 * the current brake and system control activity of the vehicle.
 * The structure consist of a sequence of items
 * which provide status flags for any active brakes per wheel,
 * the traction control system, the anti-lock brake system,
 * the stability control system, the brake boost system,
 * and the auxiliary brake system.
 *
 * ASN.1 Representation:
 * BrakeSystemStatus ::= SEQUENCE {
 * wheelBrakes BrakeAppliedStatus,
 * traction TractionControlStatus,
 * abs AntiLockBrakeStatus,
 * scs StabilityControlStatus,
 * brakeBoost BrakeBoostApplied,
 * auxBrakes AuxiliaryBrakeStatus
 * }
*/

using namespace v2x::element;

namespace v2x {
namespace frame {

class CBrakeSystemStatus 
{
public:    
    explicit CBrakeSystemStatus();
    CBrakeSystemStatus(const CBrakeSystemStatus&);
    CBrakeSystemStatus(const BrakeSystemStatus_t&);
    ~CBrakeSystemStatus();
    explicit operator BrakeSystemStatus_t();

    CBrakeSystemStatus& operator = (const CBrakeSystemStatus&);
    bool operator == (const CBrakeSystemStatus&) const;
    bool operator != (const CBrakeSystemStatus&) const;

    CBitString<5> wheelBrakes;
    CTractionControlStatus traction;
    CAntiLockBrakeStatus abs;
    CStabilityControlStatus scs;
    CBrakeBoostApplied brakeBoost;
    CAuxiliaryBrakeStatus auxBrakes;

private:
    BrakeSystemStatus_t value_{};
};

} /* frame */
} /* v2x */

void freeBrakeSystemStatusASN(BrakeSystemStatus_t *);

#endif /* BRAKE_SYSTEM_STATUS_HPP_ */
