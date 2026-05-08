// Last updated: 08/05/2026, 09:31:52
class Solution {
public:

    void backtrack(string& s, int l, vector<vector<string>>& ans, vector<string>& lis){
        if(l>=s.size()){
            ans.push_back(lis);
            return;
        }

        for(int r=l;r<s.size();r++){
            string vec= s.substr(l,r-l+1);
            string rev=vec;
            reverse(rev.begin(), rev.end());
            if(vec==rev){
                lis.push_back(vec);
                backtrack(s,r+1,ans, lis);
                lis.pop_back();
            }
            
        }
    }

    vector<vector<string>> partition(string s) {

        int l=0;
        vector<vector<string>> ans;
        vector<string> lis;
        backtrack(s,l,ans,lis);
        return ans;
        
    }
};