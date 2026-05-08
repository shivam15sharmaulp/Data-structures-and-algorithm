# Last updated: 08/05/2026, 09:33:28
class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        rows=[set() for i in range(9)]
        cols=[set() for i in range(9)]
        grids=[set() for i in range(9)]

        for i in range(9):
            for j in range(9):
                nums=board[i][j]
                grid_index= (i//3)*3 +   j//3

                if nums!=".":
                    if nums in rows[i] or nums in cols[j] or nums in grids[grid_index]:
                        return False

                    rows[i].add(nums)
                    cols[j].add(nums)
                    grids[grid_index].add(nums)

        return True