// Last updated: 08/05/2026, 09:30:02
#include<unordered_map>

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        std::unordered_map<char,string> cw;
        std::unordered_map<string,char> wc;
        vector<string> words;
        string word;
        for(char c:s){
            if(c!=' '){
            word+=c;
            }
            else{
                words.push_back(word);
                word="";
            }
        }
        words.push_back(word);
        int nw= words.size();
        int n= pattern.size();
        std::cout<<"nw: "<<nw<<"\n"<<"n: "<<n;
        if(nw!=n){
            return false;
        }
        for(int i=0;i<n;i++){
            if(cw.find(pattern[i])==cw.end() && wc.find(words[i])==wc.end()){
            cw[pattern[i]]=words[i];
            wc[words[i]]=pattern[i];
            }
            else{
                std::cout<<"character:"<<pattern[i]<<" mapped to:"<<cw[pattern[i]]<<"\n";
                std::cout<<"word:"<<words[i]<<" mapped to:"<<wc[words[i]]<<"\n";
                if(cw[pattern[i]]==words[i] && wc[words[i]]==pattern[i]){
                continue;}
                else{
                    return false;
                }
            }
        }
        return true;
    }
};