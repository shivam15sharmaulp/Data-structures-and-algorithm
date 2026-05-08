// Last updated: 08/05/2026, 09:34:01
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right= height.size()-1;
        int maxarea=0;
        int area=0;
        while(left<right){
            area= (right-left)* min(height[left], height[right]);
            if(height[left]<=height[right]){
                left+=1;
            }           
            else{
                right-=1;
            } 

            maxarea= max(maxarea, area);
        }

        return maxarea;
        
    }
};