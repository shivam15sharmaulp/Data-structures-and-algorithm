# Last updated: 30/05/2026, 18:42:57
1class Solution:
2    def isAnagram(self, s: str, t: str) -> bool:
3        ad={}
4        bd={}
5        if(len(s)!=len(t)):
6            return False
7        
8        
9        for x in s:
10            if x in ad:
11                ad[x]+=1
12            else:
13                ad[x]=1
14
15        for y in t:
16            if y in bd:
17                bd[y]+=1
18            else:
19                bd[y]=1
20
21        for k in ad.keys():
22            if k in bd.keys() and bd[k]==ad[k]:
23                continue
24            else:
25                return False
26
27        return True