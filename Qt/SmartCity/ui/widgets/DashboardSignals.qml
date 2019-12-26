import QtQuick 2.6 // Repeater, Image
import QtQuick.Layouts 1.3 // RowLayout

import hmi.cluster 1.0 // VehicleInformationClient

RowLayout {

    scale: 0.6

    Repeater {
        model: [
            { source: "../assets/icons/image01.png", property: "lowBeamEnabled"   },
            { source: "../assets/icons/image02.png", property: "fogLightsEnabled" },
            { source: "../assets/icons/image03.png", property: "highBeamEnabled"  },
            { source: "../assets/icons/image04.png", property: "screenWasherEnabled" },
            { source: "../assets/icons/image05.png", property: "wipersEnabled"    },
            { source: "../assets/icons/image06.png", property: "checkEngineEnabled"  },
            { source: "../assets/icons/image07.png", property: "handBrakeEnabled" }
        ]

        delegate: Image {
            source: modelData.source
            opacity: VehicleInformationClient[modelData.property] ? 1 : 0.3
        }
    }
}
