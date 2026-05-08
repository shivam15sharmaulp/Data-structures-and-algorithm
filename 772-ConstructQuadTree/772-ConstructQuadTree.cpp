// Last updated: 08/05/2026, 09:28:53
/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/

class Solution {
public:
    Node* dfs(int n, int row, int col, vector<vector<int>>& grid){
        if(n==1){
            return new Node(grid[row][col], true);
        }
        bool allsame= true;
        for(int i=0; i<n;i++){
            for(int j=0; j<n;j++){
                if(grid[row][col]==grid[row+i][col+j]){
                    continue;
                }
                else{
                    allsame= false;
                    
                }
            }
            if(allsame==false){
                break;
            }
        }

        if(allsame==true){
            return new Node(grid[row][col], true);
        }
        n=n/2;
        Node* topleft= dfs(n, row, col, grid);
        Node* topright= dfs(n, row, col+n, grid);
        Node* bottomleft= dfs(n, row+n, col, grid);
        Node* bottomright= dfs(n, row+n, col+n, grid);

        return new Node(grid[row][col], false, topleft, topright, bottomleft, bottomright);


    }

    Node* construct(vector<vector<int>>& grid) {
    return dfs(grid.size(), 0, 0, grid);      
    }
};