// Last updated: 08/05/2026, 09:30:49
#include<unordered_map>

class Trie {
public:
    unordered_map<char,Trie*> children;
    bool isendofword;
    Trie() {
        this->isendofword=false;
    }
    
    void insert(string word) {
        Trie* curr;
        curr= this;
        int n= word.size();
        int i=0;
        for(auto x: word){
            i+=1;
            if(curr->children.find(x)==curr->children.end()){
                Trie* t= new Trie();
                curr->children[x]=t;
                curr= t;
                
            }
            else{
                curr=curr->children[x];
            }
        }
        curr->isendofword= true;
        
    }
    
    bool search(string word) {
        Trie* curr= this;
        int n= word.size();
        int i=0;
        for(auto x: word){
            i+=1;
            if(curr->children.find(x)!=curr->children.end()){
                curr= curr->children[x];

            }
            else{
                return false;
            }
        }
        if(curr->isendofword)
        return true;
        return false;
    }
    
    bool startsWith(string prefix) {
        // int i=1;
        //int n= prefix.size();
        Trie* curr=this;
        for(auto x: prefix){
            if(curr->children.find(x)!=curr->children.end())
            curr=curr->children[x];
            else
            return false;

        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */