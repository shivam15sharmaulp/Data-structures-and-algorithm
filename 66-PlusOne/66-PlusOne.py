# Last updated: 08/05/2026, 09:32:55
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        n= len(digits)
        for i in range(n-1,-1,-1):
            if i==n-1:
                digits[i]+=1
            
            if digits[i]==10:
                if i==0:
                    digits[i]=1
                    digits.append(0)
                else:
                    digits[i]=0
                    digits[i-1]+=1
                
            else:
                break

        return digits

        