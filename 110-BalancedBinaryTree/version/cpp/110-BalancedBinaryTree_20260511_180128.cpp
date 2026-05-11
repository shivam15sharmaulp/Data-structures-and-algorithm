// Last updated: 11/05/2026, 18:01:28
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14
15
16    int dfs(TreeNode* root){
17
18        if(root == nullptr){
19            return 0;
20        }
21
22        int lcount=dfs(root->left);
23        if(lcount==-1){
24            return -1;
25        }
26
27        int rcount=dfs(root->right);
28        if(rcount==-1){
29            return -1;
30        }
31
32        if(abs(lcount-rcount)>1){
33            return -1;
34            //unbalanced
35        }
36
37        return 1+ max(lcount, rcount);}
38    bool isBalanced(TreeNode* root) {
39
40        if(root == nullptr){
41            return true;
42        }
43
44        int ans= dfs(root);
45        if(ans==-1){return false;}
46        else{
47            return true;
48        }
49    }
50};