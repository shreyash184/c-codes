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
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    unordered_map<int, int>map;
	    for(int i=0;i<n;i++){
	        map[arr[i]]++;
	    }
	    int x;
	    unordered_map<int, int>:: iterator itr; 
        for (itr = map.begin(); itr != map.end(); itr++) 
        { 
            if(itr->second%2 != 0){
                x = itr->first;
                break;
            }else{
                x = 0;
            }
        }
        cout<<x<<endl;;
	}
	return 0;
}