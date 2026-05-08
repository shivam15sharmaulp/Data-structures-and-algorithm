// Last updated: 08/05/2026, 09:28:04
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int c= arr[1]-arr[0];
        for(int i=2; i<arr.size(); i++){
            if(c==(arr[i]-arr[i-1])){
                continue;
            }
            return false;
            
        }
        return true;
        
    }
};