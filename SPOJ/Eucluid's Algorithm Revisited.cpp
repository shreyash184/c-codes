#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void multiply(ll int f[2][2], ll int m[2][2]){
    ll int x = ((f[0][0]*m[0][0])%mod+(f[0][1]*m[1][0])%mod)%mod;
    ll int y = ((f[0][0]*m[0][1])%mod+(f[0][1]*m[1][1])%mod)%mod;
    ll int z = ((f[1][0]*m[0][0])%mod+(f[1][1]*m[1][0])%mod)%mod;
    ll int w = ((f[1][0]*m[0][1])%mod+(f[1][1]*m[1][1])%mod)%mod;
    f[0][0] = x;
    f[0][1] = y;
    f[1][0] = z;
    f[1][1] = w;
}

void power(ll int f[2][2], ll int n){
    if(n==0 || n==1){
        return;
    }
    ll int m[2][2] = {{1,1},{1,0}};
    power(f, n/2);
    multiply(f, f);
    if(n%2!=0){
        multiply(f,m);
    }
}

ll int fib(ll int n){
    if(n==0){
        return 0;
    }
    ll int f[2][2] = {{1,1},{1,0}};
    power(f, n-1);
    return f[0][0];
}

int main(){
    ll int t;
    cin>>t;
    while(t--){
        ll int n;
        cin>>n;
        if(n==0){cout<<0<<endl;}
        else if(n==1){cout<<2<<endl;}
        else cout<<fib(n+3)<<endl;
    }
    return 0;
}
