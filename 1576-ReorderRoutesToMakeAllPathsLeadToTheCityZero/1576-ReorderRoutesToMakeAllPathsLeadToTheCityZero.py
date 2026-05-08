# Last updated: 08/05/2026, 09:28:13
class Solution:
    def minReorder(self, n: int, connections: List[List[int]]) -> int:
        
        reversedc=set()
        conn= defaultdict(list)
        for x, y in connections:
            conn[x].append(y)
            conn[y].append(x)
            reversedc.add((y,x))
            
        ans=0
        def dfs(city, parent):
            nonlocal ans
            
            for z in conn[city]:
                if z== parent:
                    continue
                if (z, city) in reversedc:
                    ans+=1
                dfs(z, city)
            
            
        dfs(0,-1)
        return ans