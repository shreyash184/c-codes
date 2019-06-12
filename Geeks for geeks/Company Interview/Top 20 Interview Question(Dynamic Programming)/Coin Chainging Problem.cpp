#include <bits/stdc++.h>

using namespace std;

//This is Recursive Approach.
//Time Complexity O(2^n)
/*
int coinChange(int arr[], int n, int k){
    if(k==0){
        return 1;
    }if(k<0 || (n<=0 && k>=1)){
        return 0;
    }
        return coinChange(arr, n-1, k)+coinChange(arr, n, k-arr[n-1]);

}
*/
//This is Best solution using dynamic programming
//Time Complexity O(nk)
int coinChange(int arr[], int n, int k){

    int t[k+1];
    memset(t, 0, sizeof(t));
    t[0]=1;
    for(int i=0;i<n;i++){
        for(int j=arr[i];j<=k;j++){
            t[j]+=t[j-arr[i]];
        }
    }
    return t[k];
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<coinChange(arr, n, 4)<<endl;
    return 0;
}
