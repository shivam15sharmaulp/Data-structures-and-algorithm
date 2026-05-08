// Last updated: 08/05/2026, 09:33:57
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman = {{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};
        int number=0;
        int ans=0;
        int n= s.size();
        for(int i=0; i<n; i++){
            number= roman[s[i]];
            if(i<n-1 && roman[s[i+1]]>number){
                ans= ans + roman[s[i+1]]-number;
                i++;
                }
            else{
                ans=ans+number;
        }
            
        }

        return ans;
        
    }
};