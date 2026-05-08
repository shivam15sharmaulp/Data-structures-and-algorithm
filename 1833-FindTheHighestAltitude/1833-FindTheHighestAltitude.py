# Last updated: 08/05/2026, 09:27:56
class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        for i, x in enumerate(gain):
            if i!=0:
                gain[i]+=gain[i-1]


        gain.append(0)

        return max(gain)