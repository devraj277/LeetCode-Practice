class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for(int i=1; i<size(nums); i++){
        if(nums[i-1] == nums[i])
            return true;
    }
    return false;
    }
};