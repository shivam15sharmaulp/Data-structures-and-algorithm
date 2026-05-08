# Last updated: 08/05/2026, 09:28:10
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def dfs(self, node: TreeNode, maxvalue):
        if not node:
            return 0
        
        res=1 if node.val>= maxvalue else 0

        maxvalue= max(node.val, maxvalue)
        
        res+= self.dfs(node.left,maxvalue)
        res+=self.dfs(node.right,maxvalue)

        return res
    def goodNodes(self, root: TreeNode) -> int:
        
        maxvalue= float(-inf)
        res = self.dfs(root, maxvalue)

        return res