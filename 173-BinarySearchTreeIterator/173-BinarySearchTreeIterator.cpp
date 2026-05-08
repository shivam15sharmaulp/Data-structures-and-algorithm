// Last updated: 08/05/2026, 09:31:15
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 #include <stack>

class BSTIterator {
public:
    std::stack<TreeNode*> stack;

    BSTIterator(TreeNode* root) {     
    TreeNode* curr= root;
    while(curr){
        stack.push(curr);
        curr=curr->left;
    }  
    }
    
    int next() {
        TreeNode* x=stack.top();
        stack.pop();
        TreeNode* curr= x->right;
        while(curr){
            stack.push(curr);
            curr= curr->left;
        }
        return x->val;
    }
    
    bool hasNext() {
        return !stack.empty();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */