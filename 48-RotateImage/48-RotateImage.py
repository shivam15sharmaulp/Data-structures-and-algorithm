# Last updated: 08/05/2026, 09:33:21
class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        
        n= len(matrix)

        for i in range(n):
            for j in range(i+1,n):
                a=matrix[i][j]
                b=matrix[j][i]

                matrix[i][j]=b
                matrix[j][i]=a

        for x in range(n):
            matrix[x].reverse()

        
