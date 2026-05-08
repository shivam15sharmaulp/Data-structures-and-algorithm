# Last updated: 08/05/2026, 09:28:51
# Definition for a binary tree node.
from collections import deque
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def searchBST(self, root: Optional[TreeNode], val: int) -> Optional[TreeNode]:
        que= deque([root])

        while que:

            l=len(que)
            for i in range(l):
                node=que.popleft()
                
                if node.val== val:
                    return node
                
                if node.left is not None:
                    que.append(node.left)
                if node.right is not None:
                    que.append(node.right)
                    

        return None