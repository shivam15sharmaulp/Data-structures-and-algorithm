// Last updated: 08/05/2026, 09:29:13
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int,int> mapp;
        mapp[0]=1;
        int sum=0;
        int ans=0;
        for(int i=0; i<nums.size();i++){
            sum+=nums[i];
            ans+=mapp[sum-k];
            
            mapp[sum]+=1;
        }
        return ans;
        
    }
};