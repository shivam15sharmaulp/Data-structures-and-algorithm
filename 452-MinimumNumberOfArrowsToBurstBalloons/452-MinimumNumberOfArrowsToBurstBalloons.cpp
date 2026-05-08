// Last updated: 08/05/2026, 09:29:24
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {

        sort(points.begin(), points.end(), [](const auto v,const auto w){return v[1]<w[1];});
        int count=1;
        int n=points.size();
        long current= points[0][1];
        for(int i=1; i<n;i++){
            if(points[i][0]<=current){
                continue;
            }
            current = points[i][1];
            count++;
        }
        return count;
    }
};