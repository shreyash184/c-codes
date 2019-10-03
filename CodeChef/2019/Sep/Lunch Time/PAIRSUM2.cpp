#include <bits/stdc++.h>
#define ll long long
using namespace std;

void generate_sequence(ll int a[], ll int b[], ll int n){
    a[1] = 0;
    for(ll int i = 2;i<=n;i++){
        a[i] = b[i-1] - a[i-1];
    }
    //for(ll int i=1;i<=n;i++)cout<<a[i]<<endl;
}

int main()
{
    ll int t;
    cin>>t;
    while(t--){
        ll int n,m;
        cin>>n>>m;
        ll int a[n+1],b[n];
        for(ll int i=1;i<n;i++){
            cin>>b[i];
        }
        generate_sequence(a,b,n);
        for(ll int i=0;i<m;i++){
            ll int p,q;
            cin>>p>>q;
            if(abs(p-q) % 2 == 0){
                cout<<"UNKNOWN"<<endl;
            }else{
                cout<<a[p]+a[q]<<endl;
            }
        }
    }
    return 0;
}
