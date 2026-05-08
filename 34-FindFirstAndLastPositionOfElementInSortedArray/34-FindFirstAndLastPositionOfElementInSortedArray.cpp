// Last updated: 08/05/2026, 09:33:31
class Solution {
public:
    int binary(vector<int>& nums, int& target, bool leftbiased){
        int left=0;
        int right= nums.size()-1;
        int mid;
        int ans=-1;
        while(left<=right){
            mid= left+((right-left)/2);
            if(nums[mid]>target){
                right= mid-1;
            }
            else if(nums[mid]< target){
                left=mid+1; 
            }
            else{
                if(leftbiased){
                    ans= mid;
                    right=mid-1;
                }
                else{
                    left= mid+1;
                    ans= mid;
                }
            }
        }
        return ans;
        }
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(binary(nums, target, true));
        ans.push_back(binary(nums,target, false));

        return ans;

    }
};