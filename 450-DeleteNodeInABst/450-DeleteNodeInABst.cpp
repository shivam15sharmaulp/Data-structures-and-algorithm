// Last updated: 08/05/2026, 09:29:30
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
    TreeNode* dfs(TreeNode* &root, int &key){
        if(!root){
            return nullptr;
        }
        if(root->val>key){
            root->left =dfs(root->left, key);
        }
        else if(root->val<key){
            root->right= dfs(root->right,key);
        }
        else{
            if(!root->left){
                return root->right;
            }
            else if(!root->right){
                return root->left;
            }

            TreeNode* curr= root->right;
            while(curr->left){
                curr= curr->left;
            }
            root->val= curr->val;

            root->right= dfs(root->right, root->val);

        return root;

        }
        return root;      
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root){
            return nullptr;
        }

        return dfs(root,key);
        
    }
};