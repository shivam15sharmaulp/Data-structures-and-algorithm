// Last updated: 08/05/2026, 09:34:16
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int right=0;
        int n= nums.size();
        for(int left=0; left<n; left++){
            for(int right= left+1; right<n;right++){
                int diff=nums[right]+nums[left];
                if(diff==target){
                    return {left,right};
                }
            }
        }
        return {};
        
    }
};