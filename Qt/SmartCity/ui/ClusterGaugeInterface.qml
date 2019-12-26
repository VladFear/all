import QtQuick 2.6 // Item, Image, ShaderEffect, NumberAnimation

import "ClusterGauge.js" as ClusterGaugeLib

Item {
    property alias gauge: texture.source
    property alias opacityMask: scaleShader

    property double minimumValue: 0.0
    property double maximumValue: 1.0
    property double minimumValueAngle
    property double maximumValueAngle

    property point maxValuePoint
    property point minValuePoint
    property point originPoint

    property double value

    ShaderEffect {
        id: scaleShader

        readonly property point origin: originPoint.normalized(scaleShader)

        property var src: Image { id: texture; visible: false }

        property double valueAngle: ClusterGaugeLib.getAngleFromValue(
                                        ClusterGaugeLib.normalizeValue(value, minimumValue, maximumValue),
                                        minimumValueRadianAngle,
                                        maximumValueRadianAngle)

        readonly property double firstSectorAngle: Math.atan(ClusterGaugeLib.distance(Qt.point(originPoint.x, height), ClusterGaugeLib.intersectionPoint(
                                                                 Qt.vector4d(minValuePoint.x, minValuePoint.y, originPoint.x, originPoint.y),
                                                                 Qt.vector4d(originPoint.x, height, width, height))) /
                                                             ClusterGaugeLib.distance(Qt.point(originPoint.x, originPoint.y), Qt.point(originPoint.x, height)))
        readonly property color transparent: "transparent"

        readonly property double minimumValueRadianAngle: minimumValueAngle * Math.PI / 180
        readonly property double maximumValueRadianAngle: maximumValueAngle * Math.PI / 180

        width: texture.implicitWidth
        height: texture.implicitHeight
    }

    Behavior on value { NumberAnimation { easing.type: Easing.InOutQuad } }
}
