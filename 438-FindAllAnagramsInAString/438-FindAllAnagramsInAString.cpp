// Last updated: 08/05/2026, 09:29:29
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        if(p.size()>s.size()){
            return {};
        }
        
        int p_len= p.size();
        vector<int> pana(26,0);
        vector<int> sana(26,0);

        for(int i=0; i<p_len;i++){
            pana[p[i]-'a']+=1;
            sana[s[i]-'a']+=1;
        }
        vector<int> ans;
        if(pana==sana){
            ans.push_back(0);
        }


        for(int i=p_len;i<s.size();i++){
            sana[s[i-p_len]-'a']--;
            sana[s[i]-'a']++;

            if(sana==pana){
                ans.push_back(i-p_len+1);
            }
        }
        return ans;


    }
};