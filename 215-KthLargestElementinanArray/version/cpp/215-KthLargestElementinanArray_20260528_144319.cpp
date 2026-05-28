// Last updated: 28/05/2026, 14:43:19
1class Solution {
2public:
3    int findKthLargest(vector<int>& nums, int k) {
4
5        priority_queue<int, vector<int>, greater<int>> pq;
6
7        for(auto x: nums){
8            pq.push(x);
9            if(pq.size()>k){
10                pq.pop();
11            }
12        }
13
14
15        return pq.top();
16
17        
18    }
19};