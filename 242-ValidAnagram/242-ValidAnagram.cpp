// Last updated: 08/05/2026, 09:30:10
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(t.begin(),t.end());
        sort(s.begin(), s.end());
        return t==s;
        
    }
};