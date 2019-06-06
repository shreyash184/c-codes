#include<bits/stdc++.h>
using namespace std;

long long int gf(long long int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else{
      return ((gf(n-2)*gf(n-2))-gf(n-1));
   }
}

int main()
 {
	//code
	long long int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    for(long long int i=0;i<n;i++){
	        cout<<gf(i)<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}