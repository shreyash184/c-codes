//This is inefficient way take exponenetial time 2^n top-Down Approach.
#include <bits/stdc++.h>

using namespace std;

int LIS(int arr[], int n, int max){
    //Base Condition
    if(n==1){
        return 1;
    }
    int res,max_ending_here = 1;
    for(int i=0;i<n;i++){
        res = LIS(arr, i, max);
        if(arr[i-1] < arr[n-1] && res+1 < max_ending_here){
            max_ending_here = res+1;
        }
        if(max < max_ending_here){
            max = max_ending_here;
        }
    }
    return max;
}

int main()
{
    int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int max;
    cout<<LIS(arr, n, max);
    return 0;
}
