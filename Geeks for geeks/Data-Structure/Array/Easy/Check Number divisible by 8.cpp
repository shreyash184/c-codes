#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp> 
using namespace boost::multiprecision; 
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int128_t n;
	    cin>>n;
	    if(n%8==0)
	        cout<<1<<endl;
	    else
	        cout<<-1<<endl;
	}
	return 0;
}