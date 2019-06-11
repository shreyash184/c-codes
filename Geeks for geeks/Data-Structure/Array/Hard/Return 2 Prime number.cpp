#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) 
{ 
    // Corner case 
    if (n <= 1) 
        return false; 
  
    // Check from 2 to n-1 
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
} 

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int sum=0;
	    int start = 3;
	    int end = n-3;
	    for(int i=start;i<=end;i++){
	        if(isPrime(i) && isPrime(n-i)){
	            cout<<i<<" "<<n-i<<endl;
	            break;
	        }
	    }
	}
	return 0;
}