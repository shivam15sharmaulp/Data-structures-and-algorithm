# Last updated: 08/05/2026, 09:31:31
class Solution:
    def reverseWords(self, s: str) -> str:
        print(s.split())
        return " ".join(reversed(s.split()))