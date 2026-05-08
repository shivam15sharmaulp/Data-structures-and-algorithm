// Last updated: 08/05/2026, 09:32:44
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int top= 0;
        int bottom= matrix.size();
        int left= 0;
        int right= matrix[0].size();
        int midh;
        int midv;
        if(right==1 && bottom==1){
            if(matrix[0][0]==target){
                return true;
            }
            else{
                return false;
            }
        }
        if(bottom>1){
        while( top<=bottom && top<matrix.size() && bottom>=0){
        midv= top+((bottom-top)/2);

        if(matrix[midv][0]<target){
            top = midv+1;
        }
        else if(matrix[midv][0]>target){
            bottom= midv-1;
        }
        else{
            return true;
        }
        }}


        if(right>1){
        if(bottom== matrix.size()){
            bottom-=1;
        }
        else if(bottom<0){
            bottom=0;
        }
        while(left<=right && left<matrix[0].size() && right>=0){
            midh= left+((right-left)/2);
            if(matrix[bottom][midh]<target){
                left= midh+1;
            }
            else if(matrix[bottom][midh]>target){
                right=midh-1;
            }
            else{
                return true;
            }
        }}


        return false;
    }
};