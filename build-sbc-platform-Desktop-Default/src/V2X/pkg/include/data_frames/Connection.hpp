#ifndef CONNECTION_HPP_
#define CONNECTION_HPP_

#include "ConnectingLane.hpp"
#include "IntersectionReferenceID.hpp"
#include "data_elements/LaneConnectionID.hpp"
#include "data_elements/SignalGroupID.hpp"
#include "data_elements/RestrictionClassID.hpp"
#include "data_frames/LaneReferenceID.hpp"
#include "Connection.h"

namespace v2x {
namespace frame {

class  CConnection;
typedef std::vector<CConnection> CConnectsToList;

class CConnection {
  public:
    CConnection();
    CConnection(const Connection_t&);
    CConnection(const CConnection&);
    CConnection(const CConnectingLane&, const CIntersectionReferenceID&, const CSignalGroupID&, const CRestrictionClassID&,
                const CLaneConnectionID&);
    CConnection(const CConnectingLane&);

    CConnection& operator=(const CConnection&);
    bool operator==(const CConnection&) const;
    bool operator!=(const CConnection&) const;

    explicit operator Connection_t();

    CConnectingLane connectingLane_field;
    CIntersectionReferenceID remoteIntersection_field;
    CSignalGroupID signalGroup_field;
    CRestrictionClassID userClass_field;
    CLaneConnectionID connectionID_field;

    /* extension for CESCluster */
    CLaneReferenceID get_laneReferanceID() const;
    e_AllowedManeuvers get_maneur() const;

  private:
    Connection_t connection_{};

};

} /* frame */
} /* v2x */

void freeConnectionASN(Connection_t *asn_type);

#endif /* CONNECTION_HPP_ */
