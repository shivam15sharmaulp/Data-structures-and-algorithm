# Last updated: 08/05/2026, 09:34:14
class Solution:
    def longestPalindrome(self, s: str) -> str:
        
        long=''
        def expand_center(left, right):
            while left >= 0 and right < len(s) and s[left] == s[right]:
                left -= 1
                right += 1
            return s[left + 1:right]

        i=0
        while i<len(s):

            #odd
            str1= expand_center(i,i)
            #even
            str2=expand_center(i,i+1)

            if len(long)<len(str1):
                long= str1
            if len(long)<len(str2):
                long= str2
            i+=1
        return long
