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
	    int arr[n], dep[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    for(int i=0;i<n;i++)
	        cin>>dep[i];
	    sort(arr, arr+n);
	    sort(dep, dep+n);
	    int platNeed = 1, result = 1;
	    int i=1,j=0;
	    while(i<n && j<n){
	        if(arr[i] < dep[j]){
	            platNeed++;
	            i++;
	            result=max(result, platNeed);
	        }else{
	            platNeed--;
	            j++;
	        }
	    }
	    cout<<result<<endl;
	}
	return 0;
}