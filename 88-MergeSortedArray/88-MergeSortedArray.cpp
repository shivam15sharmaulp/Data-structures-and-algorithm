// Last updated: 08/05/2026, 09:32:38
class Solution {
public:

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k= m+n;
        int j1=0;
        int j2=0;

        for(int i=0;i<k; i++){
            if(j1<m && j2<n){
            if(nums1[m-1-j1]>nums2[n-1-j2]){
                nums1[k-1-i]=nums1[m-1-j1];
                j1+=1;}
            
            else if(nums1[m-1-j1]<=nums2[n-1-j2]){
                nums1[k-1-i]=nums2[n-1-j2];
                j2+=1;
            }
            }
            else if(j1<m){
                nums1[k-1-i]= nums1[m-1-j1];
                j1+=1;
            }
            else if(j2<n){
                nums1[k-1-i]= nums2[n-1-j2];
                j2+=1;
            }   
    }}

};