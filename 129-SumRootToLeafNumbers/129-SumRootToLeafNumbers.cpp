// Last updated: 08/05/2026, 09:31:55
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
    int recur(TreeNode* root, int add){
        if(!root){
            return add; 
        }
        add= root->val+ add*10;
        // std::cout<<add<<std::endl;
        int ltot=recur(root->left, add);
        // std::cout<<ltot<<std::endl;
        int rtot= recur(root->right, add);
        // std::cout<<rtot<<std::endl;
        if(!root->left && !root->right){
            return add;}
        if(!root->left && root->right){
            return rtot;}
        if(root->left && !root->right){
            return ltot;}
        else{
        return ltot+rtot;}
    }
    int sumNumbers(TreeNode* root) {
        return recur(root,0);      
    }
};