// Last updated: 08/05/2026, 09:33:52
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int n= nums.size();
        int val;
        int jkval;
        int j;
        int k;
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans{};
        for(int i=0; i<n-1; i++){
            j= i+1;
            k= n-1;
            val= -1*nums[i];
            if(i>0){
                if(nums[i]==nums[i-1]){
                    continue;
                }
            }
            while(j<k){
                jkval= nums[j]+nums[k];
                if(jkval==val){
                    ans.push_back({nums[i], nums[j], nums[k]});
                    // Move j and k and skip duplicates
                    while (j < k && nums[j] == nums[j + 1]) j++;
                    while (j < k && nums[k] == nums[k - 1]) k--;
                    k-=1;
                    j+=1;

                }
                else if(val<jkval){
                    k-=1;
                    continue;
                }
                else{
                j+=1;
                }
            }

            
        }
        return ans;
    }
};