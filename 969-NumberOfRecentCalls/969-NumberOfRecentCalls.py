# Last updated: 08/05/2026, 09:28:36
class RecentCounter:

    def __init__(self):
        self.counter=[]

    def ping(self, t: int) -> int:
        self.counter.append(t)
        count=0
        # for i in range(len(self.counter)):
        #     if self.counter[i]>=t-3000:
        #         return len(self.counter)-(i)

        while self.counter[0]<t-3000:
            self.counter.pop(0)

        return len(self.counter)

# Your RecentCounter object will be instantiated and called as such:
# obj = RecentCounter()
# param_1 = obj.ping(t)