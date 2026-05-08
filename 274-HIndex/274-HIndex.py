# Last updated: 08/05/2026, 09:30:09
class Solution:
    def hIndex(self, citations: List[int]) -> int:
        
        citations.sort()
        #print(citations)
        n= len(citations)
        i=1

        while i<=citations[n-i]:
            i+=1
            if i>n:
                break

        return i-1
