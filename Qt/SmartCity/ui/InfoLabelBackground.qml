import QtQuick 2.6 // Rectangle, Gradient, GradientStop

Rectangle {
    height: 54
    radius: 4

    gradient: Gradient {
        GradientStop { position: 0.0; color: "transparent" }
        GradientStop { position: 1.0; color: "#222222" }
    }
}
