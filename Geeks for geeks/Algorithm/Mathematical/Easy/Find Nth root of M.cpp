#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main()
{
    int t; cin>>t;
    
    while(t--)
    {
        int n,m; cin>>n>>m;
        float p=((log10(m))/n);
        float q=ceil(pow(10,p));
        float u=floor(pow(10,p));
        int r=pow(q,n);
        int s=pow(u,n);
        if(r==m)
        cout<<q;
        else if(s==m)
        cout<<u;
        else
        cout<<-1;
        cout<<endl;
    }
}