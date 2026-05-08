// Last updated: 08/05/2026, 09:32:52

class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        int n= words.size();
        vector<string> text;
        vector<string> lines;
        int len=0;
        int i=0;
        while(i<n){
            if( len + words[i].size()+ text.size() >maxWidth){
                int diff= maxWidth- len;
                int q= int(diff/max(int(text.size()-1),1));
                int rem= int(diff % max(int(text.size()-1),1));
                string result= text[0];
                int nword= text.size()-1;

                if(nword<1){
                    result += string(q, ' ');
                }
                else{
                for(int j=1; j<text.size();j++){
                    if(rem>0){
                        result+=' ';
                        --rem;
                    }
                    result+=string(q,' ')+text[j];
                    
                }
                }
                lines.push_back(result);
                len=0;
                text.clear();
                
            }
            string word = words[i];
            len+=words[i].size();
            text.push_back(word);
            i++;

        }
         // Handle the last line (left-justified)
        string lastLine = text[0];
        for (int j = 1; j < text.size(); ++j) {
            lastLine += " " + text[j];
        }
        lastLine += string(maxWidth - lastLine.size(), ' '); // Pad with spaces to the right
        lines.push_back(lastLine);

        return  lines;      
    }
};