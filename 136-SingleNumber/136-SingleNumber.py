# Last updated: 08/05/2026, 09:31:46
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        result=0

        for num in nums:
            result ^= num

        return result