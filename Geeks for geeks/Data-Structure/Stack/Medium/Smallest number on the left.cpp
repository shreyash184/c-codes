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
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    stack<int> s;
	    s.push(arr[0]);
	    cout<<-1<<" ";
	    for(int i=1;i<n;i++){
	        if(arr[i]>s.top()){
	            cout<<s.top()<<" ";
	            s.push(arr[i]);
	        }
	        else{
	            while(!s.empty() && s.top()>=arr[i]){
	                s.pop();
	            }
	            if(s.empty()){
	                cout<<-1<<" ";
	            }
	            else{
	                cout<<s.top()<<" ";
	            }
	            s.push(arr[i]);
	        }
	    }
	    cout<<endl;
	    
	}
	return 0;
}