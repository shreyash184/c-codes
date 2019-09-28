#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll int t;
    cin>>t;
    while(t--){
        ll int n,m;
        cin>>n>>m;
        ll int a[m];
        for(ll int i=0;i<m;i++)cin>>a[i];
        ll int x = m%n;
        x = m-x;
        //cout<<x<<endl;
        map<ll int, ll int>ma;
        bool flag = 1;
        for(ll int i=0;i<x;i++){
            for(ll int j=i;j<i+n && j<x;j++){
                ma[a[j]]++;
            }
            for(auto itr = ma.begin();itr!=ma.end();itr++){
                if(itr->second != 1)flag = 0;
            }
            //i++;
            //i=i+n;
            //i--;
            ma.clear();
            i=i+n-1;
        }
        for(ll int i=x;i<m;i++){
            ma[a[i]]++;
            for(auto itr = ma.begin();itr!=ma.end();itr++){
                if(itr->second != 1)flag = 0;
            }
        }
        if(flag == 1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
