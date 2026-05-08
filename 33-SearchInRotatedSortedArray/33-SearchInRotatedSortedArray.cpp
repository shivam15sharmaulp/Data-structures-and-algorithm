// Last updated: 08/05/2026, 09:33:33
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int right= nums.size()-1;
        int mid;
        if(right==0){
            if(nums[0]==target){
                return 0;
            }
            else{
                return -1;
            }
        }
        while(left<right){
            mid= left+ ((right-left)/2);
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[left]==target){
                return left;
            }
            else if(nums[right]==target){
                return right;
            }
            if((right-left)==1){
                break;
            }
            if(nums[mid]>nums[left] && nums[mid]>nums[right]){
                if(target<nums[left]){
                    left=mid;
                }
                else if(target>nums[mid]){
                    left= mid;
                }
                else{
                    right= mid;
                }}
            if(nums[mid]<nums[right] && nums[mid]<nums[left]){
                if(target>nums[right]){
                    right= mid;
                }
                else if(target<nums[mid]){
                    right= mid;
                }
                else{
                    left= mid;
                }
            }
            else if(nums[mid]>nums[left] && nums[mid]<nums[right]){
                if(nums[mid]>target){
                    right= mid;
                }
                else{
                    left= mid;
                }
            }
            
        }
        return -1;
    }
};