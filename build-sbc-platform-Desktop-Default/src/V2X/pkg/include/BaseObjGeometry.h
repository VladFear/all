#ifndef BASEOBJGEOMETRY_H
#define BASEOBJGEOMETRY_H

#include "boost/geometry.hpp"
#include "boost/geometry/geometries/polygon.hpp"
#include "boost/geometry/strategies/transform/matrix_transformers.hpp"
#include <cmath>
class BaseObjGeometry
{
public:

    typedef boost::geometry::model::point<double, 2, boost::geometry::cs::cartesian> point_t;
    typedef boost::geometry::model::polygon<point_t> polygon_t;

    BaseObjGeometry(std::pair<double, double> p0, std::pair<double, double> p2);
    BaseObjGeometry(std::pair<double, double> centr, double width, double length);
    BaseObjGeometry(double x1, double y1, double x2, double y2, double w);

    virtual ~BaseObjGeometry();
    bool isValid(std::string & str);
    bool isValid();

    bool isIntersection(const BaseObjGeometry & obj, std::vector<BaseObjGeometry> &box);
    bool isIntersection(const BaseObjGeometry & obj);
    double distance(const BaseObjGeometry & obj);
    double distance(const double x, const double y);

    void rotateAndMove(double angle_degree, std::pair< double ,double > point = {0,0}, double dx = 0, double dy = 0 );
    void rotateClockwise(double angle_degree);

    void move(double dx, double dy);

    void appendFront(double distance);
    // 1  2
    // 0  3
    std::pair< double ,double > getCenterPoint(int num_point1, int num_point2) const;

    std::pair< double ,double > getCenter() const;


    template <class TPolygon , class TPoint = double> TPolygon getPolygon() const
    {
       return TPolygon {
       {static_cast<TPoint> (m_box.outer()[0].get<0>()), static_cast<TPoint> (m_box.outer()[0].get<1>())},
       {static_cast<TPoint> (m_box.outer()[1].get<0>()), static_cast<TPoint> (m_box.outer()[1].get<1>())},
       {static_cast<TPoint> (m_box.outer()[2].get<0>()), static_cast<TPoint> (m_box.outer()[2].get<1>())},
       {static_cast<TPoint> (m_box.outer()[3].get<0>()), static_cast<TPoint> (m_box.outer()[3].get<1>())},
       };
     }

    template <class TLine , class TPoint = double> TLine getCentreLine() const
    {
       auto p1 = getCenterPoint(0,3);
       auto p2 = getCenterPoint(1,2);

       return TLine {
       {static_cast<TPoint> (p1.first), static_cast<TPoint> (p1.second)},
       {static_cast<TPoint> (p2.first), static_cast<TPoint> (p2.second)},
       };
     }

    std::pair<double, double> getDelta(double distance) const;
private:
   BaseObjGeometry(const polygon_t & polygon);
   polygon_t m_box;
   double m_height = 0.;
   double m_height_obj = 1.;
};

#endif // BASEOBJGEOMETRY_H
