#include<iostream>
using namespace std;

int recursive(int n, int i){
    if(i <= n){
        cout<<i<<" ";
        return recursive(n, i+1);
    } 
    return 0;
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int i = 1;
	    recursive(n, i);
	    cout<<endl;
	}
	return 0;
}
