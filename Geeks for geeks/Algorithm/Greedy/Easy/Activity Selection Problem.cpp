#include<bits/stdc++.h>
using namespace std;

struct Activity{
    int start,finish;
}; 
bool comp(Activity a, Activity b){
    return a.finish < b.finish;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    Activity a[n],b[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i].start;
	    }
	    for(int i=0;i<n;i++){
	        cin>>a[i].finish;
	    }
	    sort(a, a+n, comp);
	    int i=0;
	    int count=1;
	    for(int j=1;j<n;j++){
	        if(a[j].start >= a[i].finish){
	            count++;
	            i=j;
	        }
	        
	    }
	    cout<<count<<endl;
	}
	return 0;
}