# Last updated: 08/05/2026, 09:28:08
class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        
        left=0
        right=k-1
        vowels=['a','e','i','o','u']
        maxans=0
        ans=0
        for x in s[left:right+1]:
            if x in vowels:
                ans+=1
        maxans=ans

        while right<len(s)-1:

            if s[right+1] in vowels and s[left] not in vowels:
                ans+=1
            elif s[right+1] not in vowels and s[left] in vowels:
                ans-=1

            if ans>maxans:
                maxans=ans

            if maxans==k:
                return maxans
            
            left+=1
            right+=1

        return maxans