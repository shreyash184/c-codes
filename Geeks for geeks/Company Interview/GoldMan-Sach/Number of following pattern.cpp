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
        int n = s.length();
        stack<int>st;
        int x = 1;
        for(int i=0;i<=n+1;i++){
            st.push(x++);
            if((s[i]=='I' && !st.empty()) || i==n){
                while(!st.empty()){
                    cout<<st.top();
                    st.pop();
                }
            }
        }
        cout<<endl;
	}
	return 0;
}