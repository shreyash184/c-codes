#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
bool has[MAX][1];
bool search(int x)
{
    if(x>=0){
        if(has[x][0]==1)
            return true;
        else
            return false;}
        x=abs(x);
        if(has[x][1]==1)
            return true;
        else
            return false;
    return false;
}
void insert(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
            has[a[i]][0]=1;
        else
            has[a[i]][1]=1;
    }
}
int main()
{
    int a[]={1,2,3,-1,-2,-3};
    int n=sizeof(a)/sizeof(a[0]);
    insert(a,n);
    for(int i=0;i<n;i++)
    {
        int x;
        cout<<"enter the number you want to search";
        cin>>x;
        if(search(x)==true)
            cout<<"present"<<endl;
        else
            cout<<"Not present"<<endl;
    }
    return 0;
}
