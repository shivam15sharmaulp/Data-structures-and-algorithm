// Last updated: 08/05/2026, 09:33:07
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n= intervals.size();
        int start;
        int end;
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        // Sort the vector based on the second element (index 1)
        for(int i=0; i<n;i++){
            if(i==0){
                start= intervals[i][0];
                end= intervals[i][1];
            }
            else if(end>=intervals[i][0]){
                end= max(intervals[i][1],end);
            }
            else{
                ans.push_back({start,end});
                start= intervals[i][0];
                end= intervals[i][1];
            }
        }
        ans.push_back({start,end});
        return ans;
        
    }
};