import QtQuick 2.6 // Image, Timer

Image {
    id: root

    property int shape: Qt.RightArrow
    property alias blinking: blinkTimer.running
    property alias blinkInterval: blinkTimer.interval

    width: 29
    height: 33
    mirror: shape === Qt.LeftArrow
    source: "../assets/turn-right.png"

    opacity: internal.turnedOffLightOpacityValue

    Behavior on opacity { NumberAnimation { duration: 100; easing.type: Easing.InOutQuad } }

    Timer {
        id: blinkTimer
        interval: 800
        repeat: true

        onTriggered: {
            root.opacity = root.opacity < 0.8 ? internal.turnedOnLightOpacityValue : internal.turnedOffLightOpacityValue;
        }
    }

    QtObject {
        id: internal
        readonly property real turnedOnLightOpacityValue: 1.0
        readonly property real turnedOffLightOpacityValue: 0.2
    }

    onBlinkingChanged: {
        opacity = blinking ? internal.turnedOnLightOpacityValue : internal.turnedOffLightOpacityValue;
        if (!blinking) {
            blinkTimer.stop();
        }
    }
}

