#ifndef PEDESTRIAN_BICYCLE_DETECT_HPP_
#define PEDESTRIAN_BICYCLE_DETECT_HPP_

#include "PedestrianBicycleDetect.h"

/*
 * Data element is used to provide an indication of whether Pedestrians and/or
 * Bicyclists have been detected in the crossing lane.
 *
 * PedestrianBicycleDetect ::= BOOLEAN
 * -- true if ANY Pedestrians or Bicyclists are
 * -- detected crossing the target lane or lanes
 */

namespace v2x {
namespace element {

class CPedestrianBicycleDetect {
  public:
    explicit CPedestrianBicycleDetect();
    CPedestrianBicycleDetect(const PedestrianBicycleDetect_t &value);

    virtual ~CPedestrianBicycleDetect();

    CPedestrianBicycleDetect(const CPedestrianBicycleDetect &value);
    explicit operator PedestrianBicycleDetect_t() const;

    void set(PedestrianBicycleDetect_t const& value);

    CPedestrianBicycleDetect& operator=(const CPedestrianBicycleDetect& other);

    bool operator==(const CPedestrianBicycleDetect& other) const;
    bool operator!=(const CPedestrianBicycleDetect& other) const;

  private:
    PedestrianBicycleDetect_t _pedestrian_bicycle_detect;
};

} /* v2x */
} /* element */

#endif /* PEDESTRIAN_BICYCLE_DETECT_HPP__ */
