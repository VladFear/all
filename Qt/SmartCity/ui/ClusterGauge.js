.pragma library

.import "PrototypeExtensions.js" as PrototypeExtensions

function normalized(item) {
    return Qt.point(this.x / item.width, this.y / item.height);
}
PrototypeExtensions.defineProperty(Object.prototype, normalized)

function distance(point1, point2) {
    return Math.sqrt(Math.pow(point2.x - point1.x, 2) + Math.pow(point2.y - point1.y, 2));
}

function getAngleFromValue(v, min, max) {
    return max * v + min * (1.0 - v);
}

function intersectionPoint(line1, line2) {
    // A simplified formula of lines intersection (see https://en.wikipedia.org/wiki/Line–line_intersection for details)
    return Qt.point(
        ((line1.x * line1.w - line1.y * line1.z) * (line2.x - line2.z) - (line1.x - line1.z) * (line2.x * line2.w - line2.y * line2.z)) /
        ((line1.x - line1.z) * (line2.y - line2.w) - (line1.y-line1.w) * (line2.x - line2.z)),
        ((line1.x * line1.w - line1.y * line1.z) * (line2.y - line2.w) - (line1.y - line1.w) * (line2.x * line2.w - line2.y * line2.z)) /
        ((line1.x - line1.z) * (line2.y - line2.w) - (line1.y - line1.w) * (line2.x - line2.z))
    );
}

function normalizeValue(v, min, max) {
    return 1.0 * (v - min) / (max - min);
}
