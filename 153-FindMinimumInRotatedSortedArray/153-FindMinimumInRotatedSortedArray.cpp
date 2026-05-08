// Last updated: 08/05/2026, 09:31:23
#include<cmath>
class Solution {
public:
    int findMin(vector<int>& nums) {

        int left=0;
        int right=nums.size()-1;
        int mid;
        int min= INT_MAX;
        if(right==1){
            return std::min(nums[0], nums[1]);
        }

        while(left<=right){
            mid= left+((right-left)/2);
            if(nums[mid]>nums[right] && nums[mid]>=nums[left]){
                if(nums[mid]<min){
                    min= nums[mid];
                }
                left= mid+1;
            }
            else if(nums[mid]<=nums[right] && nums[mid]<nums[left]){
                if(nums[mid]<min){
                    min= nums[mid];
                }
                right= mid-1;
            }
            else{
                if(nums[mid]<min){
                    min= nums[mid];
                }
                right= mid-1;
            }
        }

        return min;
        
    }
};