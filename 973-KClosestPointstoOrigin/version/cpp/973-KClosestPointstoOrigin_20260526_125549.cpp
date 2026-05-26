// Last updated: 26/05/2026, 12:55:49
1class Solution {
2public:
3    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
4        
5        priority_queue<pair<int,pair<int, int>>> pq;
6        int dist=0;
7        int x=0;
8        int y=0;
9        for(auto point : points){
10            x= point[0];
11            y= point[1];
12            dist= x*x + y*y;
13            pq.push({dist,{x,y}});
14            if(pq.size()>k){
15                pq.pop();
16            }
17        }
18        vector<vector<int>> ans={};
19        while(k && !pq.empty()){
20            ans.push_back({pq.top().second.first,pq.top().second.second});
21            pq.pop(); 
22            k--;
23        }
24
25        return ans;
26    }
27};