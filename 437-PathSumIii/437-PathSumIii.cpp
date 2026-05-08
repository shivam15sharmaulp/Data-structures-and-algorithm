// Last updated: 08/05/2026, 09:29:32
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
    void dfs(TreeNode* root, int& targetSum, long long sum, int& ans){
                
                if(!root){
                    return;
                }
                
                sum+=root->val;
                if(sum==targetSum){
                    ans+=1;}
                
                
                dfs(root->left, targetSum, sum, ans);
                
                dfs(root->right, targetSum, sum, ans);

    }

    void findpath(TreeNode* root, int& targetSum, int& ans){
        if(!root){
            return;
        }
        dfs(root,targetSum,0,ans);

        findpath(root->left, targetSum, ans);
        findpath(root->right, targetSum, ans);
    }
    
    int pathSum(TreeNode* root, int targetSum) {
        int ans=0;
        findpath(root,targetSum,ans);
        return ans ;
    }
};