# Last updated: 08/05/2026, 09:27:43
class Solution:
    def equalPairs(self, grid: List[List[int]]) -> int:
        lens=len(grid[0])
        cols=[]
        count=0
        # Transpose the matrix using zip and list unpacking
        transmatrix = list(map(list, zip(*grid)))
        print(cols)

        for j, y in enumerate(transmatrix):
            if y in grid:
                count+=grid.count(y)
            
        return count