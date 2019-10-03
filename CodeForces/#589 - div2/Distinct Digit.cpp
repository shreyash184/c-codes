#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll int n,m;
    cin>>n>>m;
    bool flag = 1;
    for(ll int i=n;i<=m;i++){
        ll int N = i;
        flag = 1;
        string s = "";
        while(N!=0){
            ll int rem = N%10;
            N = N/10;
            s+=(char)rem+'0';
        }
        ll int len = s.length();
        map<char, int>ma;
        for(ll int j=0;j<len;j++){
            ma[s[j]]++;
        }
        //cout<<s<<endl;
        for(auto itr = ma.begin(); itr != ma.end(); itr++){
            if(itr->second != 1)flag = 0;
        }
        if(flag == 1){
            cout<<i<<endl;
            break;
        }
    }
    if(flag==0)cout<<-1<<endl;
}