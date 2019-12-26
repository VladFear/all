import QtQuick 2.6 // Image

Image {
    source: "../assets/base.png"

    Tachometer {
        objectName: "tachometer"
        x: 0
        y: 92
    }

    Speedometer {
        objectName: "speedometer"
        x: 824
        y: 92
    }

    StreamingContextWidget {
        objectName: "streamingContext"
        anchors.top: parent.top
        anchors.topMargin: 70
        anchors.horizontalCenter: parent.horizontalCenter
    }

    NavigationTopBar {
        objectName: "NavigationBar"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: parent.top
        anchors.topMargin: 72
        width: 388
        height: 54
    }

    TripStatusBar {
        objectName: "tripStatusBar"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: parent.top
        anchors.topMargin: 430
    }
}
