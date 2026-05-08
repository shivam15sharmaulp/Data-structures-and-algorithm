// Last updated: 08/05/2026, 09:29:45
#include<unordered_map>
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        std::unordered_map<char, int> rn;
        std::unordered_map<char, int> mg;

        for(char x: ransomNote){
            if(rn.find(x)!=rn.end()){
                rn[x]+=1;
            }
            else{
                rn[x]=1;
            }
        }
        for(char x: magazine){
            if(mg.find(x)!=mg.end()){
                mg[x]+=1;
            }
            else{
                mg[x]=1;
            }
        }
        for(auto x: rn){
            if(mg.find(x.first)!=mg.end()){
                if(mg[x.first]>=rn[x.first]){
                    continue;
                }
                else
                return false;
            }
            else
            return false;
            }
    return true;
    }
    
};