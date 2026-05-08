# Last updated: 08/05/2026, 09:33:01
class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        rows = [ [0]*n for i in range(m)]
        rows[m-1] = [1]*n
        for i in range(m):
         rows[i][n-1] = 1

        col=[1]*m

        for i in range(m-2,-1,-1):
            for j in range(n-2,-1,-1):
                rows[i][j]=rows[i+1][j]+rows[i][j+1]

        return rows[0][0]