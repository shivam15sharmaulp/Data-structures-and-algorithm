// Last updated: 08/05/2026, 09:29:07
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size= flowerbed.size();
        if(n==0){
            return true;
        }
        if(size==1){
            return !flowerbed[0];
        }
        if(size==2){
            return (flowerbed[0] || flowerbed[1]) || n>1 ? false :true ;
        }


        for(int i=0; i<=size-3; i++){
            if(i==0){
                if(flowerbed[i]==0 && flowerbed[i+1]==0){
                flowerbed[i]=1;
                n-=1;
            }
            }
            if(i==size-3){
             if(flowerbed[i+1]==0 && flowerbed[i+2]==0){
                flowerbed[i+2]=1;
                n-=1;
            }   
            }
            else if(flowerbed[i]==0 && flowerbed[i+1]==0 && flowerbed[i+2]==0){
                flowerbed[i+1]=1;
                n-=1;
            }

            if(n<=0)
            return true;
        }
        
        return false;
    }
};