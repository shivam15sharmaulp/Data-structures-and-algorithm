// Last updated: 08/05/2026, 09:32:10
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
class Solution {
public:

    TreeNode* dfs(TreeNode* &root){
        if(!root){
            return nullptr;
        }
        TreeNode* lefttail= dfs(root->left);
        TreeNode* righttail= dfs(root->right);
        if(lefttail){
            lefttail->right= root->right;
            root->right= root->left;
            root->left= nullptr;
        }
        if(righttail){
            return righttail;
        }
        else if(lefttail){
            return lefttail;
        }
        
        return root;


    }

    void flatten(TreeNode* root) {

        dfs(root);      
    }
};