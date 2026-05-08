# Last updated: 08/05/2026, 09:32:36
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        

        write=0
        read=0
        count=0
        n= len(nums)
        a=nums[0]
        while read<n:
            if nums[read]==a:
                count+=1
            else:
                a=nums[read]
                
                count=1

            if count<=2:
                nums[write]=a
                write+=1
                read+=1
            else:
                read+=1

        return write