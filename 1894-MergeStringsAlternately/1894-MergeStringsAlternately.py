# Last updated: 08/05/2026, 09:27:53
class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        ans=[]
        if len(word1)>=len(word2):
            for i, x in enumerate(word2):
                    ans.append(word1[i]+word2[i])
            ans.append(word1[i+1:])
        else:
            for i, x in enumerate(word1):
                ans.append(word1[i]+word2[i])
            ans=ans+list(word2[i+1:])
        realans= "".join(ans)
        return realans

        