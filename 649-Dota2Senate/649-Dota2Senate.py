# Last updated: 08/05/2026, 09:29:04
class Solution:
    def predictPartyVictory(self, senate: str) -> str:
        ls = list(senate)
        d = deque()
        r= deque()

        for i in range(len(senate)):
            if senate[i]=="R":
                r.append(i)
            else:
                d.append(i)

        while r and d:
            di= d.popleft()
            ri = r.popleft()

            if ri<di:
                r.append(ri+len(senate))
            else:
                d.append(di+ len(senate))

        return "Radiant" if r else "Dire" 