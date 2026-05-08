# Last updated: 08/05/2026, 09:33:55
class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        
        word=""
        first= strs[0]
        bol=False
        for i in first:
            word+=i
            for x in  strs:
                if word in x[0:len(word)]:
                    continue
                else:
                    bol= True
                    break
            if bol==True:
                return word[0:-1]    
        return word