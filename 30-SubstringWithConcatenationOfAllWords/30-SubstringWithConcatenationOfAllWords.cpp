// Last updated: 08/05/2026, 09:33:35
class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int required= words.size();
        
        unordered_map<string,int> map;
        for(auto x:words){
            map[x]++;
        }
        int n= words[0].size();
        int left=0, right;
        vector<int> ans;
        for(int i=0; i<n;i++){
            left=i;
            int confirmed=0;
            unordered_map<string,int> seen;
            for(int right=i; right+n<=s.size();right+=n){
            string v= s.substr(right,n);
            if(map[v]){
                confirmed+=1;
                seen[v]++;

                while(seen[v]>map[v]){
                    string remove= s.substr(left, n);
                    seen[remove]--;
                    confirmed--;
                    left+=n;
                }
                if(confirmed==required){
                    ans.push_back(left);
                } 
            }
            else{   
                seen.clear();
                confirmed=0;
                left= right+n;

            }}
            

        }

        return ans;

    }
};