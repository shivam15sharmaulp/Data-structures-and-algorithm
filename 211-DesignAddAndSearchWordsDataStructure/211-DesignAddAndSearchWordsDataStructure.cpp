// Last updated: 08/05/2026, 09:30:40
class Trie{
    public:
        Trie* children[26]={NULL};
        bool isendofword;

    Trie(){
        isendofword= false;
    }
};

class WordDictionary {
public:

    Trie* dict = new Trie();

    WordDictionary() {
        
    }
    
    void addWord(string word) {
        Trie* curr= dict;
        for(auto x: word){
            if(!curr->children[x-'a']){
            Trie* nn= new Trie();
            curr->children[x-'a']= nn;
            curr=nn;}
            else{
            curr=curr->children[x-'a'];
            }
        }
        curr->isendofword= true;
        
    }
    
    bool search(string word) {
        
        return search(word,0,dict);
    }

    private:

    bool search(const string& word, int index,Trie* node){
        if(index==word.size()){
           return node->isendofword;
        }
        
        if(word[index]=='.'){
            for(int i=0; i<26; i++){
                if(node->children[i] && search(word, index+1,node->children[i]))
                return true;
            }
            return false;
        }
        else{
            int charindex= word[index]-'a';
            if(!node->children[charindex]){
                return false;
            }
            return search(word,index+1,node->children[charindex]);
        }
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
