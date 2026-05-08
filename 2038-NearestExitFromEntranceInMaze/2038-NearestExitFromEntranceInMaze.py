# Last updated: 08/05/2026, 09:27:49
from collections import deque

class Solution:
    def nearestExit(self, maze: List[List[str]], entrance: List[int]) -> int:
        rows, cols = len(maze), len(maze[0])
        q = deque([(entrance[0], entrance[1], 0)])  # Include steps in the queue
        visited = set([(entrance[0], entrance[1])])
        
        directions = [(0, -1), (0, 1), (-1, 0), (1, 0)]  # left, right, up, down
        
        while q:
            x, y, step = q.popleft()
            
            # Check if at exit (not the entrance) and on the boundary
            if (x == rows - 1 or x == 0 or y == cols - 1 or y == 0) and [x, y] != entrance:
                return step
            
            for dx, dy in directions:
                nx, ny = x + dx, y + dy
                
                # Check boundaries and if the next cell is open and not visited
                if 0 <= nx < rows and 0 <= ny < cols and maze[nx][ny] == '.' and (nx, ny) not in visited:
                    visited.add((nx, ny))
                    q.append((nx, ny, step + 1))
        
        return -1
