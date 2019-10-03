// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// ll int max(ll int a, ll int b){
//     return (a>b) ? a : b;
// }

// //This will partial points 30 points. need optimization
// int main(){
//     ll int t;
//     cin>>t;
//     while(t--){
//         ll int a,b,c;
//         cin>>a>>b>>c;
//         a--;
//         c--;
//         ll int sum = 0;
//         for(ll int i=1;i<=b;i++){
//             ll int B2 = (i*i);
//             for(ll int j=1;j<=a;j++){
//                 ll int B2A = B2/j;
//                 sum += max(0, c-B2A);
//             }
//         }
//         cout<<sum<<endl;
//     }
// }

#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define lli long long int
#define INF 1000000000
#define endl '\n'

using namespace std;
lli di[5050][5050];
lli ans(lli a , lli b , lli c)
{
	lli res = 0;
	if(a == 0 || c == 0)
	return 0;
	
	for(lli i=1;i<=b;i++)
	{
		if(di[i][1] == 0)
		di[i][1] = (i * i);
		lli val = di[i][1];
		lli j = 1;
		bool flag = 1;
		
		for(; j<=i;j++)
		{
			if(j > a)
			{
				flag = 0;
				break;
			}
			if(di[i][j] == 0)
			di[i][j] = di[i][1] / j;
			res = (res + max((lli)0 , c - di[i][j]));
			
			if(res >= mod)
			res -= mod;
		}
		
		if(di[i][j] == 0)
		di[i][j] = di[i][1] / j;
		lli it = di[i][j];
		
		if(flag)
		while(it >= 1)
		{
			if(di[i][j] == 0)
			di[i][j] = di[i][it] / it;
			
			if(di[i][j] == 0)
			di[i][j] = di[i][it+1] / (it+1);
			lli r = di[i][it];
			lli l = di[i][it+1];
			
			if(a <= l)
			break;
			else
			r = min(r , a);
			
			res = (res + ((max((lli)0 , c - it)*(r-l)) % mod));
			if(res >= mod)
			res -= mod;
			it--;
		}
		
		if(a > val)
		{
			res = (res + (((a-val) * c) % mod));
			if(res >= mod)
			res -= mod;
		}
	}
	
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	lli t , a , b , c ;
	cin>>t;
	
	while(t--)
	{
		cin>>a>>b>>c;
		a-- , c--;
		if(a > c)
		swap(a , c);
		cout<<ans(a , b , c)<<endl;
	}
}

