// Last updated: 08/05/2026, 09:32:43
class Solution {
public:
    string minWindow(string s, string t) {
        int left=0;
        int right=0;
        int formed=0;

        unordered_map<char, int> map;
        for(char x:t){
            map[x]++;
        }
        int required=map.size();
        int minlen= INT_MAX, minstart=0;
        while(right<s.size()){
            char c= s[right];
            if(map.count(c)){
                map[c]--;
                if(map[c]==0){
                    formed++;

                }
            }
            while(left<=right && formed==required){
                c= s[left];
                if(right-left+1<minlen){
                    minlen= right-left+1;
                    minstart=left;
                }
                if(map.count(c)){
                    map[c]++;
                    if(map[c]>0){
                        formed--;
                    }
                }
                left++;
            }
            right++;

        }
        return minlen==INT_MAX ? "": s.substr(minstart, minlen); 
        
    }
};