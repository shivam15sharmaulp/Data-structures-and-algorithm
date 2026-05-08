# Last updated: 08/05/2026, 09:33:54
class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        
        keyboard = {
            "2": "abc",
            "3": "def",
            "4": "ghi",
            "5": "jkl",
            "6": "mno",
            "7": "pqrs",
            "8": "tuv",
            "9": "wxyz"
            }
        if len(digits)==0:
            return []
        
        i=0
        n= len(digits)
        combs=[]
        def backtrack(i, comb):
            if i==n:
                combs.append("".join(comb))
                return
            for j in range(len(keyboard[digits[i]])):
                comb.append(keyboard[digits[i]][j])
                backtrack(i+1,comb)
                comb.pop()
        
        comb=[]
        backtrack(0,comb)

        return combs

