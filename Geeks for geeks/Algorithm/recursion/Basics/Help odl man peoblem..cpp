#include <bits/stdc++.h>
using namespace std;


int toh(int n,char A,char B,char C,int count,int m){
    if(n>=1){
        count = toh(n-1,A,C,B,count,m);
        count+=1;
        if(count == m){
            cout<<A<<" "<<C<<endl;
        }
        count = toh(n-1,B,A,C,count,m);
    }
    return count;
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
       	cin>>n>>m;
       	char A='1',B='2',C='3';
       	int count = 0;
       	toh(n,A,B,C,count,m);
    }
	return 0;
}