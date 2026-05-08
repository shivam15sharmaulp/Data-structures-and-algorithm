// Last updated: 08/05/2026, 09:30:45
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0;
        int r=0;
        int sum=0;
        int n= nums.size();
        int maxlen=INT_MAX;
        while(r<n){

            sum+=nums[r];
            
            while(sum>=target){
                maxlen=min(maxlen,r-l+1);
                sum-=nums[l];
                l++;
            }
            r++;
            
        }
        if(maxlen==INT_MAX){
            return 0;
        }
        return maxlen;
    }
};