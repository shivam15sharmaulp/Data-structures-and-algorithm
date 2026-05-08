// Last updated: 08/05/2026, 09:30:20
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

    int count=0;
    void recur(TreeNode* root, int& k, int& ans){
            if(root==nullptr){
                return;
            }
            recur(root->left,k, ans);
            k--;
            if(count==k){
                ans= root->val;
            }
            recur(root->right, k, ans);
        }

    int kthSmallest(TreeNode* root, int k) {
        int count=0;
        int ans=0;


        recur(root,k ,ans);

        return ans;

    }
};