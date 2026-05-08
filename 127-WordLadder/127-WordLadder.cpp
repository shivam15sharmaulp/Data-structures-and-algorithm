// Last updated: 08/05/2026, 09:31:58
#include<unordered_map>
#include<unordered_set>
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> wordset;
        
        for(string x: wordList){
            wordset.insert(x);
        }

        unordered_set<string> visited;
        visited.insert(beginWord);
        deque<string> q;
        q.push_back(beginWord);
        int ladder= 1;
        while(!q.empty()){
            int n= q.size();
            while(n--){
                string hand=q.front();
                q.pop_front();
                if(hand==endWord){
                    return ladder;
                }
                wordset.erase(hand);
                
                for(int i=0;i<beginWord.size();i++){
                    for(int j=0; j<26;j++){
                    string check= hand;
                    check[i]='a'+j;
                    if(wordset.find(check)!=wordset.end()){
                        q.push_back(check);
                        // visited.insert(check);
                    }
                    }
                }
            }
            ladder+=1;
        }
        return 0;
    }
};