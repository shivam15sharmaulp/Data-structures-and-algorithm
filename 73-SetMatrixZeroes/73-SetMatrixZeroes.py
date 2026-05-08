# Last updated: 08/05/2026, 09:32:45
class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        ylen=len(matrix)
        row=set()
        col=set()
        xlen= len(matrix[0])
        for i in range(ylen):
            for j in range(xlen):
                val= matrix[i][j]
                if ((i in row or j in col) and val!=0):
                    continue
                elif (i in row) and (j in col) and (val==0):
                    continue
                elif val==0:
                    row.add(i)
                    col.add(j)
                    
        for i in range(ylen):
            for j in range(xlen):
                if i in row or j in col:
                    matrix[i][j]=0