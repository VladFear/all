import QtQuick.Layouts 1.3 // RowLayout

import framework 1.0 // SatusLabel

import hmi.cluster 1.0 // VehicleInformationClient

RowLayout {
    spacing: 35
    opacity: 0.8
    StatusLabel { caption: "Total:"; distance: "003482"; units: VehicleInformationClient.speedUnits === SpeedUnits.MPH ? "m" : "km" }
    StatusLabel { caption: "A" }
    StatusLabel { caption: "Trip:"; distance: "003482"; units: VehicleInformationClient.speedUnits === SpeedUnits.MPH ? "m" : "km" }
}
