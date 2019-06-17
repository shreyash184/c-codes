class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0){
            return true;
        }
        if(flowerbed.size()==1 && flowerbed[0]==0){
            return true;
        }
        if(flowerbed.size()==1 && flowerbed[0]==1){
            return false;
        }
        int count = 0;
        if(((flowerbed[0]==0 && flowerbed[1]==0) && flowerbed.size()>=2)){
            count++;
            flowerbed[0]=1;
        }
        if((flowerbed[flowerbed.size()-1]==0 && flowerbed[flowerbed.size()-2]==0) && flowerbed.size()>=2){
            count++;
            flowerbed[flowerbed.size()-1]=1;
        }  
        for(int i=1;i<flowerbed.size()-1;i=i+1){
            if(flowerbed[i+1]==0 && flowerbed[i-1]==0 && flowerbed[i]==0){
                count++;
                i++;
            }
        }
        if(n<=count)
            return true;
        else
            return false;
    }
};