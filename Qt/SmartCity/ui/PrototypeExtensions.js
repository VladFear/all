.pragma library

/*!
    Add a new function into the specified prototype
 */
function defineProperty(type, func) {
    var props = {
        'enumerable': false, 'value' : func
    };
    Object.defineProperty(type, func.name, props);
}

/*! Check if element is a part of the list

    \code
    var arr = [1,3,5]
    console.log(arr.contains(1))
    # returns true
    console.log(arr.contains(2))
    # returns false
    \endcode
 */
function contains(value) {
    return this.indexOf(value) > -1;
}
defineProperty(Array.prototype, contains)
defineProperty(String.prototype, contains)

/*! Return the value if it fits the specified range or it's the closest bounds

    \code
    var value = 10
    value = value.clamp(100, 200)

    console.log("value = ", value)

    # value = 100
    \endcode
 */
function clamp(minimumValue, maximumValue) {
    return Math.max(minimumValue, Math.min(maximumValue, this));
}
defineProperty(Number.prototype, clamp)

/*! Check if number fits the specified range

    \code
    var value = 10
    value.between(100, 200) // false
    value.between(5, 15)    // true
    \endcode
 */
function between(minimumValue, maximumValue) {
    return this >= minimumValue && this <= maximumValue;
}
defineProperty(Number.prototype, between)
