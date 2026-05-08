# Last updated: 08/05/2026, 09:33:15
class Solution:
    def totalNQueens(self, n: int) -> int:

        cols= set()
        posDiag= set()
        negDiag= set()

        res=0

        def backtrack(r):

            for c in range(n):
                if r==n:
                    nonlocal res
                    res+=1
                    return
                if c not in cols and (r-c) not in negDiag and (r+c) not in posDiag:
                    cols.add(c)
                    posDiag.add(r+c)
                    negDiag.add(r-c)
                    backtrack(r+1)

                    cols.remove(c)
                    posDiag.remove(r+c)
                    negDiag.remove(r-c)

        backtrack(0)
        return res