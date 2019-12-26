import QtQuick 2.6 // Text, Image
import QtQuick.Layouts 1.3 // RowLayout

InfoLabelBackground {

    property alias text: label.text
    property alias iconSource: icon.source

    RowLayout {

        anchors.centerIn: parent

        Image { id: icon }

        Text {
            id: label
            color: "white"
            font.family: "Roboto"
            font.pixelSize: 14
        }
    }
}
