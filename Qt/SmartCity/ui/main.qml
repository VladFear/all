import QtQuick 2.6 // Component, Timer
import QtQuick.Controls 2.12

ApplicationWindow {
    id: window
    color: "#161718"
    width: RuntimeOptions.screenWidth
    height: RuntimeOptions.screenHeight

    Display {
        anchors.fill: parent
        scale: {
            if (window.width < 1200) {
                return 0.853333333;
            }
            if (window.height < 600) {
                return 0.853333333;
            }
            return 1.0;
        }
    }

    KeyboardHandler {
        id: input
        Timer {
            interval: 100
            running: true
            onTriggered: input.processKeyboardEvents()
        }
        Connections {
            target: window
            onKeyPressed: input.pressedKeysMap[key] = true
            onKeyReleased: input.pressedKeysMap[key] = false
        }
    }

    Component.onCompleted: ClusterCommunicator.run()
}
