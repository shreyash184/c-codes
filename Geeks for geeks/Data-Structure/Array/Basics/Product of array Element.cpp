{
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
//Position this line where user code will be pasted.
int main()
{
 int t;
 cin>>t;
 while(t--)
   {
    int n;
    cin>>n;
    int ar[100001]={0};
    for(int i=0;i<n;i++)
      cin>>ar[i];  
      
    long long int mod=1000000007;
   cout<<product(ar,n,mod)<<endl;
    
 }
return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/*  
     ar[] is the array
     n = number of element in array
     mod = modulo value;
*/
long long int product(int ar[], int n, long long int mod)
 {
     long long int sum=1;
     //code here
     for( int i=0;i<n;i++){
         sum=(sum*ar[i])%mod;
     }
     return sum%mod;
 }