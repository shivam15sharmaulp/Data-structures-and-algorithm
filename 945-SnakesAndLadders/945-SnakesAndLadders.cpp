// Last updated: 08/05/2026, 09:28:40
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();
        // Total number of squares
        int total = n * n;
        vector<int> squares(total+1,-1);
        int x = total;
        // for (int i = 0; i < n; i++) {
        //     if (i % 2 == 0 && (n-i)%2==0 ) {
        //         for (int j = 0; j < n; j++) {
        //             squares[x] = board[i][j];
        //             x--;
        //         }
        //     } else {
        //         for (int j = n - 1; j >= 0; j--) {
        //             squares[x] = board[i][j];
        //             x--;
        //         }
        //     }
        // }
        // // Convert the board to a 1D array
        // vector<int> squares(total + 1, -1);
        int idx = 1; // Square numbers start at 1

        for (int r = n - 1; r >= 0; r--) {
            // Determine the traversal direction based on the row
            if ((n - 1 - r) % 2 == 0) { // Left to right
                for (int c = 0; c < n; c++) {
                    squares[idx] = board[r][c];
                    idx++;
                }
            } else { // Right to left
                for (int c = n - 1; c >= 0; c--) {
                    squares[idx] = board[r][c];
                    idx++;
                }
            }
        }

        // BFS initialization
        vector<bool> visited(total + 1, false);
        queue<pair<int, int>> q; // Pair of (current_square, moves)
        q.push({1, 0});
        visited[1] = true;

        while (!q.empty()) {
            auto [current, moves] = q.front();
            q.pop();

            // Try all possible moves from 1 to 6
            for (int step = 1; step <= 6; step++) {
                int next = current + step;
                
                // Optimization: No need to check further steps once next exceeds total
                if (next > total) break;

                // If there's a snake or ladder, move to its destination
                if (squares[next] != -1) {
                    next = squares[next];
                }

                if (next == total) {
                    return moves + 1;
                }

                if (!visited[next]) {
                    visited[next] = true;
                    q.push({next, moves + 1});
                }
            }
        }

        // If the end is not reachable
        return -1;
    }
};