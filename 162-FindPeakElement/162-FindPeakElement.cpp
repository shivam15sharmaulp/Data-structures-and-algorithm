// Last updated: 08/05/2026, 09:31:20
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int mid;
        int left=0;
        int right=nums.size()-1;
        int prefix=0;
        int suffix=0;
        if(right==0){
            return 0;
        }
        while(left<right){
            prefix=0;
            suffix=0;
            mid= left+ ((right-left)/2);
            if((right-left)==1){
                if(nums[left]>nums[right]){
                    return left;
                }
                else{
                    return right;
                }
            }
            if((mid+1)<nums.size()){
                prefix=nums[mid] - nums[mid+1];    
            }
            if((mid-1)>=0){
                suffix=nums[mid] - nums[mid-1];    
            }
            if(suffix>0 && prefix>0){
                return mid;
            }
            else if(suffix>0){
                left=mid;
            }
            else{
                right=mid;
            }
        }

        return mid;
    }
};