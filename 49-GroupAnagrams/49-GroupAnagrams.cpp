// Last updated: 08/05/2026, 09:33:19
#include<unordered_map>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map; 
        for( auto str: strs){
            string sortstr= str;
            sort(sortstr.begin(), sortstr.end());
            map[sortstr].push_back(str);
        }
        vector<vector<string>> ans;
        for( auto pair: map){
            ans.push_back(pair.second);
        }
        return ans;
        
    }
};