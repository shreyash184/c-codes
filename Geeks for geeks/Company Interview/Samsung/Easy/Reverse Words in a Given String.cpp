#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    string s,v="";
	    cin>>s;
	    int n = s.length();
	    set<char>ss;
	    for(int i=0;i<n;i++){
	        ss.insert(s[i]);
	    }
	    if(ss.find('.')==ss.end()){
	        cout<<s<<endl;
	        continue;
	    }
	    for(int i=n-1;i>=0;i--){
	        if(s[i]=='.'){
	            reverse(v.begin(),v.end());
	            cout<<v<<".";
	            v="";
	        }else{
	            v+=s[i];
	        }
	    }
	    for(int i=0;s[i]!='.';i++){
	        cout<<s[i];
	    }
	    cout<<endl;
	}
	return 0;
}