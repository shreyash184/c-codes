#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int n, k;
        cin>>n;
        int arr[n+1];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        cin>>k;
        int temp=arr[k-1];
        int ans=k;
        sort(arr, arr+n);
        for(int i=0; i<n; i++){
            if(arr[i]==temp){
                ans=i+1;
            }
        }
        cout<<ans<<"\n";
        t--;
    }
    return 0;
}