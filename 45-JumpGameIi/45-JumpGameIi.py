# Last updated: 08/05/2026, 09:33:24
class Solution:
    def jump(self, nums: List[int]) -> int:
        n= len(nums)
        current_max=0
        furthest=0
        jump=0
        if n<=1:
            return 0

        for i in range(n):

            furthest= max(furthest, i+nums[i])

            if i== current_max:
                jump+=1
                current_max=furthest


            if current_max>=n-1:
                break

        return jump

