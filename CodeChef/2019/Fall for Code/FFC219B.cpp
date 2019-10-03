#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

long long int multiply(long long int val, long long int n)
{
    long long int q=((double)val*(double)n/(double)mod);
    long long int res=val*n-mod*q;
    res=(res%mod+mod)%mod;
    return res;
}


ll int mul(ll int a, ll int b, ll int c, ll int d){
    ll int x = (multiply(a  , b ))%mod;
    ll int y = (multiply(c , d ))%mod;
    return (multiply(x  , y) )%mod;
}

void preCompute(ll int arr[], ll int n, ll int pre[])
{
    pre[0] = arr[0];
    for (ll int i = 1; i < n; i++)
        pre[i] = arr[i] + pre[i - 1];
}

// Returns sum of elements in arr[i..j]
// It is assumed that i <= j
ll int rangeSum(ll int i, ll int j, ll int pre[])
{
    if (i == 0)
       return pre[j];

    return pre[j] - pre[i-1];
}

int main(){
    ll int t;
    cin>>t;
    ll int a=1,b=2,c=3,d=4;
    ll int dp[100001];
    for(ll int i=1;i<100001;i++){
        dp[i] = mul(a,b,c,d);
        a++;
        b++;
        c++;
        d++;
    }
    ll int pre[100001];
    preCompute(dp, 100001, pre);
    while(t--){
        ll int l,r;
        cin>>l>>r;
        ll int res = 0;
        res = rangeSum(l, r, pre);
        cout<<res%mod<<endl;
    }
}
