# Last updated: 08/05/2026, 09:29:18

class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        N= len(isConnected)
        visited=[False]* N
        ans=0
        def dfs(citi):

            for i in range(N):
                if  isConnected[citi][i] ==1 and visited[i]==False:
                    visited[i]= True

                    neighbor = i
                    dfs(i)

        for i in range(N):
            if visited[i] ==  False:
                dfs(i)
                ans+=1

        return ans
