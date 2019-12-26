import QtQuick 2.6 // QtObject, Component, Row, Loader
import QtQuick.Layouts 1.3 // RowLayout

import framework 1.0 // InfoLabel

RowLayout {
    id: root

    readonly property QtObject label: QtObject {
        property string text
        property Component leftIconComponent
        property Component rightIconComponent
    }

    property Component content

    Row {
        Loader {
            sourceComponent: label.leftIconComponent
        }
        InfoLabel {
            text: label.text
            height: 42
            Layout.fillWidth: true
        }
        Loader {
            sourceComponent: label.rightIconComponent
        }
    }

    Loader {
        sourceComponent: root.content
        Layout.fillWidth: true
        Layout.fillHeight: true
    }
}
