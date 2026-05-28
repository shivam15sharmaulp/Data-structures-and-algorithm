// Last updated: 28/05/2026, 14:39:03
1class Solution {
2public:
3    int findKthLargest(vector<int>& nums, int k) {
4
5        priority_queue<int> pq;
6
7        for(auto x: nums){
8            pq.push(x);
9        }
10
11        while(k>1){
12            pq.pop();
13            k--;
14        }
15
16        return pq.top();
17
18        
19    }
20};