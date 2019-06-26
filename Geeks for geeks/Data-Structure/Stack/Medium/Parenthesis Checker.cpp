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
	    int i=0;
	    int flag = 1;
	    stack<int>ss;
	    while(s[i]!='\0'){
	        if(s[i] == '{' || s[i] == '(' || s[i] == '['){
	            ss.push(s[i]);
	        }else if(!ss.empty() && ((s[i]=='}' && ss.top() == '{') || (s[i]==']' && ss.top() == '[') || (s[i]==')' && ss.top() == '('))){
	            ss.pop();
	        }else{
	            flag=0;
	            break;
	        }
	        i++;
	    }
	    if(flag && ss.empty())
	        cout<<"balanced"<<endl;
	    else
	        cout<<"not balanced"<<endl;
	}
	return 0;
}