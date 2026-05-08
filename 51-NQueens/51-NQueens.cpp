// Last updated: 08/05/2026, 09:33:16
class Solution {
public:
    void backtrack(int n, vector<int>& cols, int r, unordered_set<int>& diag,
                   unordered_set<int>& oppdiag, vector<vector<string>>& ans) {
        if (r >= n) {
            vector<string> board(n, string(n, '.'));
            for (int i = 0; i < n; i++) {
                board[i][cols[i]] = 'Q'; // Place the queen
            }
            ans.push_back(board); // Add the board to the result
            return;
        }

        for (int j = 0; j < n; j++) {
                        if(std::find(cols.begin(), cols.end(), j)==cols.end() && diag.find(r - j) == diag.end() && 
                oppdiag.find(r + j) == oppdiag.end()){
                cols.push_back(j);
                diag.insert(r - j);
                oppdiag.insert(r + j);
                backtrack(n, cols, r + 1, diag, oppdiag, ans);
                cols.pop_back();
                diag.erase(r - j);
                oppdiag.erase(r + j);
                        }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        unordered_set<int> diag;
        unordered_set<int> oppdiag;
        vector<int> cols;
        vector<vector<string>> ans;
        backtrack(n, cols, 0, diag, oppdiag, ans);
        return ans;
    }
};