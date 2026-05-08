// Last updated: 08/05/2026, 09:31:35
#include <unordered_map>

class LRUCache {
private:
    int capacity;

    struct node {
        int key;
        int value;

        node* next;
        node* prev;

        node(int key, int v):key(key),value(v),next(nullptr),prev(nullptr) {}
        
    };

    std::unordered_map<int,node*> cache;
    node* head;
    node* tail;

    void movetofront(node* node){
        if (node==head){
            return;
        }
        
        if(node->prev) node->prev->next=node->next;
        if(node->next){
        
        node->next->prev= node->prev;
        }
        else {
            tail=node->prev;
            
        }
        
        head->prev= node;
        node->next=head;
        node->prev=nullptr;
        head=node;
    }
public:
    LRUCache(int capacity): capacity(capacity) {
        head=nullptr;
        tail= nullptr;      
    }
    
    int get(int key) {
        if(cache.find(key)==cache.end()){
            return -1;
        }
        node* node= cache[key];
        movetofront(node);
        return node->value;
        
    }
    
    void put(int key, int value) {

        if (cache.find(key)!=cache.end()){
            cache[key]->value=value;
            movetofront(cache[key]);
        }
        else{
            node* newnode=new node(key,value);
            cache[key]=newnode;
            if (!head){
                head=tail= newnode;
            }
            else{
                newnode->next=head;
                newnode->prev=nullptr;
                head->prev=newnode;
                head= newnode;}

                if(cache.size()>capacity){
                    if(tail){
                    cache.erase(tail->key);
                    node* tmp= tail;
                    tail= tail->prev;
                    if (tail){tail->next=nullptr;}
                    else{
                        head=nullptr;
                    }
                    delete tmp;
                    }
                }
            


        }

    
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */