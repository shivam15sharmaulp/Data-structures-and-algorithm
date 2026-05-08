# Last updated: 08/05/2026, 09:28:17
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def longestZigZag(self, root: Optional[TreeNode]) -> int:
        maxlength=0

        def solve(node: TreeNode, deep: int, dir:int):
            nonlocal maxlength
            maxlength= max(maxlength, deep)

            if node.left is not None:
                solve(node.left, deep+1, 0) if dir==1 else solve(node.left, 1, 0)
            if node.right is not None:
                solve(node.right, deep+1, 1) if dir==0 else solve(node.right, 1, 1)

          #  return maxlength

        answer= solve(root,0,'')

        return maxlength

        