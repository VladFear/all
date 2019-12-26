#ifndef SPEED_ADVICE_HPP_
#define SPEED_ADVICE_HPP_

#include "SpeedAdvice.h"

/*
 * This data element represents the recommended velocity of an object,
 * typically a vehicle speed along a roadway, expressed in unsigned units
 * of 0.1 meters per second.
 *
 * SpeedAdvice ::= INTEGER (0..500)
 * -- LSB units are 0.1 m/s^2
 * -- the value 499 shall be used for values at or greater than 49.9 m/s
 * -- the value 500 shall be used to indicate that speed is unavailable
 */

const double UnitSpeedAdvice = 0.1;

namespace v2x {
namespace element {

class CSpeedAdvice {
public:
    explicit CSpeedAdvice();

    CSpeedAdvice(const double& value);

    virtual ~CSpeedAdvice();

    CSpeedAdvice(const CSpeedAdvice& other);
    explicit operator SpeedAdvice_t() const;
    explicit operator double() const;

    void set(double const& value);

    CSpeedAdvice& operator=(const CSpeedAdvice& other);

    bool operator==(const CSpeedAdvice& other) const;
    bool operator!=(const CSpeedAdvice& other) const;

    bool operator<(const CSpeedAdvice& other) const;
    bool operator>(const CSpeedAdvice& other) const;

private:
    SpeedAdvice_t value_;
};

} /* v2x */
} /* element */

#endif /* SPEED_ADVICE_HPP_ */
