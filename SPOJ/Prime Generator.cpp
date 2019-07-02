#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
      int a,b,flag;
      cin>>a>>b;
      for(int i=a;i<=b;i++)
      {
        for(int j=2;j<=sqrt(b);j++)
        {
          if(i==2)flag=0;
        else  if(i%j==0 && i!=j)
          {
            flag=1;
            break;
          }
          else
            flag=0;
        }
        if(flag==0 && i!=1)
        cout<<i<<endl;
      }
    }
       
    return 0;
}
