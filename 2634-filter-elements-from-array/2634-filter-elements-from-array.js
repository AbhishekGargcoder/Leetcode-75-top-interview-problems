/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    let newArr = [],i =0;
    for(let e of arr){
        if(fn(e,i++)) newArr.push(e);
    }
    return newArr;
};