/**
 * @param {string} s
 * @return {number}
 */
var myAtoi = function(s) {
    return Math.max(Math.min(parseInt(s)||0,Math.pow(2,31)-1),Math.pow(-2,31));
};
