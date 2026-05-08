// Last updated: 08/05/2026, 09:31:56
#include<unordered_set>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set;
        for(auto x: nums){
            set.insert(x);
        }
        int longest=0;
        int currentnum;
        int currentstreak=0;
        for(auto v: set){
            if(set.find(v-1)==set.end()){
                currentstreak=1;
                currentnum=v;
            while(set.find(currentnum+1)!=set.end()){
                currentnum+=1;
                currentstreak+=1;

            }
            longest= max(longest, currentstreak);

            }       
        }
    return longest;
    }
};