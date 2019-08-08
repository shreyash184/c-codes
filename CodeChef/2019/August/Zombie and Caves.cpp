#include <bits/stdc++.h>
#define ll long long
using namespace std;
void add(int arr[], int N, int lo, int hi, int val)
{
    arr[lo] += val;
    if (hi != N - 1)
       arr[hi + 1] -= val;
}
void updateArray(int arr[], int N)
{
	for (int i = 1; i < N; i++)
		arr[i] += arr[i - 1];
}
int main(){
    ll int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int level[n] = {0};
        for(int i=0;i<n;i++){
            int x = ((i-a[i])<0) ? 0 : i-a[i];
            int y = ((i+a[i])>n-1) ? n-1 : i+a[i];
            add(level, n, x, y, 1);
        }
        updateArray(level, n);
        int flag = 1;
        sort(b, b+n, greater<int>());
        sort(level, level+n, greater<int>());
        for(int i=0;i<n;i++){
            if(level[i]!=b[i]){
                flag=0;
                break;
            }
        }
        if(flag == 1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
