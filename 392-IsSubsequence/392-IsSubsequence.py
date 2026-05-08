# Last updated: 08/05/2026, 09:29:41
class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        i=0
        val= False
        for x in s:
            if val== False and i>=len(t):
                return False
            val= False
            while i<len(t):
                if t[i]==x:
                  val= True
                  i+=1
                  break
                i+=1
                
            if val== False:
                return False
        return True