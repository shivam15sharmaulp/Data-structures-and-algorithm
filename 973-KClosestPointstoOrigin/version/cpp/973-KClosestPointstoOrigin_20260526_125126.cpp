// Last updated: 26/05/2026, 12:51:26
1class Solution {
2public:
3    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
4        
5        priority_queue<pair<int,pair<int, int>>> pq;
6        int dist=0;
7        int x=0;
8        int y=0;
9        for(auto points : points){
10            x= points[0];
11            y= points[1];
12            dist= x*x + y*y;
13            pq.push({-1*dist,{x,y}});
14        }
15        vector<vector<int>> ans={};
16        while(k && !pq.empty()){
17            ans.push_back({pq.top().second.first,pq.top().second.second});
18            pq.pop(); 
19            k--;
20        }
21
22        return ans;
23    }
24};