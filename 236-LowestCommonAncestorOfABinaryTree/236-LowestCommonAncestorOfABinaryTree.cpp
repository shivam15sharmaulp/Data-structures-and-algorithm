// Last updated: 08/05/2026, 09:30:17
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    TreeNode* dfs(TreeNode* root, TreeNode* &p, TreeNode* &q){
        if(!root){
            return nullptr;
        }
        if(root==p){
            return p;
        }
        else if(root==q){
            return q;
        }
        TreeNode* left= dfs(root->left,p,q );
        TreeNode* right= dfs(root->right,p,q);

        if(left && right){
            return root;
        }
        else if(!left){
            return right;
        }
        else{
            return left;
        }

        return nullptr;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return dfs(root,p,q);
    }
};