#include <bits/stdc++.h>
#define ll long long
#define FOR(i,n) for(int i=0;i<n;i++)
using namespace std;

ll int minLimit(ll int n){
    return n-1;
}

ll int maxLimit(ll int n){
    return (n * (n+1))/2;
}

ll int solveEven(ll int n, ll int m){
    if(m < minLimit(n) || m > maxLimit(n))
        return -1;
        
    if(m == n-1){
        if(n == 2)
            return 1;
            
        return 2;
    }
    
    if(n <= m && m <= n+1)
        return 2;
    
    if(m <= 2*n)
        return 3;
    
    ll int res = (m - 2 * n - 1) / (n / 2);
    return res + 4;
}

ll int solveOdd(ll int n, ll int m){
    if(m < minLimit(n) || m > maxLimit(n))
        return -1;
    
    if(n==1)
        return m;
    
    if(m == n-1)
        return 2;
    
    if(n <= m && m <= n+1)
        return 2;
    
    if(m <= 2*n)
        return 3;
    
    ll int ans = 3;
    ll int total = 2*n;
    int cnt = 0;
    
    while(1){
        total += n / 2 + (cnt % 2);
        cnt++, ans++;
        if(total >= m)
            return ans;
    }
}

int main()
{
    ll int t;
    cin>>t;
    while(t--){
        ll int n,m;
        cin>>n>>m;
        if(n%2==0){
            cout<<solveEven(n, m)<<endl;
        }else{
            cout<<solveOdd(n, m)<<endl;
        }
    }
    return 0;
}
