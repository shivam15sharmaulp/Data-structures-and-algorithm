# Last updated: 08/05/2026, 09:30:21
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        prefix=[]
        suffix=[]
        n= len(nums)



        for i in range(0,n):
            if i!=0:
                prefix.append(nums[i-1]*prefix[-1])
            else:
                prefix.append(1)
        # print(prefix)
            
        for i in range(n-1,-1,-1):
            if i == n-1:
                suffix.append(1)
            else:
                suffix.append(nums[i+1]*suffix[-1])
        
        suffix=suffix[::-1]
        # print(suffix)
        result=[]
        for i in range(n):
            result.append(suffix[i]*prefix[i])

        return result