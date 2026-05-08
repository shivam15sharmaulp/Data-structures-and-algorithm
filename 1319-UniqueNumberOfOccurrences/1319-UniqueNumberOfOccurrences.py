# Last updated: 08/05/2026, 09:28:23
class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        
        sa= set(arr)
        co=[]
        for x in sa:
            co.append(arr.count(x))
        if len(set(co))== len(sa):
            return True
        else:
            return False