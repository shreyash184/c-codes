#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    n = ((n&0x0F)<<4)|((n&0xF0)>>4);
	    cout<<n<<endl;
	}
	return 0;
}