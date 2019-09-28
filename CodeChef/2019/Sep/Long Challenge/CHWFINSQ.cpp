// #include <bits/stdc++.h>

// #define ull unsigned long long

// #define MOD 1000000007

// using namespace std;

// ull int ncr(ull int n, ull int k)  
// {  
//     ull int res = 1;    

//     if ( k > n - k )  
//         k = n - k;  

//     for (ull int i = 0; i < k; ++i)  
//     {  

//         res = res*(n - i);  

//         res = res/(i + 1);  

//     }  

//     return res;  

// }  

// int main(){
    
//     ull int t;
    
//     cin>>t;
    
//     while(t--){
    
//         ull int n,k;
    
//         cin>>n>>k;
    
//         ull int a[n];
    
//         ull int Min = INT_MAX;
    
//         for(ull int i=0;i<n;i++){
    
//             cin>>a[i];
            
//         }
        
//         sort(a, a+n);
    
//         map<int, int>m;
    
//         for(int i = 0;i<n;i++){
    
//             m[a[i]]++;
//         }
    
//         ull x = a[k-1];
    
//         int countLess = 0;
    
//         for(int i=0;i<n;i++){
    
//             if(a[i]<x)countLess++;
//         }
    
//         cout<<ncr(m[a[k-1]], k-countLess)<<endl;
//     }
    
//     return 0;
// }

//After Contest Different solution that before submitted in the contest
#include <bits/stdc++.h>
#define FOR(i,n) for(int i=0;i<n;i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define pp pair<int, int>
#define vec vector<int>
#define ll long long
using namespace std;

ll int ncr(ll int n, ll int k){
    ll int res = 1;
    if(n-k < k){
        k = n-k;
    }
    for(ll int i=0;i<k;i++){
        res*=(n-i);
        res/=(i+1);
    }
    return res;
}

int main() {
	// your code goes here
	ll int t;
	cin>>t;
	while(t--){
	    ll int n,k;
	    cin>>n>>k;
	    ll int a[n];
	    for(ll int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a, a+n);
	    map<ll int, ll int>m;
	    for(ll int i=0;i<n;i++)m[a[i]]++;
	    ll int sum = 1;
	    if(n<k){
	        cout<<0<<endl;
	        continue;
	    }
	    for(auto itr = m.begin();itr!= m.end();itr++){
	            ll int N = itr->second;
	            if(k<N){
	                sum=ncr(N, k);
	                //k=0;
	                break;
	            }else{
	                //sum+=ncr(N, N);
	                k=k-N;
	            }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}

