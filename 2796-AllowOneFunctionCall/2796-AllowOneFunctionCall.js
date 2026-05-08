// Last updated: 08/05/2026, 09:27:27
/**
 * @param {Function} fn
 * @return {Function}
 */
var once = function(fn) {
    var b= true;
    
    return function(...args){
        if(b){
            b= false;
            return fn(...args);
        }
        else{
            return;
        }
        
    }
};

/**
 * let fn = (a,b,c) => (a + b + c)
 * let onceFn = once(fn)
 *
 * onceFn(1,2,3); // 6
 * onceFn(2,3,6); // returns undefined without calling fn
 */
