#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int x;cin>>x;
   while(x--){
       long long int n;
       cin>>n;
       vector<long long int>a,b;
       for(long long int i=0;i<n;i++)
           {long long int v;cin>>v;a.push_back(v);}
        for(long long int i=0;i<n;i++)
            {long long int v;cin>>v;b.push_back(v);} 
         
          sort(a.begin(),a.end());
          sort(b.begin(),b.end(),greater<long long int>());
        long long int sum=0;      
             for(long long int i=0;i<n;i++){
                 sum+=(a[i]*b[i]);
             }
        cout<<sum<<"\n";     
   }                
              
	return 0;
}