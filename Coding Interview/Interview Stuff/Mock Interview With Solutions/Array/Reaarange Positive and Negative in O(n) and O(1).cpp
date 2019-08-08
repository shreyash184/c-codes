#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i = -1;
    for(int j=0;j<n;j++){
        if(a[j] < 0){
            i++;
            swap(a[i], a[j]);
        }
    }
    int pos = i+1;
    int neg = 0;
    while(pos<n && neg<pos && a[neg]<0){
        swap(a[pos], a[neg]);
        pos++;
        neg+=2;
    }
    for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
    }
    return 0;
}
