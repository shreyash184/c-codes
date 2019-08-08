#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int maxVal = INT_MIN;
        for(int i=0;i<n;i++){
            int x = a[i]*20;
            int y = b[i]*10;
            int z = x-y;
            maxVal = max(maxVal, z);
        }
        if(maxVal<0){
            cout<<0<<endl;
        }else{
            cout<<maxVal<<endl;
        }
    }
    return 0;
}
