// Last updated: 08/05/2026, 09:33:30
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.size()==1 && nums[0]<target){
            return 1;
        }
        else if(nums.size()==1 && (nums[0]>target)){
            return 0;
        }

        int left= 0;
        if(nums[left]>=target){
            return 0;
        }
        int right= nums.size()-1;
        int mid;
        while(left<right){
            mid= left+((right-left)/2);
            if(mid==left && nums[right]<target){
                return mid+2;
            }
            
            if(mid==left && nums[mid]<target){
                return mid+1;
            }
            
            if(nums[mid]>target){
                right= mid;
            }
            else if(nums[mid]<target){
                left= mid;
            }
            else{
                return mid;
            }

        }
        return mid+1;
    }
};