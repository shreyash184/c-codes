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
	    stack<int>v;
	    v.push(-1);
	    int result = 0;
	    for(int i=0;i<s.length();i++){
	        if(s[i]=='(')
	            v.push(i);
	        else{
	            v.pop();
	            if(!v.empty()){
	                result = max(result, i-v.top());
	            }else{
	                v.push(i);
	            }
	        }
	    }
	    cout<<result<<endl;
	}
	return 0;
}