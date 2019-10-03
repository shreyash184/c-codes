#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll int t;
    cin>>t;
    while(t--){
        ll int n;
        cin>>n;
        ll int a[n];
        map<ll int, ll int>ma;
        for(ll int i=0;i<n;i++){
            cin>>a[i];
            ma[a[i]]++;
        }
        ll int flag = 0;
        ll int x = -1;
        for(auto itr = ma.begin(); itr != ma.end(); itr++){
            if(itr->second == 1){
                flag = 1;
                x = itr->first;
                break;
            }
        }
        if(flag == 1)
        cout<<x<<endl;
        else
        cout<<-1<<endl;
    }
}