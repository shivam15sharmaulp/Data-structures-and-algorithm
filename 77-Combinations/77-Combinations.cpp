// Last updated: 08/05/2026, 09:32:41
class Solution {
public:
    void recur(int start, int& n, int& k, vector<int> ans, vector<vector<int>>& fa){
        if(ans.size()==k){
            fa.push_back(ans);
            return;
        }


        for(int i= start; i<=n;i++){
            ans.push_back(i);
            recur(i+1, n,k,ans,fa);
            ans.pop_back();
            
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        if(n==1){
            return {{1}};
        }
        int start= 1;
        vector<vector<int>> fa;
        vector<int> ans={};
        recur(start,n,k,ans,fa);
        return fa;
        
    }
};