import framework 1.0 // ClusterGaugeInterface

import hmi.cluster 1.0 // VehicleInformationClient

ClusterGaugeInterface {
    gauge: "../assets/gas.png"
    minimumValue: 0
    maximumValue: 100
    minimumValueAngle: 0
    maximumValueAngle: 30

    opacityMask {
        fragmentShader: "
            #ifdef GL_ES
                precision highp float;
            #endif
            varying highp vec2 qt_TexCoord0;
            uniform sampler2D src;
            uniform lowp float valueAngle;
            uniform lowp vec4 transparent;

            void main() {
                lowp float pointAngle = atan(qt_TexCoord0.x/(qt_TexCoord0.y + 2.0));
                if (pointAngle < valueAngle)
                    gl_FragColor = texture2D(src, qt_TexCoord0);
                else
                    gl_FragColor = transparent;
            }"
    }

    value: 70 //VehicleInformationClient.gasLevel
}
