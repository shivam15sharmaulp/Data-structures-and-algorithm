// Last updated: 30/05/2026, 09:37:26
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_map<int,int> mp={};
5
6        for(auto x: nums){
7            if(mp.find(x)==mp.end()){
8                mp[x]=1;
9            }
10            else{
11                mp[x]+=1;
12                return true;
13            }
14        }
15        return false;
16    }
17};