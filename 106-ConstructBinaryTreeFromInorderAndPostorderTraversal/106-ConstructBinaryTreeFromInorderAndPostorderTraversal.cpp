// Last updated: 08/05/2026, 09:32:14
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
    TreeNode* recur(vector<int>& inorder,vector<int>& postorder){
        if(inorder.empty() || postorder.empty()){
            return nullptr;
        }

        TreeNode* newroot= new TreeNode(postorder.back());
        auto indroot= std::find(inorder.begin(), inorder.end(), newroot->val);
        int mid= std::distance(inorder.begin(), indroot);

        vector<int> linorder(inorder.begin(),inorder.begin()+mid);
        vector<int> rinorder(inorder.begin()+mid+1,inorder.end());
        vector<int> lpostorder(postorder.begin(),postorder.begin()+mid);
        vector<int> rpostorder(postorder.begin()+mid,postorder.end()-1);

        newroot->left=recur(linorder,lpostorder);
        newroot->right=recur(rinorder,rpostorder);

        return newroot;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return recur(inorder, postorder);      
    }
};