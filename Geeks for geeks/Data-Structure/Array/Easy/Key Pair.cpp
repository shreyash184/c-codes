#include<bits/stdc++.h>
#define fast ios:: sync_with_stdio(false);cin.tie(NULL)
using namespace std;
int main()
 {
     fast;
 int t;
 cin>>t;
 while(t--)
 {
     int n, k;
     cin>>n>>k;
     int p[n];
     for(int i=0; i<n; i++)
     cin>>p[i];
     sort(p, p+n);
      int flag=0;
     int i=0; int j=n-1;
     while(i<j)
     {
         if(p[i]+p[j]==k)
          {
              flag=1;
              break;
          }
          else if(p[i]+p[j]<k)
             i++;
             else
             j--;
     }
     if(flag)
     cout<<"Yes"<<endl;
     else
     cout<<"No"<<endl;
 }
	//code
	return 0;
}