# Last updated: 08/05/2026, 09:30:35
class Solution:
    def combinationSum3(self, k: int, n: int) -> List[List[int]]:

        num=[1,2,3,4,5,6,7,8,9]
        res=[]
        def backtrack(i, total,currarr,start):
            if i==k:
                if total==n:
                    res.append(currarr[:])
                return
            
            else:
                for x in num[start:]:
                    
                    currarr.append(x)
                    backtrack(i+1,total+x,currarr,num.index(x)+1)
                    currarr.pop()

            
        backtrack(0,0,[],0)
        if res:
            return res
        else:
            return []