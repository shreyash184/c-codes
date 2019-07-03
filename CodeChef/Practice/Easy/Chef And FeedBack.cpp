#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    char s[100000];
	    cin>>s;
	    char *p = strstr(s,"101");
	    char *q = strstr(s,"010");
	    if(p || q)cout<<"Good"<<endl;
	    else cout<<"Bad"<<endl;
	}
	return 0;
}
