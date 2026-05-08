# Last updated: 08/05/2026, 09:29:55
class Solution(object):
    def increasingTriplet(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        first = float('inf')
        second = float('inf')

        for n in nums:
            if n<=first:
                first = n
            elif n<=second:
                second= n
            else:
                return True
        return False