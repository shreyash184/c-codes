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
	    char a[n];
	    map<char, int>m;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    queue<char>q;
	    for(int i=0;i<n;i++){
	        q.push(a[i]);
	        m[a[i]]++;
	        while(!q.empty()){
	            if(m[q.front()] > 1)
	                q.pop();
	            else{
	                cout<<q.front()<<" ";
	                break;
	            }
	        }
	        if(q.empty())
	            cout<<-1<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}