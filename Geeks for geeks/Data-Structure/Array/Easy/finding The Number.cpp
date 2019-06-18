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
	    int a[n*2+2];
	    unordered_map<int, int>m;
	    for(int i=0;i<n*2+2;i++){
	        cin>>a[i];
	        m[a[i]]++;
	    }
	    int b[2];
	    int index=0;
	    for(auto itr=m.begin();itr!=m.end();itr++){
	        if(itr->second%2!=0){
	            b[index++]=itr->first;
	        }
	    }
	    sort(b,b+2);
	    for(int i=0;i<2;i++)
	        cout<<b[i]<<" ";
	    cout<<endl;
	}
	return 0;
}