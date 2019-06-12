//This is inefficient way take exponenetial time 2^n top-Down Approach.
/*
#include <bits/stdc++.h>

using namespace std;

int LIS(int arr[], int n){
    //Base Condition
    if(n==1){
        return 1;
    }
    int res,max_ending_here = 1;
    for(int i=0;i<n;i++){
        res = LIS(arr, i);
        if(arr[i-1] < arr[n-1] && res+1 > max_ending_here){
            max_ending_here = res+1;
        }
    }
    return max_ending_here;
}

int main()
{
    int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<LIS(arr, n);
    return 0;
}
*/

// This is efficient Way of doing this Time Complexity O(n2)
#include <bits/stdc++.h>
using namespace std;
int LIS(int arr[], int n){
    int LIS[n];
    LIS[0] = 1;
    for(int i=1;i<n;i++){
        LIS[i]=1;
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j] && LIS[i]<LIS[j]+1){
                LIS[i] = LIS[j]+1;
            }
        }
    }
    return *max_element(LIS, LIS+n);
}

int main()
{
    int arr[] = { 9,10,11,1,2,3,12 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<LIS(arr, n);
    return 0;
}

//One of the Efficient Way is there in O(nlogn)
