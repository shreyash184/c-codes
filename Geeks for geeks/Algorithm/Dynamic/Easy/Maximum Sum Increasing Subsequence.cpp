#include<bits/stdc++.h>
using namespace std;

int LIS(int a[], int n){
    int L[n];
    L[0] = a[0];
    for(int i=1;i<n;i++){
        L[i] = a[i];
        for(int j=0;j<i;j++){
            if(a[i] > a[j] && L[i] < a[i]+L[j]){
                L[i] = a[i]+L[j];
            }
        }
    }
    return *max_element(L, L+n);
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
	    cout<<LIS(a, n)<<endl;
	}
	return 0;
}