import QtQuick 2.6 // Item

import widgets 1.0 // ClusterWidget, AutoPilotDistanceWidget, SpeedometerWidget, OilIndicator, FuelIndicator, DashboardSignals
import hmi.utils 1.0 // RuntimeOptions

Item {
    id: root

    ClusterWidget {
        id: cluster
        anchors.top: root.top
        anchors.horizontalCenter: root.horizontalCenter
        anchors.topMargin: RuntimeOptions.screenHeight > 480 ? 55 : -20
    }

    AutoPilotDistanceWidget {
        anchors.top: cluster.top
        anchors.left: cluster.left
        anchors.topMargin: 105
        anchors.leftMargin: 156
        width: 180
        height: 231
        text: "Autopilot Distance"
    }

    SpeedometerWidget {
        anchors.top: cluster.top
        anchors.right: cluster.right
        anchors.topMargin: 105
        anchors.rightMargin: 161
        width: 210
        height: 231
        text: "Speed Limit"
    }

    OilIndicator {
        anchors.top: cluster.top
        anchors.left: cluster.left
        anchors.topMargin: 382
        anchors.leftMargin: 81
        implicitWidth: 248
        implicitHeight: 120
    }

    FuelIndicator {
        anchors.top: cluster.top
        anchors.right: cluster.right
        anchors.topMargin: 382
        anchors.rightMargin: 35
        implicitWidth: 248
        implicitHeight: 120
    }

    DashboardSignals {
        anchors.top: cluster.top
        anchors.topMargin: 477
        anchors.horizontalCenter: cluster.horizontalCenter
    }
}


