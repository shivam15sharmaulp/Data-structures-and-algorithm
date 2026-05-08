// Last updated: 08/05/2026, 09:34:08
class Solution {
public:
    string longestPalindrome(string s) {
        int n= s.size();
        int l;
        int r;
        int maxlen=0;
        string ans;
        for(int i=0;i<n;i++){
            l=i;
            r=i;
            //odd
            while(l>=0 && r<n && s[l]==s[r] ){
                if(r-l+1>maxlen){
                    maxlen=r-l+1;
                    ans=s.substr(l,maxlen);
                }
                l-=1;
                r+=1;
            }
            //even
            l=i;
            r=i+1;
            while(l>=0 && r<n && s[l]==s[r] ){
                if(r-l+1>maxlen){
                    maxlen=r-l+1;
                    ans=s.substr(l,maxlen);
                }
                l-=1;
                r+=1;
            }

        }
        return ans;
        
    }
};