#include <bits/stdc++.h>
#define FOR(i,n) for(int i=0;i<n;i++)
#define ull long long
#define ll long long
using namespace std;


int main() {

	int X;

	cin>>X;

	FOR(j,X){

	   int O,P;

	   cin>>O>>P;

	   map<int, int>MMM;

	   MMM[1] = 2;

	   MMM[2] = 5;

	   MMM[4] = 4;

	   MMM[0] = 6;

	   MMM[6] = 6;

	   MMM[3] = 5;

	   MMM[8] = 7;

	   MMM[9] = 6;

	   MMM[0] = 6;

	    MMM[5] = 5;

	    MMM[7] = 3;

	   ll int n = O+P;

	   ll int sum = 0;

	   while(n!=0){


          ll int r = n%10;

          n = n/10;

          sum+=MMM[r];

	   }

	   cout<<sum<<endl;
	}


	return 0;
}
