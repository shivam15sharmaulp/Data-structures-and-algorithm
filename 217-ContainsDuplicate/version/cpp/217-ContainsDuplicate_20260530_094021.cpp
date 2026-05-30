// Last updated: 30/05/2026, 09:40:21
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_set<int> st={};
5
6        for(auto x: nums){
7            if(st.find(x)==st.end()){
8                st.insert(x);
9            }
10            else{
11                return true;
12            }
13        }
14        return false;
15    }
16};