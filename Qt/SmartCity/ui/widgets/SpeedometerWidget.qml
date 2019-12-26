import QtQuick 2.6 // Text
import QtQuick.Layouts 1.3 // RowLayout

import framework 1.0 // InfoLabel

import hmi.cluster 1.0 // VehicleInformationClient

ColumnLayout {

    property alias text: label.text
    property alias speed: speedLabel.text
    property alias speedUnits: speedUnitLabel.text

    InfoLabel {
        id: label
        width: 181
        height: 42
        iconSource: "../assets/sign_2.png"

        Layout.alignment: Qt.AlignHCenter | Qt.AlignTop
    }

    RowLayout {
        spacing: 0
        width: 210
        Layout.alignment: Qt.AlignHCenter | Qt.AlignTop
        Layout.topMargin: 25

        Text {
            id: speedLabel
            objectName: "speed"
            text: VehicleInformationClient.vehicleSpeed
            color: "white"
            font.italic: true
            font.family: "Roboto"
            font.pixelSize: 64
            font.letterSpacing: 0

            Layout.alignment: Qt.AlignBottom | Qt.AlignRight
        }

        Text {
            id: speedUnitLabel
            text: VehicleInformationClient.speedUnits === SpeedUnits.MPH ? "mph" : "kmh"
            color: "white"
            font.italic: true
            font.family: "Roboto"
            font.pointSize: 26
            font.styleName: "italic"
            opacity: 0.36

            Layout.alignment: Qt.AlignLeft | Qt.AlignBottom
        }
    }

    TransmissionWidget {
        height: 31
        width: contentWidth
        Layout.alignment: Qt.AlignHCenter
    }
}
