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
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            cin>>a[i][j];
	        }
	    }
	    int k=0,l=0;
	    while(k<n && l<m){
	       //Printing the first row 
	       for(int i=l;i<m;i++){
	           cout<<a[k][i]<<" ";
	       }
	       //Removing First Row
	       k++;
	       //Printing The last Column
	       for(int i=k;i<n;i++){
	           cout<<a[i][m-1]<<" ";
	       }
	       //Removing the Last Column
	       m--;
	       
	       if(k<n){
	           //Printing Last Row
	           for(int i=m-1;i>=l;i--){
	               cout<<a[n-1][i]<<" ";
	           }
	           //Removing Last Row
	           n--;
	       }
	       if(l<m){
	           //Printing Fisrt Column
	           for(int i=n-1;i>=k;i--){
	               cout<<a[i][l]<<" ";
	           }
	           //Removing First Column
	           l++;
	       }
	       
	    }
	    cout<<endl;
	}
	return 0;
}