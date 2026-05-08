# Last updated: 08/05/2026, 09:31:14
class Solution:
    def findRepeatedDnaSequences(self, s: str) -> List[str]:
        
        repeated=set()
        occ=set()
        left=0
        right=9
        v= s[0:10]
        occ.add(v)

        while right<len(s):
            x=s[left+1:right+2]
            if x in occ:
                repeated.add(x)
            else:
                occ.add(x)

            left+=1
            right+=1

        return repeated
