// Last updated: 08/05/2026, 09:30:33
#include<unordered_map>
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int,vector<int>> map;
    int n= nums.size();
    for(int x=0;x<n;x++){
            map[nums[x]].push_back(x); 
    }
    for(auto pair: map){
        if(pair.second.size()>1){
            for(int j=0;j<pair.second.size()-1;j++){
                if((pair.second[j+1]-pair.second[j])<=k){
                    return true;
                }
            }
        }
    }
    return false;
        
    }
};