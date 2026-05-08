// Last updated: 08/05/2026, 09:29:16
class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        int minDiff = INT_MAX;
        int prevVal = -1;
        
        inorderTraversal(root, prevVal, minDiff);
        
        return minDiff;
    }

private:
    void inorderTraversal(TreeNode* node, int& prevVal, int& minDiff) {
        if (!node) return;
        
        inorderTraversal(node->left, prevVal, minDiff);
        
        if (prevVal != -1) {
            minDiff = std::min(minDiff, node->val - prevVal);
        }
        prevVal = node->val;
        
        inorderTraversal(node->right, prevVal, minDiff);
    }
};