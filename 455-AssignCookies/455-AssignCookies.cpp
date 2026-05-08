// Last updated: 08/05/2026, 09:29:23
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int gs= g.size();
        std::sort(g.begin(),g.end());
        int i=0;
        int ss= s.size();
        std::sort(s.begin(), s.end());
        int j=0;
        int greed;

        while(i<gs){
            greed=g[i];
            while(j<ss){
                if(greed<=s[j]){
                    j+=1;
                    i+=1;
                    break;
                }
                else{
                    j+=1;
                }
            }
            if(j>=ss){
                return i;
            }
        }

        return i;
    }
};