#ifndef SPEED_HPP_
#define SPEED_HPP_

#include "Speed.h"

/*
 * Represents the vehicle speed expressed in unsigned units
 * of 0.02 meters per second. A value of 8191 shall be used
 * when the speed is unavailable.
 *
 * ASN.1 Representation:
 * Speed ::= INTEGER (0..8191) -- Units of 0.02 m/s
 *          -- The value 8191 indicates that
 *          -- speed is unavailable
 */

const double UnitSpeed = 0.02;

namespace v2x {
namespace element {

class CSpeed {
public:
    explicit CSpeed();

    CSpeed(const double& value);

    virtual ~CSpeed();

    CSpeed(const CSpeed& other);
    explicit operator Speed_t() const;
    explicit operator double() const;

    void set(double const& value);

    CSpeed& operator=(const CSpeed& other);

    bool operator==(const CSpeed& other) const;
    bool operator!=(const CSpeed& other) const;

    bool operator<(const CSpeed& other) const;
    bool operator>(const CSpeed& other) const;

private:
    Speed_t value_;
};

} /* v2x */
} /* element */

#endif /* SPEED_HPP_ */
