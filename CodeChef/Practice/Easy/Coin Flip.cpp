#include <iostream>
#define mod 10000007
#define ll long long
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        while(n--){
            int i,n,q;
            cin>>i>>n>>q;
            int x=n/2;
            if((i==1 && q==2)||(i==2 && q==1))
                cout<<n-x<<endl;
            else
                cout<<x<<endl;
        }
	}
	return 0;
}

