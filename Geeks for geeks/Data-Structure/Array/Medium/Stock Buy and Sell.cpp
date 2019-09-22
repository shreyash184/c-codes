#include <bits/stdc++.h>
using namespace std;
struct Range{ 
     int start,end;
};
int main()
 {
	//code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	   //This Code is Giving TLE But Code is right Needs Optimization
	    queue<Range>q;
	    int startIndex;
        int endIndex;
	    for(int i=0;i<n;i++){
    	    int Min = a[i];
    	    if(a[i]<a[i+1]){
    	       startIndex = i;
    	       endIndex = i;
    	    }else{
    	        
    	        for(;i<n;i++){
        	        if(Min > a[i]){
        	            startIndex = i;
        	            endIndex = i;
        	            break;
        	        }
        	    }
    	    }
	    
	    
	        for(;i<n-1;i++){
    	        if(a[i]>a[i+1]){
    	            //endIndex = i;
    	            break;
    	        }else{
    	            endIndex++;
    	        }
    	    }
    	    Range r = {startIndex, endIndex};
    	    q.push(r);
    	    startIndex = endIndex + 1;
    	    endIndex = endIndex + 1;
	    }
	    bool flag = 0;
	    while(!q.empty()){
	        if(q.front().start!=q.front().end)
	        {
	            flag = 1;
	           cout<<"("<<q.front().start<<" "<<q.front().end<<") ";
	        }
	         q.pop();
	    }
	    if(flag==0)cout<<"No Profit"<<endl;
	    cout<<endl;
	   
	   //Here is the Optimized Code
	   
	}
	return 0;
}