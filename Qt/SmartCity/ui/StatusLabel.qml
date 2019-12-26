import QtQuick 2.6 // Text

Text {
    property var distance: ""
    property string units: ""
    property string caption: ""

    text: "<font color=\"#00acfe\">%1</font> %2 %3".arg(caption).arg(distance).arg(units).trim()
    color: "white"
    opacity: 0.8
    font.family: "Roboto-Medium"
    font.pixelSize: 14
}
