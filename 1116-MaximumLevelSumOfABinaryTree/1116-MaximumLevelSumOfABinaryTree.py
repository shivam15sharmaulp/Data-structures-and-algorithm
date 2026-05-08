# Last updated: 08/05/2026, 09:28:30
# Definition for a binary tree node.
import collections
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxLevelSum(self, root: Optional[TreeNode]) -> int:
        ans=collections.deque([root])
        maxvalue = float(-inf)
        
        levelans=0
        level=0
        while ans:
            level= level + 1
            ln= len(ans)
            value=0
            for i in range(ln):
                node = ans.popleft()
                value = node.val+ value
                if node.left is not None:
                    ans.append(node.left)
                if node.right is not None:
                    ans.append(node.right)

            if maxvalue < value:
                maxvalue=value
                levelans=level
            print('sum:', value)
            print(levelans)
        return levelans