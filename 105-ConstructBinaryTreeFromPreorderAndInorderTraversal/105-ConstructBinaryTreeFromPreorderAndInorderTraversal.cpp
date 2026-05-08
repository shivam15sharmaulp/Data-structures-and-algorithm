// Last updated: 08/05/2026, 09:32:15
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

    TreeNode* recur( vector<int>& preorder, vector<int>& inorder){
        if(preorder.empty() || inorder.empty()){
            return nullptr;
        }
        TreeNode* newroot= new TreeNode(preorder[0]);
        auto itmid= std::find(inorder.begin(), inorder.end(),newroot->val);
        
        int mid= std::distance(inorder.begin(), itmid);
        vector<int> lpreorder(preorder.begin()+1, preorder.begin()+mid+1);
        vector<int> linorder(inorder.begin(), inorder.begin()+mid);
        vector<int> rpreorder(preorder.begin()+mid+1, preorder.end());
        vector<int> rinorder(inorder.begin()+mid+1, inorder.end());
        newroot->left= recur(lpreorder,linorder);
        newroot->right= recur(rpreorder,rinorder);
        return newroot;

    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        if(preorder.empty() || inorder.empty()){
            return nullptr;
        }
        return recur( preorder, inorder);

    }
};