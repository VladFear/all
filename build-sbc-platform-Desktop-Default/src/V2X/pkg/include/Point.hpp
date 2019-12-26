#ifndef POINT_HPP_
#define POINT_HPP_

#include <cstdlib>

const double EPS = 1E-9;

class Point 
{
public:
    Point();
    Point(double _x , double _y):x(_x),y(_y){}
    Point(const Point &) = default;
    double getX() const;
    double getY() const;

    void setY(const double y);
    void setX(const double x);

    bool operator< (const Point & p) const
    {
        return (((x < p.x-EPS) || (std::abs(x-p.x) < EPS)) && (y < p.y - EPS));
    }

private:
    double x;
    double y;
};

#endif // POINT_HPP_
