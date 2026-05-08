# Last updated: 08/05/2026, 09:28:14
class Solution:
    def minStartValue(self, nums: List[int]) -> int:
        j=1
        lis=[]
        while True:
            summ=j
            count=1
            for i in range(len(nums)):
                summ=summ+nums[i]
                if summ<1:
                    count=0
                    break

            if count==0:
                j+=1
            else:
                return j
        
        
        # i=1
        # while True:
        #     arr=[]
        #     summ=i
        #     for j in range(len(nums)):
        #         summ+=nums[j]
        #         arr.append(summ)
        #     for x in arr:
        #         if x<=0:
        #             return i
        #     i+=1