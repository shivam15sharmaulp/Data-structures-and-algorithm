// Last updated: 08/05/2026, 09:30:24
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n=nums.size();
        cout<<n<<endl;
        string inter="";
        vector<string> ans;
        if(n==1){
            return {to_string(nums[0])};
        }
        for(int i=0; i<n;i++){
            if(i==0){
                inter=inter + to_string(nums[i]);
            }
            else if(nums[i]==(nums[i-1]+1)){
                if(i==n-1){
                    inter+="->"+ to_string(nums[i]);
                    ans.push_back(inter);
                }
                continue;
            }
            else{
                if(stoi(inter)!=nums[i-1])
                inter+="->"+ to_string(nums[i-1]);
                ans.push_back(inter);
                inter= to_string(nums[i]);
                if(i==n-1){
                    ans.push_back(inter);
                }
            }

        }
        return ans;
        
    }
};