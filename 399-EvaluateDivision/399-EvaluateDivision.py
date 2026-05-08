# Last updated: 08/05/2026, 09:29:43
class Solution:
    def calcEquation(self, equations: List[List[str]], values: List[float], queries: List[List[str]]) -> List[float]:
        
        
        l= defaultdict(list)
        for i, x in enumerate(equations):
            l[x[0]].append([x[1], values[i]])
            l[x[1]].append([x[0], 1/values[i]])



        def dfs(src, target, visited):

            visited.add(src)

            for x, val in l[src]:

                if x ==  target:
                    return val
                else:
                    if x not in visited:
                        check= dfs(x, target, visited)
                        if check!=-1.0:
                            return check*val
            return -1
        ans= []
        for x,y in queries:

            if x not in l or y not in l:
                ans.append(-1.0)
            elif x==y:
                ans.append(1.0)
            else:
                visited=set()
                ans.append(dfs(x,y, visited))

        return ans
        