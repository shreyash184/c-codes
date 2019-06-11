#include <iostream>

using namespace std;
//Using Recursion
//Time Complexity O(n^2)

/*
bool subSetSum(int set[], int n, int sum){
    //Base Condition
    if(sum == 0){
        return true;
    }
    if(n == 0 && sum!=0){
        return false;
    }
    if(set[n-1] > sum){
        return subSetSum(set, n-1, sum);
    }

    return subSetSum(set, n-1, sum) || subSetSum(set, n-1, sum-set[n-1]);
}
*/

//Using Dynamic programming
//Time Complexity
bool subSetSum(int set[], int n, int sum){
    int t[n+1][sum+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=sum;j++){
            if(j==0){
                t[i][j]=1;
            }else if(i==0){
                t[i][j] = 0;
            }else if(j>=set[i]){
                t[i][j] = t[i-1][j] || t[i-1][j-set[i]];
            }else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    return t[n][sum];
}
int main()
{
    int set[] = {3, 34, 4, 12, 5, 2};
    int sum = 34;
    int n = sizeof(set)/sizeof(set[0]);
    if(subSetSum(set, n , sum)){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
    return 0;
}
