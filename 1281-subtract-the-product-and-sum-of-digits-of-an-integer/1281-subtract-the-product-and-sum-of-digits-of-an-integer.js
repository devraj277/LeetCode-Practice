/**
 * @param {number} n
 * @return {number}
 */
var subtractProductAndSum = function(num) {
    let product=1, sum=0;
    while(num){
        sum += num%10;
        product *= num%10;
        num = Math.floor(num/10);
    }
    return product - sum;
};