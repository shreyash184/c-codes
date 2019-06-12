#include <iostream>

using namespace std;

//This is recursive function takes exponential time.
/*
int rodCutting(int arr[], int n){
    if(n==0){
        return 0;
    }
    int Max = INT_MIN;
    for(int i=0;i<n;i++){
        Max = max(Max, arr[i]+rodCutting(arr, n-i-1));
    }
    return Max;
}
*/

//this is by dynamic programming take time O(n2)

int rodCutting(int arr[], int n){
    int t[n+1];
    t[0] = 0;
    for(int i=1;i<=n;i++){
        int Max = INT_MIN;
        for(int j=0;j<i;j++){
            Max = max(Max, t[i-j-1]+arr[j]);
        }
        t[i] = Max;
    }
    return t[n];
}

int main()
{
    int arr[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int s = sizeof(arr)/sizeof(arr[0]);
    cout<<rodCutting(arr, s)<<endl;
    return 0;
}
