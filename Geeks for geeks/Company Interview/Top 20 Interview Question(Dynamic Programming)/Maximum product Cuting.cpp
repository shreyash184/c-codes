#include <iostream>

using namespace std;
//This is recursive approach
//Time complexity Exponential
/*
int MaxProduct(int n){
    if(n == 0 || n==1){
        return 0;
    }
    int maxVal = 0;
    for(int i=1;i<n;i++){
        maxVal = max(maxVal, max(i*(n-i), MaxProduct(n-i)*i));
    }
    return maxVal;
}
*/
//This is Dynamic Approach
//Time Complexity O(n^2)
/*
int MaxProduct(int n){

    int val[n+1];

    if(n==2){
        return 1;
    }
    if(n==3){
        return 2;
    }
    if(n==0 || n==1){
        return 0;
    }
    val[0]=0;
    val[1]=1;
    val[2]=2;
    val[3]=3;
    for(int i=4;i<=n;i++){
        int maxVal = 0;
        for(int j=1;j<=(i/2);j++){
            int product = val[j]*val[i-j];
            maxVal = max(maxVal, product);
        }
        val[i]=maxVal;
    }
    return val[n];
}
*/

//This is the  trick Simplest and most efficient solution
//Time Complexity O(n)

int MaxProduct(int n){
    if(n==0 || n==1){
        return 0;
    }
    if(n==2 || n==3){
        return n-1;
    }
    int res = 1;
    while(n>4){
        n-=3;
        res*=3;
    }
    return n*res;
}
int main()
{
    cout<<MaxProduct(10)<<endl;
    return 0;
}
