# Last updated: 08/05/2026, 09:30:51
class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:

        left=0
        right=left
        minLength=float('inf')
        yes=False

        runSum=sum(nums[left:right+1])

        while right<len(nums):
            

            if runSum >=target:
                yes= True
                if right-left<minLength:
                    minLength=right-left
                runSum-=nums[left]
                left+=1
                
            else:

                right+=1
                if right<len(nums):
                    runSum+=nums[right]

        if yes==False:
            return 0

        return minLength+1



        