// Last updated: 08/05/2026, 09:29:59
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {

        int maxlis=1;
        int n= nums.size();
        vector<int> dp(n,1);
        for(int i=0; i<n;i++){
            for(int j=0; j<i;j++){
                if(nums[j]<nums[i])
                dp[i]= max(dp[i], dp[j]+1);
            } 
            maxlis= max(dp[i], maxlis);       
        }
        return maxlis;
        
    }
};