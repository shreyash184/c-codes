#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	        long long int next_2mul = 2;
	        long long int next_3mul = 3;
	        long long int next_5mul = 5;
	        long long int arr[10001];
	        long long int i2=0,i3=0,i5=0;
	        arr[0] = 1;
	    for(long long int i=1;i<10001;i++){
	        long long int next_ugly_no = min(next_2mul,min(next_3mul, next_5mul));
	        
	        arr[i] = next_ugly_no;
	        if(next_ugly_no == next_2mul){
	            i2++;
	            next_2mul = arr[i2]*2;
	        }
	        if(next_ugly_no == next_3mul){
	            i3++;
	            next_3mul = arr[i3]*3;
	        }
	        if(next_ugly_no == next_5mul){
	            i5++;
	            next_5mul = arr[i5]*5;
	        }
	    }
	while(t--){
	    long long int n;
	    cin>>n;
	    cout<<arr[n-1]<<endl;
	}
	return 0;
}