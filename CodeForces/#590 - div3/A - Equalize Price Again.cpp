#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll int t;
    cin>>t;
    while(t--){
        ll int n;
        cin>>n;
        ll int a[n];
        ll int sum = 0;
        for(ll int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%n == 0){
            cout<<sum/n<<endl;
        }else{
            cout<<(sum/n)+1<<endl;
        }
    }
}