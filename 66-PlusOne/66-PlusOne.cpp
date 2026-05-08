// Last updated: 08/05/2026, 09:32:59
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=0;
        int n= digits.size();
        for(int i=n-1;i>=0;i--){
            if(digits[i]<9 && i==n-1){
                digits[i]+=1;
                break;
            }
            else if(carry==1 && digits[i]<9){
                digits[i]+=1;
                carry=0;
                break;
            }
            else if(carry==1 && digits[i]==9){
                digits[i]=0;
            }
            else if(digits[i]==9 && i==n-1)
            {digits[i]=0;
            carry=1;
            }
        }
        if (carry==1){
            digits.insert(digits.begin(),1);
        }
        return digits;


        }
};