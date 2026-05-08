# Last updated: 08/05/2026, 09:30:14
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # use hashmap
        stringS ={}
        stringT = {}

        if len(s)!=len(t):
            return False
        
        for i in range(len(s)):
            stringS[s[i]] =  1 + stringS.get(s[i],0)
            stringT[t[i]] =  1 + stringT.get(t[i],0)

        return stringS==stringT
