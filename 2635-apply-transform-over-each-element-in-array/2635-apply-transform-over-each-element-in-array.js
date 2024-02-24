/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    let i =0;
    let newArr = [];
    for(let e of arr){
        e = fn(e,i++);
        newArr.push(e);
    }
    return newArr;
};