// Last updated: 08/05/2026, 09:33:27
#include<unordered_set>
class Solution {
public:
    
    void recur(vector<int>& candidates, int& target, vector<int>& curr, int& sum,vector<vector<int>>& fa, int start ){
        if(sum==target){
            //cout<<target<<"\n";
            //std::sort(curr.begin(), curr.end());
            // for(auto y: fa){
            //     if(y==curr){
            //         return;
            //     }
            // }
            fa.push_back(curr);
            
            return;
        }
        else if(sum>target){
            return;
        }
        
        
        
        for(int i=start;i<candidates.size();i++){
            sum+=candidates[i];
            curr.push_back(candidates[i]);
            recur(candidates, target, curr, sum, fa, i);
            sum-=candidates[i];
            curr.pop_back();

        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        vector<vector<int>> fa;
        int sum=0;
        std::sort(candidates.begin(), candidates.end());
        int start=0;
        recur(candidates, target, curr, sum ,fa, start);
        return fa;
        
    }
};