import QtQuick 2.6 // QtObject

Item {
    id: root

    readonly property real accelerationForceDelta: 2.0
    readonly property real breakForceDelta: 2.0

    readonly property var pressedKeysMap: {
        var map = {};
        map[Qt.Key_W] = false;
        map[Qt.Key_S] = false;
        map[Qt.Key_Q] = false;
        map[Qt.Key_A] = false;
        map[Qt.Key_Left] = false;
        map[Qt.Key_Right] = false;
        return map;
    }

    function processKeyboardEvents()
    {
        ClusterCommunicator.beginControlMessagesBatch();

        if (pressedKeysMap[Qt.Key_W]) {
            // increase acceleration force
            ClusterCommunicator.batchAccelerationForceChange(accelerationForceDelta);
        }
        if (pressedKeysMap[Qt.Key_S]) {
            // decrease acceleration force
            ClusterCommunicator.batchAccelerationForceChange(-accelerationForceDelta);
        }
        if (pressedKeysMap[Qt.Key_Q]) {
            // increase break force
            ClusterCommunicator.batchBreakForceChange(breakForceDelta)
        }
        if (pressedKeysMap[Qt.Key_A]) {
            // decrease break force
            ClusterCommunicator.batchBreakForceChange(-breakForceDelta)
        }

        if (pressedKeysMap[Qt.Key_Right] && pressedKeysMap[Qt.Key_Left]) {
            Wheel.holdFixed();
        } else if (pressedKeysMap[Qt.Key_Right] && !pressedKeysMap[Qt.Key_Left]) {
            Wheel.turnRight();
        } else if (!pressedKeysMap[Qt.Key_Right] && pressedKeysMap[Qt.Key_Left]) {
            Wheel.turnLeft();
        } else {
            Wheel.setFree();
        }

        ClusterCommunicator.commitControlMessagesBatch();
    }
}
