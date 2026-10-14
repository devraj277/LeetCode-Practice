/**
 * @param {number[]} nums
 * @return {number[]}
 */
var runningSum = function(nums) {
    let n = nums.length;
    let rsarr = [n];
    let index = 0, sum=0;
    for(let i=0; i<n; i++)
    {
        for(let j=0 ; j<=index; j++){
            sum += nums[j];
        }
        index++;
        rsarr[i] = sum;
        sum=0;
    }
    return rsarr;
};