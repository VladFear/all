import framework 1.0 // ClusterGaugeInterface

import hmi.cluster 1.0 // VehicleInformationClient

ClusterGaugeInterface {
    gauge: "../assets/orangered_gouge.png"
    minimumValue: 0
    maximumValue: 3000
    //minimumValueAngle: -19.614220166635207 // -0.3423327221188552 rad
    //maximumValueAngle: 90 + 12.00229492863566 // Math.PI/2 + 0.20947956430011008 = 1.7802758910950067
    minimumValueAngle: 0
    maximumValueAngle: 121.61651509527087 // 2.122608613213862 rads

    originPoint: Qt.point(307, 83)
    minValuePoint: Qt.point(361, 339)
    maxValuePoint: Qt.point(23, 13)

    opacityMask {
        fragmentShader: "
            #ifdef GL_ES
                precision highp float;
            #endif
            varying highp vec2 qt_TexCoord0;
            uniform sampler2D src;
            uniform lowp float valueAngle;
            uniform highp vec2 origin;
            uniform lowp vec4 transparent;
            uniform float firstSectorAngle;

            const float PI_2 = 1.57079632679489661923;

            void paint_if(bool condition) {
                if (condition)
                    gl_FragColor = texture2D(src, qt_TexCoord0);
                else
                    gl_FragColor = transparent;
            }

            void main() {
                highp float pointAngle;
                if (origin.x < qt_TexCoord0.x) {
                    pointAngle = atan((qt_TexCoord0.x - origin.x)/(qt_TexCoord0.y - origin.y));
                    paint_if(firstSectorAngle - valueAngle < pointAngle);
                } else if(origin.y < qt_TexCoord0.y) {
                    pointAngle = firstSectorAngle + atan((origin.x - qt_TexCoord0.x)/(qt_TexCoord0.y - origin.y));
                    paint_if(valueAngle > pointAngle);
                } else {
                    pointAngle = firstSectorAngle + PI_2 + atan((origin.y - qt_TexCoord0.y)/(origin.x - qt_TexCoord0.x));
                    paint_if(valueAngle > pointAngle);
                }
            }"
    }

    value: VehicleInformationClient.revCounterValue
}
