// Last updated: 08/05/2026, 09:27:32
/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    filteredarr=[];

    for(let i=0;i<arr.length;i++){
        if(fn(arr[i],i)){
            filteredarr.push(arr[i]);
        }
    }
    return filteredarr;
    
};