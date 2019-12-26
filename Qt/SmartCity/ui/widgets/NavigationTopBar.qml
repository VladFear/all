import QtQuick 2.6 // Image, Text
import QtQuick.Layouts 1.3 // RowLayout

import framework 1.0 // InfoLabelBackgound

import hmi.cluster 1.0 // VehicleInformationClient

RowLayout {

    spacing: 35

    TurnSignalWidget {
        shape: Qt.LeftArrow
        blinking: VehicleInformationClient.leftTurningSignalEnabled
        Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
    }

    InfoLabelBackground {
        width: 260
        height: 54

        RowLayout {
            anchors.fill: parent

            Text {
                text: "Continue on Hunsel Rd for 9.5 miles"
                color: "white"
                font.family: "sans-serif-medium"
                font.pixelSize: 14
                wrapMode: Text.WordWrap
                width: 181

                Layout.fillWidth: true
                Layout.leftMargin: 10
            }

            Rectangle {
                color: "#979797"
                width: 2
                height: 40
                opacity: 0.2
                Layout.alignment: Qt.AlignVCenter
            }

            Image {
                source: "../assets/sign-left.png"
                Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
            }
        }
    }

    TurnSignalWidget {
        shape: Qt.RightArrow
        blinking: VehicleInformationClient.rightTurningSignalEnabled
    }
}
