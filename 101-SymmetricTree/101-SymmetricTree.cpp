// Last updated: 08/05/2026, 09:32:20
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

    bool dfs(TreeNode* left, TreeNode* right){

                if(!left && !right){
                    return true;
                }
                else if(!left || !right){
                    return false;
                }
                else if (left->val == right->val){
                    return dfs(left->right, right->left) && dfs(left->left, right->right) ;
                }
                else{
                    return false;
                }
        } 

    bool isSymmetric(TreeNode* root) {

        
        TreeNode* left = root->left;
        TreeNode* right = root->right;
        return dfs(left, right);

    }
};