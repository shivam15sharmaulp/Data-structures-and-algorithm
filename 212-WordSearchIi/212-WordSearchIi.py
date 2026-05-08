# Last updated: 08/05/2026, 09:30:39
class Trie:
    def __init__(self):
        self.children={}
        self.isendofword=False

    def addword(self,word):
        curr= self
        for x in word:
            if x not in curr.children:
                curr.children[x]=Trie()
                curr= curr.children[x]
            else:
                curr= curr.children[x]
        curr.isendofword=True


class Solution:
    def findWords(self, board: List[List[str]], words: List[str]) -> List[str]:
        dictionary= Trie()
         
        for word in words:
            dictionary.addword(word)
            
        visited= set()
        ny= len(board)
        nx= len(board[0])
        res= set()
        
        direction= list([(-1,0),(0,1),(0,-1),(1,0)])
        def dfs(word, y,x, node:Trie):
            if x<0 or y<0 or y>=ny or x>=nx or (y,x) in visited or board[y][x] not in node.children:
                return 
            
            visited.add((y,x))
            node= node.children[board[y][x]]
            word+=board[y][x]
            if node.isendofword:
                res.add(word)
    
            for (dx,dy) in direction:
                dfs(word,y+dy,x+dx, node)

            visited.remove((y,x))
        
        for i in range(ny):
            for j in range(nx):
                
                dfs('',i,j,dictionary)

        
        return list(res)