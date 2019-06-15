#include<bits/stdc++.h>
using namespace std;

int count(int a[], int n){
    int num1=0;
    int num2=0;
    sort(a, a+n);
    for(int i=0;i<n;i++){
        if(i%2==0){
            num1=num1*10+a[i];
        }else{
            num2=num2*10+a[i];
        }
    }
    return num1+num2;
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
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    cout<<count(a, n)<<endl;
	}
	return 0;
}