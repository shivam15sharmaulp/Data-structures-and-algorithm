// Last updated: 08/05/2026, 09:27:31
/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    const transformedarr=[];

    for(let i=0; i<arr.length;i++){
        transformedarr[i]=fn(arr[i],i);
    }

    return transformedarr;
    
};