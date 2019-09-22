#include <bits/stdc++.h>

#define ull unsigned long long

#define MOD 1000000007

using namespace std;

ull int ncr(ull int n, ull int k)  
{  
    ull int res = 1;    

    if ( k > n - k )  
        k = n - k;  

    for (ull int i = 0; i < k; ++i)  
    {  

        res = res*(n - i);  

        res = res/(i + 1);  

    }  

    return res;  

}  

int main(){
    
    ull int t;
    
    cin>>t;
    
    while(t--){
    
        ull int n,k;
    
        cin>>n>>k;
    
        ull int a[n];
    
        ull int Min = INT_MAX;
    
        for(ull int i=0;i<n;i++){
    
            cin>>a[i];
            
        }
        
        sort(a, a+n);
    
        map<int, int>m;
    
        for(int i = 0;i<n;i++){
    
            m[a[i]]++;
        }
    
        ull x = a[k-1];
    
        int countLess = 0;
    
        for(int i=0;i<n;i++){
    
            if(a[i]<x)countLess++;
        }
    
        cout<<ncr(m[a[k-1]], k-countLess)<<endl;
    }
    
    return 0;
}