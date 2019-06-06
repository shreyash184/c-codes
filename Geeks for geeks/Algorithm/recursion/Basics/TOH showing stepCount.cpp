#include <bits/stdc++.h>
using namespace std;


int toh(int n,char A,char B,char C,int count){
    if(n>=1){
        count = toh(n-1,A,C,B,count);
        count+=1;
        cout<<"move disk "<<n<< " from rod "<<A<< " to rod "<<C<<endl;
        count = toh(n-1,B,A,C,count);
    }
    return count;
}

int count;

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
       	cin>>n;
       	char A='1',B='2',C='3';
       	int count = 0;
       	cout<<toh(n,A,B,C,count)<<endl;
    }
	return 0;
}