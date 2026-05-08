# Last updated: 08/05/2026, 09:29:20
import heapq
class Solution:
    def findMaximizedCapital(self, k: int, w: int, profits: List[int], capital: List[int]) -> int:
        maxcap=[]
        heapq.heapify(maxcap)
        n= len(capital)
        hp= [(capital[i], profits[i]) for i in range(n)]
        heapq.heapify(hp)
        for k in range(k):
            while hp and hp[0][0]<=w:
                
                c,p= heapq.heappop(hp)
                heapq.heappush(maxcap,-p)

            if not maxcap:
                return w
            w= w + (-1*heapq.heappop(maxcap))
        
        return w