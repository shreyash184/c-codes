#include <bits/stdc++.h>
#define ll long long
#define d double
using namespace std;
int main(){
    ll int t;
    cin>>t;
    while(t--){
        ll int n;
        cin>>n;
        d a[n];
        d sum=0;
        for(ll int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        d sum1 = sum;
        d mean = sum/n;
        d temp;
        ll int min = INT_MAX;
        for(ll int i=0;i<n;i++){
            sum-=a[i];
            temp = (d)sum/(n-1);
            if(temp == mean){
                if(a[i]<min){
                    min = i+1;
                    break;
                }
            }else{
                sum+=a[i];
            }
        }
        if(sum1!=sum)
        cout<<min<<endl;
        else
        cout<<"Impossible"<<endl;
    }
}
