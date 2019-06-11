#include <iostream>

using namespace std;
//This is Recursive approach
//Time Complexity O(2^n)
/*
int knapSack(int W, int wt[], int val[], int n){
    if(n==0 || W==0){
        return 0;
    }
    if(wt[n-1] > W){
        return knapSack(W, wt, val, n);
    }else{
        return max(val[n-1]+knapSack(W-wt[n-1], wt, val, n-1), knapSack(W, wt, val, n-1));
    }
}
*/
//This is Dynamic Approach 
//Time complexity O(n*W)
int knapSack(int W, int wt[], int val[], int n){
    int t[n+1][W+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=W;j++){
            if(i==0 || j==0){
                t[i][j] = 0;
            }else if(wt[i-1] > j){
                t[i][j] = t[i-1][j];
            }else{
                t[i][j] = max(t[i-1][j], val[i-1]+t[i-1][j-wt[i-1]]);
            }
        }
    }
    return t[n][W];
}

int main()
{
    int val[] = {1, 2, 3};
    int wt[] = {10, 20, 30};
    int  W = 50;
    int n = sizeof(val)/sizeof(val[0]);
    cout<<knapSack(W, wt, val, n)<<endl;
    return 0;
}
