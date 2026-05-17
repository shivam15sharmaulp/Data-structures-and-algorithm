// Last updated: 17/05/2026, 09:06:17
1class Solution {
2public:
3
4    void backtrack(vector<int>& nums, vector<int>& tmp, int i ,vector<vector<int>>& ans){
5            if(i>=nums.size()){
6                ans.push_back(tmp);
7                return;
8            }
9        tmp.push_back(nums[i]);
10
11        backtrack(nums, tmp, i+1, ans);
12        tmp.pop_back();
13
14        backtrack(nums, tmp, i+1, ans);
15
16        
17    }
18
19    vector<vector<int>> subsets(vector<int>& nums) {
20
21        vector<vector<int>> ans={};
22
23        vector<int> tmp={};
24
25        backtrack(nums, tmp, 0,ans);
26
27
28        return ans;
29
30
31        
32    }
33};