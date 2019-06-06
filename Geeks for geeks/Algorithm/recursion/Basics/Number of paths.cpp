#include<iostream>
using namespace std;

int countPath(int m, int n){
    if(m==0 && n==0){
        //possible ways to reach the [0,0] i.e., first block of the matrix
        return 0;
    }
    if(m==0 || n==0){
        //possible no. of ways to reach first row or column of the matrix
        return 1;
    } else{
        //possible number of ways to reach last block of the matrix is 
        return countPath(m-1, n)+countPath(m, n-1);
    }
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    cout<<countPath(m-1,n-1)<<endl;
	}
	return 0;
}