#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll int t;
    cin>>t;
    while(t--){
        ll int n,m;
        cin>>n>>m;
        if(m==1){
            cout<<"NO"<<endl;
            continue;
        }
        if(n==m){
            cout<<"YES"<<endl;
            continue;
        }
        ll int x = n/m;
        if(x%m==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
