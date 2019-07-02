#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int evenCount = 0;
	    int oddCount = 0;
	    for(int i=0;i<s.length();i+=2){
	        if(s[i]=='1')evenCount++;
	    }
	    for(int i=1;i<s.length();i+=2){
	        if(s[i]=='1')oddCount++;
	    }
	    if(abs(evenCount-oddCount)%3==0)
	        cout<<1<<endl;
	    else
	        cout<<0<<endl;
	}
	return 0;
}