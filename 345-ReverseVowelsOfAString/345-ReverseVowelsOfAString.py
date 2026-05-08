# Last updated: 08/05/2026, 09:29:51
class Solution:
    def reverseVowels(self, s: str) -> str:
        vowels = ['a','e','i','o','u', 'A', 'E','I','O','U']
        order = [0]*len(s)
        for i, x in enumerate(s):
            if x in vowels:
                order+= x
        j=len(order)
        new=""
        for i, z in enumerate(s):
            if z in vowels:
                new+=order[j-1]
                j-=1
            else:
                new+=z
        return new

            