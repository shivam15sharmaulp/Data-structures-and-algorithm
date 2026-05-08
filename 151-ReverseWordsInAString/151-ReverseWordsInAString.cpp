// Last updated: 08/05/2026, 09:31:27

class Solution {
public:
    string reverseWords(string s) {
        size_t start = s.find_first_not_of(' ');

        size_t end = s.find_last_not_of(' ');
        string ans;
        if(start==std::string::npos){
            return "";
        }
        s= s.substr(start, end-start+1);
        std::istringstream iss(s);
        string word;
        vector<string> val;
        // Reverse the words
        while (iss>>word) {
        val.push_back(word);
        
        }
        std::reverse(val.begin(), val.end());
        for(size_t i=0;i<val.size();i++){
            if(i>0){
                ans=ans+ ' ';
            }
            ans+=val[i];
        }

        return ans;
    }
};

// class Solution {
// public:
//     string reverseWords(string s) {
//         int start=0;
//         int end= s.size();

//         while(start<end && s[start]==' ') start++;
//         while(start>end && s[end]==' ') end--;
//         string ans;
//         while(end!=0){
//             start= s.rfind(' ',end-1);
//             if(start==std::string::npos){
//                 ans=ans+ (s.substr(0,end));
//                 break;
//             }
//             ans=ans+(s.substr(start+1, end-start-1))+" ";
//             end= start;

//         }
//         return ans;
//     }
// };