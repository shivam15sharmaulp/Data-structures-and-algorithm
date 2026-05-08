// Last updated: 08/05/2026, 09:32:40
class Solution {
public:

    void backtrack(vector<int>& nums, vector<vector<int>>& ans, vector<int>& state, int i){
        if(state.size()>= nums.size()){
            return;
        }

        for( int j=i ; j<nums.size() ; j++){
            state.push_back(nums[j]);
            ans.push_back(state);
            backtrack(nums, ans, state,j+1);
            
            state.pop_back();} 
        }


    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> state;
        unordered_set<int> set;
        ans.push_back({});
        backtrack(nums, ans, state, 0);


        
        return ans;
    }
};