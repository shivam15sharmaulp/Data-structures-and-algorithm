# Last updated: 08/05/2026, 09:28:58
class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        
        l= len(temperatures)
        answer=[0]*l
        stack=[]

        for i in range(l):
            
            while stack and temperatures[i]> temperatures[stack[-1]]:
                current=stack.pop()
                answer[current]= i - current

            stack.append(i)

        return answer