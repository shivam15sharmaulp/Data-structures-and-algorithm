# Last updated: 08/05/2026, 09:29:00
class Solution:
    def asteroidCollision(self, asteroids: List[int]) -> List[int]:
        stack=[]

        for asteroid in asteroids:
            while stack and asteroid<0<stack[-1]:
                if stack[-1]<-asteroid:
                    stack.pop()
                    continue
                elif stack[-1]==-asteroid:
                    stack.pop()
                    break
                elif stack[-1]>-asteroid:
                    break
            else:
                stack.append(asteroid)
        return stack