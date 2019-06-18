#include<bits/stdc++.h>
using namespace std;
//This is to find the biotonic point
// int BP(int a[], int l, int r){
//     int mid = l+r/2;
//     if(a[mid-1] < a[mid] && a[mid+1] < a[mid]){
//         return mid;
//     }else if(a[mid] < a[mid+1]){
//         return BP(a, mid+1, r);
//     }else{
//         return BP(a, l, mid-1);
//     }
// }

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
	    int IS[n];
	    int DS[n];
	    for(int i=0;i<n;i++){
	        IS[i]=DS[i]=a[i];
	    }
	    //Increasing Sum of biotonic Sequence
	    for(int i=1;i<n;i++){
	        for(int j=0;j<i;j++){
	            if(a[i] > a[j]  && IS[i] < IS[j]+a[i]){
	                IS[i] = IS[j]+a[i];
	            }
	        }
	    }
	    //Decreasing Sum of biotonic Sequence
	    for(int i=n-2;i>=0;i--){
	        for(int j=n-1;j>i;j--){
	            if(a[i] > a[j]  && DS[i] < DS[j]+a[i]){
	                DS[i] = DS[j]+a[i];
	            }
	        }
	    }
	    int maxSum = INT_MIN;
	    for(int i=0;i<n;i++){
	        maxSum = max(maxSum, (IS[i]+DS[i] - a[i]));
	    }
	    cout<<maxSum<<endl;
	}
	return 0;
}