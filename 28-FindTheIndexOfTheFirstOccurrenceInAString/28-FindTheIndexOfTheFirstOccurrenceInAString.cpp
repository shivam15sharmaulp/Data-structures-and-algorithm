// Last updated: 08/05/2026, 09:33:44
class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int left=0;
        int right= needle.size()-1;
        int n= haystack.size();
        while(right<n){
            if(haystack.substr(left,right-left+1)==needle){
                return left;
            }
            else{
                left+=1;
                right+=1;
            }
        }
        return -1;
    }
};