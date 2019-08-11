#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    vector<vector<int>>adj;
	    vector<int>v;
	    adj.assign(n, vector<int>());
	    for(int i=0;i<m;i++){
	        int a,b;
	        cin>>a>>b;
	        adj[a].push_back(b);
	        adj[b].push_back(a);
	    }
	    int flag = 0;
	    for(int i=0;i<adj.size();i++){
	        cout<<i;
	        for(int j=0;j<adj[i].size();j++){
	            cout<<"-> "<<adj[i][j];
	        }
	        cout<<endl;
	    }
	}
	return 0;
}