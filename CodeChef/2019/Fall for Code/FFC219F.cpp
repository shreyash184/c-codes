#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll int t;
    cin>>t;
    while(t--){
        ll int n,m;
        cin>>n>>m;
        ll int a[n];
        for(ll int i = 0;i<n;i++)cin>>a[i];
        sort(a, a+n);
        ll int count = 0;
        ll int i = 0;
        while(m>=0){
            m-=a[i];
            i++;
            count++;
        }
        cout<<count-1<<endl;
    }
}