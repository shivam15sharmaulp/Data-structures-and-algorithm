// Last updated: 08/05/2026, 09:27:35
/**
 * @param {number} millis
 * @return {Promise}
 */


async function sleep(millis) {
    return new Promise( resolve => setTimeout(resolve,millis));
    
}

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */