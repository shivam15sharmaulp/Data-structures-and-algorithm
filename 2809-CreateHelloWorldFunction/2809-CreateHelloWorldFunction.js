// Last updated: 08/05/2026, 09:27:26
/**
 * @return {Function}
 */
var createHelloWorld = function() {
    
    return function(...args) {
        return "Hello World"
        
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */