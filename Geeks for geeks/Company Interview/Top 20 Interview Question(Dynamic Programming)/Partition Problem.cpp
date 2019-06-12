#include <iostream>

using namespace std;

//This is recursive Approach
//Time complexity O(2^n)
/*
bool isSubSet(int arr[], int sum, int n){
    if(sum==0){
        return true;
    }else if(n==0 && sum!=0){
        return false;
    }else if(arr[n-1] > sum){
        return isSubSet(arr, sum, n-1);
    }else{
        return isSubSet(arr, sum-arr[n-1], n-1) || isSubSet(arr, sum, n-1);
    }
}
*/

//This is Dynamic approach
//Time Complexity O(n*sum)

bool isSubSet(int arr[], int sum, int n){
    int t[n+1][sum+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=sum;j++){
            if(i==0){
                t[i][j] = 0;
            }else if(j==0){
                t[i][j] = 1;
            }else if(arr[i-1] > j){
                t[i][j] = t[i-1][j];
            }else{
                t[i][j] = t[i-1][j] || t[i-1][j-arr[i-1]];
            }
        }
    }
    return t[n][sum];
}

bool findPartition(int arr[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    if(sum%2!=0){
        return false;
    }
    else
        return isSubSet(arr, sum/2, n);
}

int main()
{
    int arr[] = {3, 1, 5, 9, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    if (findPartition(arr, n) == true)
        cout << "Can be divided into two subsets "
                "of equal sum";
    else
        cout << "Can not be divided into two subsets"
                " of equal sum";
    return 0;
}
