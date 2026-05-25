// Last updated: 25/05/2026, 11:03:41
1class Solution {
2public:
3    int lastStoneWeight(vector<int>& stones) {
4        priority_queue<int> pq(stones.begin(), stones.end());
5        int y=0;
6        int x=0;
7        while(pq.size()>=2){
8            y=pq.top();
9            pq.pop();
10            x=pq.top();
11            pq.pop();
12
13            if(x==y){
14                continue;
15            }
16            else if(x!=y){
17                pq.push(y-x);
18            }
19        }
20        if(pq.size()==1){
21        return pq.top();}
22
23        return 0;
24    }
25};