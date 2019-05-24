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
	    queue<char>s1;
	    s1.push(s[0]);
	    for(int i=1;i<s.length();i++){
	        if(s1.back() != s[i]){
	            s1.push(s[i]);
	        }
	    }
	    while(!s1.empty()){
	        cout<<s1.front();
	        s1.pop();
	    }
	    cout<<endl;
	}
	return 0;
}