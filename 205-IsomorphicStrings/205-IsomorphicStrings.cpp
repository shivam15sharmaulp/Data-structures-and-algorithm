// Last updated: 08/05/2026, 09:30:52
#include<unordered_map>
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        int n= s.size();
        std::unordered_map<char, char> change;
        std::unordered_map<char, char> unoreverse;
        for(int i=0; i<n; i++){
            if(change.find(s[i])==change.end() && unoreverse.find(t[i])==unoreverse.end()){
                unoreverse[t[i]]=s[i];                
                change[s[i]]=t[i];
            }
            else{
                if(change[s[i]]==t[i] && unoreverse[t[i]]==s[i]){
                    continue;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};