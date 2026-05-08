// Last updated: 08/05/2026, 09:34:11
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int right=0;
        int maxlength=0;
        unordered_set<char> letter;
        while(right<s.size()){
            if(letter.find(s[right])==letter.end()){
                maxlength= max(maxlength,right-left+1);
                letter.insert(s[right]);
                right++;
            }
            else{
                letter.erase(s[left]);
                left++;
            }
        }
        return maxlength;
    }
};