#include <iostream>

using namespace std;

//This is recursive Approach
//time complexity O(n^2)
/*
int MatrixChainOrder(int arr[], int i, int j){
    //Base Condition
    if(i==j){
        return 0;
    }
    int k;
    int Min = INT_MAX;
    int count;
    for(k=i;k<j;k++){
        count = MatrixChainOrder(arr, i, k)+MatrixChainOrder(arr, k+1, j)+(arr[i-1]*arr[k]*arr[j]);
        if(count < Min){
            Min = count;
        }
    }
    return Min;
}
*/
//This is Dynamic Appraoch 
//Time complexity O(n^3)
int MatrixChainOrder(int arr[], int n){
    
}

int main()
{
    int arr[] = {1, 2, 3, 4, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Minimum number of multiplications is "
         << MatrixChainOrder(arr, n);
    return 0;
}
