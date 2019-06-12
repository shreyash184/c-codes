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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<LIS(a, n)<<endl;
    }
    return 0;
}
