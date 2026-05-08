// Last updated: 08/05/2026, 09:33:22
class Solution {
public:

void recur(vector<int>& nums, vector<int>& curr, vector<vector<int>>& fa, int sz){
    if(curr.size()==sz){
        fa.push_back(curr);
    }
    for(auto x: nums){
        if(std::find(curr.begin(), curr.end(), x)==curr.end()){
            curr.push_back(x);
            recur(nums,curr, fa, sz);
            curr.pop_back();
        }
        
    }

}
    vector<vector<int>> permute(vector<int>& nums) {
        int sz= nums.size();
        vector<vector<int>> fa;
        vector<int> curr;

        recur(nums, curr, fa, sz);
        return fa;


    }
};