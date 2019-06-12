#include <iostream>

using namespace std;

//This is the recursive approach
//Time Complexity Exponenetial
/*
int eggDrop(int n, int k){
    // If there are no floors, then no trials needed. OR if there is
    // one floor, one trial needed.
    if(k==0 || k==1){
        return k;
    }
    // We need k trials for one egg and k floors
    if(n==1){
        return k;
    }

    int Min = INT_MAX;
    int res;
    for(int x=1;x<=k;x++){
        res = max(eggDrop(n-1, x-1), eggDrop(n, k-x));
        if(res < Min){
            Min = res;
        }
    }
    return 1+Min;
}
*/

//This is Dynamic Approach
//Time complexity O(nk^2)
int eggDrop(int n, int k){
    int t[n][k];
    int res;
    // We need one trial for one floor and0 trials for 0 floors
    for(int i = 1;i<=n;i++){
        t[i][1] = 1;
        t[i][0] = 0;
    }
    // We always need j trials for one egg and j floors.
    for(int i=1;i<=k;i++){
        t[1][i] = i;
    }

    for(int i=2;i<=n;i++){
        for(int j = 2;j<=k;j++){
            t[i][j] = INT_MAX;
            for(int x=1;x<=j;x++){
                res = max(t[i-1][x-1], t[i][j-x]);
                if(res < t[i][j]){
                    t[i][j] = 1+res;
                }
            }
        }
    }
    return t[n][k];
}

//IT has One more efficient solution in O(nlogk) Time
int main()
{
    int n=2,k=10;
    //n is number of eggs
    //k is number of floors
    cout<<eggDrop(n, k)<<endl;
    return 0;
}
