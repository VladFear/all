import QtQuick 2.6 // Image

import framework 1.0 // InfoLabel

Item {

    property alias text: label.text

    InfoLabel {
        id: label
        anchors.top: parent.top
        anchors.horizontalCenter: parent.horizontalCenter
        width: 181
        height: 42
    }

    Image {
        anchors.bottom: parent.bottom
        anchors.horizontalCenter: parent.horizontalCenter
        source: "../assets/cars.png"
        z: label.z - 1
    }
}
