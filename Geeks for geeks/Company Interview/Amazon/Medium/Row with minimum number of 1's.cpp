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
	    int a[n][m];
	    int Min = 0;
	    int count = 0;
	    int minCount = INT_MAX;
	    for(int i=0;i<n;i++){
	        count = 0;
	        for(int j=0;j<m;j++){
	            cin>>a[i][j];
	            if(a[i][j]==1)count++;
	        }
	        if(count > 0 && count<minCount){
	            Min = i;
	            minCount = count;
	        }
	    }
	    int flag = 0;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(a[i][j]==1){
	                flag = 1;
	                break;
	            }
	        }
	    }
	    if(flag==0){
	        Min = -1;
	    }
	    cout<<Min<<endl;
	}
	return 0;
}