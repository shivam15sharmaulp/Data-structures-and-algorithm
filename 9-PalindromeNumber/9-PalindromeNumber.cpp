// Last updated: 08/05/2026, 09:34:02
class Solution {
public:
    bool isPalindrome(int x) {
        if(x==0){
            return true;
        }
        else if( x%10==0 || x<0){
            return false;
        }
        
        int fu=0;
        int rev=0;
        while(x>rev){
        fu= x%10;
        x=x/10;
        rev=rev*10+fu; }       
        if(x==rev or x==(rev/10)){
        return true;}
        else{
            cout<<x<<"\n"<<rev;
            return false;
        }
    
    }

    
};