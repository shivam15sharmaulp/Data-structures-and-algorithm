// Last updated: 08/05/2026, 09:28:54
class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> mapp;

        for(int i=0; i<s.size();i++){
            mapp[s[i]]= i;
        }
        
        int end=0;
        int start=0;
        vector<int> ans;

        for(int i=0; i<s.size();i++){
            if(mapp[s[i]]>end){
                // if(i==s.size()-1){
                //     ans.push_back(i-end);
                // }
                end= mapp[s[i]];
            }
            if(end==i){
                ans.push_back(i-start+1);
                start=i+1;
            }
        }
        return ans;


        
    }
};