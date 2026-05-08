# Last updated: 08/05/2026, 09:27:40
class Solution:
    def totalCost(self, costs: List[int], k: int, candidates: int) -> int:

        N= len(costs)
        left=0
        right=N-1
        arr=[]
        total=0

        for i in range(candidates):
            heapq.heappush(arr,(costs[left],left,-1))
            left+=1

        for i in range(candidates):
            if left<=right:
                heapq.heappush(arr, (costs[right],right,1))
                right-=1

        
        for i in range(k):

            q=heapq.heappop(arr)
            total+=q[0]
            
            if left<=right:
                if q[2]==-1:
                    heapq.heappush(arr, (costs[left],left,-1))
                    left+=1

                else:
                    heapq.heappush(arr, (costs[right], right,1))
                    right-=1

        return total