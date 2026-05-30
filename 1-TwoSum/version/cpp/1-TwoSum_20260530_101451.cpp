// Last updated: 30/05/2026, 10:14:51
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int,int> mp;
5        for(int i=0; i<nums.size();i++){
6            if(mp.find(target-nums[i])==mp.end()){
7                mp[nums[i]]=i;
8            }
9            else{
10                return {mp[target-nums[i]], i};
11            }
12        }
13    return {};
14    }
15};