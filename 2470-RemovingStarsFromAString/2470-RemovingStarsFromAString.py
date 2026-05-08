# Last updated: 08/05/2026, 09:27:41
class Solution:
    def removeStars(self, s: str) -> str:
        
        answer=""
        l=0
        point=len(s)-1
        while point>=0:
            if s[point]=="*":
                l+=1
            elif l>0:
                l-=1
            else:
                answer+=s[point]
            point-=1
            
        #reversed(answer)
        return answer[::-1]