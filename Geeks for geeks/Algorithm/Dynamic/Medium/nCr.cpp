#include <bits/stdc++.h>
using namespace std;

#include <boost/multiprecision/cpp_int.hpp> 
using boost::multiprecision::cpp_int;

cpp_int coefficient(int n,int k){
    cpp_int res=1;
    for(int i=0;i<k;i++){
        res*=((n-i))%1000000007;
        res=res/(i+1);
    }
    return res%1000000007;
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	     int n,m;
	    cin>>n>>m;
	    cout<<coefficient(n,m)<<endl;
	    
	}
	return 0;
}