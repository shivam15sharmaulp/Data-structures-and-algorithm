# Last updated: 08/05/2026, 09:28:01
class Solution:
    def closeStrings(self, word1: str, word2: str) -> bool:

        from collections import Counter

        frq1=Counter(word1)
        frq2= Counter(word2)

        if set(word1)!=set(word2):
            return False

        return sorted(frq1.values())==sorted(frq2.values())