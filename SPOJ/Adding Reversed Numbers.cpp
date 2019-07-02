#include <bits/stdc++.h>
using namespace std;
int reverse(int n)
{
    int x=0;
    while(n!=0)
    {
        int r=n%10;
        n=n/10;
        x=x*10+r;
    }
    return x;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,A=0,B=0,c=0,C=0;
        cin>>a>>b;
         A=reverse(a);
        B=reverse(b);
        C=A+B;
        c=reverse(C);
        cout<<c<<endl;
    }
    return 0;
}