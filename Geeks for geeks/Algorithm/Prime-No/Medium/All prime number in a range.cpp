#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
    int t;
    cin>>t;
    while(t--){
        int count=0, n, m;
        cin>>n>>m;
        if(n==1){
            n=n+1;
        }
        for(int i=n; i<=m; i++)
    	{
    		count=0;
    		for(int j=2; j<i; j++)
    		{
    			if(i%j==0)
    			{
    				count++;
    				break;
    			}
    		}
    		if(count==0)
    		{
    			cout<<i<<" ";
    		}
    	}
    	cout<<endl;
    }
	return 0;
}