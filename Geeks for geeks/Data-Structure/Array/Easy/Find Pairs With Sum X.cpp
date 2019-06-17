#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main()
 {
	//code
	int a;
	cin >> a;
	while(a--){
	    set<int> s;
	    int m,n,k;
	    cin>>m>>n>>k;
	    int arr[m];int darr[n];
	    for(int i = 0 ; i < m ; i++)
	    cin>>arr[i];
	    for(int i = 0 ; i < n ; i++){
	    cin>>darr[i];
	    s.insert(darr[i]);
	    }
	    sort(arr,arr+m);
	    int a=0;
	    for(int i=0 ; i < m ; i++ ){
	        if(s.find(k-arr[i]) != s.end()){
	            if(a==0){
	                a=1;
	             cout<<arr[i]<<" "<<k-arr[i];
	             continue;
	            }
	            cout<<", "<<arr[i]<<" "<<k-arr[i];
	        }
	        
	    }
	    if(a==0)
	    cout<<"-1";
	    cout<<endl;
	}
}