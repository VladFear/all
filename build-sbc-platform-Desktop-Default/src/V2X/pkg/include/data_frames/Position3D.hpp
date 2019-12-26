#ifndef POSITION_3D_HPP_
#define POSITION_3D_HPP_

#include "data_elements/Latitude.hpp"
#include "data_elements/Longitude.hpp"
#include "data_elements/Elevation.hpp"
#include "Position3D.h"

/*
 * The DF_Position3D data frame provides a precise location in the WGS-84
 * coordinate system, from which short offsets may be used to create
 * additional data using a flat earth projection centered on this
 * location. Position3D is typically used in the description of maps and
 * intersections, as well as signs and traveler data.
 * ASN.1 Representation:
 * Position3D ::= SEQUENCE {
 * lat Latitude, -- in 1/10th micro degrees
 * long Longitude, -- in 1/10th micro degrees
 * elevation Elevation OPTIONAL, -- in 10 cm units
 * regional SEQUENCE (SIZE(1..4)) OF
            RegionalExtension {{REGION.Reg-Position3D}} OPTIONAL, ...}
*/

namespace v2x {
namespace frame {

using namespace element;

class CPosition3D {
  public:
    explicit CPosition3D();
    CPosition3D(const CPosition3D&);
    CPosition3D(const Position3D_t&);
    CPosition3D(const double&, const double&, const double&);
    CPosition3D(const double&, const double&);
    ~CPosition3D();
    explicit operator Position3D_t();

    CPosition3D& operator = (const CPosition3D&);
    bool operator == (const CPosition3D&) const;
    bool operator != (const CPosition3D&) const;

    CLatitude lat_field;
    CLongitude long_field;
    CElevation elevation_field; /*OPTIONAL*/

  private:
    Position3D_t _pos = Position3D_t();
};

} /* frame */
} /* v2x */

void freePosition3DASN(Position3D_t *);

#endif /* POSITION_3D_HPP_*/
