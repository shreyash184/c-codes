#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	 cin >> t;
	 long long x,y;
	 while(t--)
	 {
	     cin >> x >> y;
	     long long arr[x],brr[y];
	     for(int i=0;i<x;i++) cin >> arr[i];
	     for(int i=0;i<y;i++) cin >> brr[i];
	     int p=0,q=0;
	     while(p<x&&q<y)
	     {
	         if(arr[p]<brr[q])
	         cout << arr[p++] << " ";
	         else if(arr[p]>brr[q])
	         cout << brr[q++] << " ";
	         else
	         {
	             cout << arr[p++] << " ";
	             cout << brr[q++] << " "; 
	         }
	     }
	     if(p<x)
	     {
	         for(int i=p;i<x;i++) cout << arr[i] << " ";
	     }
	     if(q<y)
	     {
	         for(int i=q;i<y;i++) cout << brr[i] << " ";
	     }
	     cout << endl;
	     
	 }
	return 0;
}