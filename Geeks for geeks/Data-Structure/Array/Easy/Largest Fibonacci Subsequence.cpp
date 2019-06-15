#include<bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int x) 
{ 
    int s = sqrt(x); 
    return (s*s == x); 
}

bool isFibonacci(int n) 
{ 
    // n is Fibinacci if one of 5*n*n + 4 or 5*n*n - 4 or both 
    // is a perferct square 
    return isPerfectSquare(5*n*n + 4) || 
           isPerfectSquare(5*n*n - 4); 
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
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(isFibonacci(a[i])){
	            cout<<a[i]<<" ";
	        }
	    }
	   cout<<endl;
	}
	return 0;
}