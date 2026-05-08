# Last updated: 08/05/2026, 09:33:10
class Solution:
    def lengthOfLastWord(self, s: str) -> int:

        leng=0
        for i in range(len(s)-1,-1,-1):
            if s[i]==" ":
                if leng>0:
                    return leng
                continue
            elif s[i]!=" ":
                leng+=1   

        return leng
        