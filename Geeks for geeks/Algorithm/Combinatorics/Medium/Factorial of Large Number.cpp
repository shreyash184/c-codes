#include<bits/stdc++.h>
#define ll long long
#define MAX 10000
using namespace std;
ll int multiply(ll int i, ll int res[], ll int res_size){
    ll int carry = 0;
    for(ll int j = 0;j<res_size;j++){
        ll int prod = res[j]*i+carry;
        res[j] = prod%10;
        carry = prod/10;
    }
    while(carry){
        res[res_size]=carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}
void fact(ll int n){
    ll int res[MAX];
    ll int res_size =1;
    res[0] = 1;
    for(ll int i = 2;i<=n;i++){
        res_size = multiply(i, res, res_size);
    }
    for(ll int i=res_size-1;i>=0;i--)
        cout<<res[i];
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    ll int n;
	    cin>>n;
	    fact(n);
	    cout<<endl;
	}
	return 0;
}