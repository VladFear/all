#ifndef ALGORITHMS_HPP_
#define ALGORITHMS_HPP_

#include <iostream>
#include <memory>
#include <vector>
#include "BaseObjGeometry.h"
#include "data_frames/BSMcoreData.hpp"
#include "Point.hpp"
#include "Line.hpp"

namespace Algorithms {

    const double       pi                           {M_PI};
    const long         degreesInCircle              {360};
    const unsigned int radianCoefficient            {180};
    const double       headingCoefficient           {0.0125};
    const double       accelCoefficient             {0.01};
    const double       veloCoefficient              {0.02};
    const double       metersInOneKm                {1000};
    const double       secondsInOneHour             {3600};
    const double       kmInOneDegreeCoefficient     {111};
    const unsigned int timePeriod4Calc              {2};
    const unsigned int timeTillIntersec             {2};
    const unsigned int earthRadiusKm                {6371};

    bool areCarsCrossing(std::shared_ptr<v2x::frame::CBSMcoreData> myCar, std::shared_ptr<v2x::frame::CBSMcoreData> anotherCar, int& inter_angle);

    // convert from/to radians to/from degrees
    inline double toDegrees       (const double radians);
    inline double toRadians       (const double deegrees);

    inline bool   betw          (double l, double r, double x);
    inline bool   intersect1d   (double a, double b, double c, double d);
    inline double determinant   (const Point& p1, const Point& p2);
    inline double dotproduct    (const Point& p1, const Point& p2);

    // Convert meters to km.
    inline double mToKm(const double m);
    // Convert meters to degrees of Geo-coordinates.
    inline double mToGeo(const double m);

    inline bool   checkTimeTillIntersection (); //TBD
    
    inline double distanceCalculation(std::shared_ptr<v2x::frame::CBSMcoreData> car, unsigned int time);
    double calcCoordinatesInFuture(const std::shared_ptr<v2x::frame::CBSMcoreData> &car, Point &a, Point &b);

    // Function returns direction of emergency (angle beetwen car's heading and point of emergency)
    int calcAngleBtw2Vectors(const std::pair<double, double> &myCenter,
                             const std::pair<double, double> &anotherCenter,
                             const std::pair<double, double> &myFront);

    // Calculate distance between two points in kilometers
    double distanceBetweenTwoPoints(double lat1, double long1, double lat2, double long2);
};

#endif // ALGORITHMS_HPP_

