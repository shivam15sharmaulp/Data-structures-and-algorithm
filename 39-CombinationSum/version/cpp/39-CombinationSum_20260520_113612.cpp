// Last updated: 20/05/2026, 11:36:12
1class Solution {
2public:
3    
4    void backtrack(vector<vector<int>>& ans, vector<int>& candidates, int remainder, int i, vector<int>& tmp){
5        if(i>=candidates.size() || remainder<0){
6            return;
7        }
8        if(remainder==0){
9            ans.push_back(tmp);
10            return;
11        }
12        // Include current
13        tmp.push_back(candidates[i]);
14        backtrack(ans, candidates, remainder-candidates[i], i, tmp);
15        tmp.pop_back();
16        //pop current
17        //skip current and try next index
18        backtrack(ans, candidates,remainder,i+1, tmp);
19        
20
21        return;
22
23    }
24    
25    
26    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
27        
28        vector<vector<int>> ans={};
29        vector<int> tmp={};
30
31        backtrack(ans, candidates, target, 0, tmp);
32
33        return ans;
34
35    }
36};