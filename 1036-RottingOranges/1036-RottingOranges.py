# Last updated: 08/05/2026, 09:28:33
from collections import deque
class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        rows = len(grid)
        cols = len(grid[0])
        fresh = 0
        rotten = deque()
        
        # Initialize the queue with all currently rotten oranges
        for r in range(rows):
            for c in range(cols):
                if grid[r][c] == 1:
                    fresh += 1
                elif grid[r][c] == 2:
                    rotten.append((r, c))

        # Directions array to check the four adjacent cells
        directions = [(0, 1), (1, 0), (-1, 0), (0, -1)]
        minutes = 0

        # BFS from all initial rotten oranges
        while rotten and fresh > 0:
            minutes += 1
            for _ in range(len(rotten)):
                x, y = rotten.popleft()
                for dx, dy in directions:
                    nx, ny = x + dx, y + dy

                    if 0 <= nx < rows and 0 <= ny < cols and grid[nx][ny] == 1:
                        grid[nx][ny] = 2
                        fresh -= 1
                        rotten.append((nx, ny))

        if fresh == 0:
            return minutes
        else:
            return -1