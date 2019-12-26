import QtQuick 2.6 // ListView, Image

import hmi.cluster 1.0 // VehicleInformationClient

ListView {

    currentIndex: VehicleInformationClient.transmission-1

    model: [ { text: "1", index: 0 },
             { text: "2", index: 1 },
             { text: "3", index: 2 },
             { text: "4", index: 3 },
             { text: "5", index: 4 }
    ]

    delegate: Text {
        id: transmission
        text: modelData.text
        color: "white"
        opacity: Math.pow(0.6, Math.abs(modelData.index - currentIndex))
        font.family: "Roboto-Medium, Roboto"
        font.pixelSize: 18
        width: internal.delegateItemSize
        height: internal.delegateItemSize
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter
        scale: ListView.isCurrentItem ? 1.0 : 0.88
    }

    highlight: Image {
        source: "../assets/rectangle.png"
        width: internal.delegateItemSize
        height: internal.delegateItemSize
    }

    cacheBuffer: 0
    interactive: false

    highlightRangeMode: ListView.StrictlyEnforceRange
    highlightFollowsCurrentItem: true

    orientation: Qt.Horizontal

    preferredHighlightBegin: contentWidth / 2 - internal.delegateItemSize
    preferredHighlightEnd: contentWidth / 2 + internal.delegateItemSize

    snapMode: ListView.SnapToItem

    QtObject {
        id: internal
        readonly property int delegateItemSize: 30
    }
}
