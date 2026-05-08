// Last updated: 08/05/2026, 09:30:36


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1]){
                return true;
            }
            }
            return false;
        }
    
};