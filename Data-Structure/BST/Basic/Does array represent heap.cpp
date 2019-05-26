#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int T,n;
	cin >> T;
	while(T--) {
	    cin >> n;
	    int arr[n];
	    for (int i=0; i<n; i++) {
	        cin >> arr[i];
	    }
        //first learn concpt of max and mean heap
	    bool h = true;
	    for(int i = 0;i<n;i++){
	        if(arr[(i-1)/2] < arr[i]){
	            h=false;
	            break;
	        }
	    }
	    cout<<h<<endl;
	}
	return 0;
}