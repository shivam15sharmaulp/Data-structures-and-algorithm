# Last updated: 08/05/2026, 09:31:07
# Definition for a binary tree node.
import collections
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        ans=[]
        
        q= collections.deque([root])

        while(q):
            rightside=None
            qlen= len(q)
            
            for i in range(qlen):

                node = q.popleft()
                if node:
                    q.append(node.left)

                    q.append(node.right)

                    rightside= node

            if rightside is not None:
                ans.append(rightside.val)

        return ans        

