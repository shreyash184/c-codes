#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int k;
    cin>>k;
    int mod = k%n;
    for(int i=0;i<n;i++){
        cout<<a[(mod+i)%n]<<" ";
    }
    return 0;
}
