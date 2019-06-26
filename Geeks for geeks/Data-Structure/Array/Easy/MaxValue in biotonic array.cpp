#include<bits/stdc++.h>
using namespace std;


int binarysearch(int arr[],int start,int end,int n)
{
    int pivot=(start+end)/2;
    if(pivot!=0&&pivot!=n-1)
    {
        if(arr[pivot+1]<arr[pivot]&&arr[pivot-1]<arr[pivot])
        {
            return arr[pivot];
        }
        else if(arr[pivot]>arr[pivot+1])
        {
            return binarysearch(arr,start,pivot,n);
        }
        else if(arr[pivot]<arr[pivot+1])
        {
            return binarysearch(arr,pivot+1,end,n);
        }
    }
    else if(pivot==n-1)
    {
        return arr[pivot];
    }
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    cout<<binarysearch(a,0,n-1,n)<<endl;
	}
	return 0;
}