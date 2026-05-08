# Last updated: 08/05/2026, 09:30:05
class Solution:
    def gameOfLife(self, board: List[List[int]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        
        dir=[(1,0),(0,1),(1,1),(-1,-1),(-1,0),(0,-1),(-1,1),(1,-1)]
        
        col=len(board[0])
        row=len(board)
        oneses=[]
        zeros=[]
        for i in range(row):
            for j in range(col):
                ones=0

                for dx,dy in dir:
                    x= dx + i
                    y= dy + j
                    if (0<=y<=col-1) and (0<=x<=row-1):
                        # print(x,y)
                        if board[x][y]==1:
                            ones+=1
                if (ones<2) and (board[i][j]==1):
                    # board[i][j]=0
                    zeros.append((i,j))
                elif (3>ones>2) and (board[i][j]==1):
                    continue
                elif (3<ones) and (board[i][j]==1):
                    # board[i][j]=0
                    zeros.append((i,j))
                elif (board[i][j]==0) and (ones==3):
                    # board[i][j]=1
                    oneses.append((i,j))
                else:
                    continue

        print(oneses)
        for i,j in oneses:
            board[i][j]=1
        for i,j in zeros:
            board[i][j]=0
