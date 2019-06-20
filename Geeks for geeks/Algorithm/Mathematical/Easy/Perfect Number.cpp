#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool get(long long int n)
{
    long long int sum = 1;
    for (long long int i=2; i*i<=n; i++)
        if (n%i==0)
            sum = sum + i + n/i;
     if (sum == n && n != 1)
         return  true;
  
     return false;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long int n,a; cin>>n;
        a=get(n);
        if(a==true)
        cout<<1;
        else
        cout<<0;
        cout<<"\n";
    }
    return 0;
}