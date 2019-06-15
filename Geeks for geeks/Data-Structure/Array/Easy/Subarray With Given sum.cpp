#include <iostream>
using namespace std;

int main() {
	short t;
	cin>>t;
	
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    
	    long a[n];
	    for(int i=0;i<n;i++)
            cin>>a[i];
        
        long long sum=0;
        
        
        for(int i=0;i<n;i++)    
        {
            sum=0;
            for(int j=i;j<n;j++)
            {
                sum=sum+a[j];
                if(sum==k)
                {
                    cout<<i+1<<" "<<j+1;goto one;
                }
                if(sum>k)break;
            }
        }
        one:
        if(sum!=k)
            cout<<"-1";
        cout<<endl;    
	}
	
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	short t;
	cin>>t;
	while(t--){
	    int n,sum;
	    cin>>n>>sum;
	    int a[n];
	    int maxSum=0,flag=0,header=0;
	    int i;
	    for(i=0;i<n;i++){
	        cin>>a[i];
	        maxSum+=a[i];
	        while(maxSum > sum){
	            maxSum-=a[header];
	            header++;
	        }
	        if(maxSum == sum){
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1){
	        cout<<header+1<<" "<<i+1<<endl; 
	    }else{
	        cout<<-1<<endl;
	    }
	}
	return 0;
}