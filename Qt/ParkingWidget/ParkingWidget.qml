import QtQuick 2.9
import QtQuick.Window 2.3
Window {
    Rectangle {
        id: root
        width: 50
        height: 50

        Text {
            id: amount
            text: qsTr("35/50")
            font.pointSize: 7
            anchors.bottom: root.bottom
            anchors.horizontalCenter: root.horizontalCenter
        }

        Image {
            id: image
            source: "sign_2.png"
            anchors.left: root.left
            anchors.right: root.right
            anchors.top: root.top
            anchors.bottom: amount.top
        }
    }
}
