#include <bits/stdc++.h>
#define ll unsigned long long
#define MAX 100002
using namespace std;

ll int M(string num, ll int a)
{
    ll int res = 0;
    for (ll int i = 0; i < num.length(); i++)
         res = (res*10 + (int)num[i] - '0') %a;
    return res;
}

int main()
{
  ll int t;
  cin>>t;
  while(t--){
    ll int n;
    cin>>n;
    string k;
    cin>>k;
    ll mod = M(k,n);
    if(mod == n-mod){cout<<n-1<<endl;continue;}
    ll int ans = min(mod, n-mod);
    ans*=2;
    cout<<ans<<endl;
  }
  return 0;
}
