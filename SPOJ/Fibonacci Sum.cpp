#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
/*int fibo(int n){
	int f[n+2];
	f[0]=0;
	f[1]=1;
	for(int i=2;i<=n;i++){
		f[i]=f[i-1]+f[i-2];
	}
	return f[n];
}*/
/*int fibo(long long int n) { 
  double phi = (1 + sqrt(5)) / 2; 
  return round(pow(phi, n) / sqrt(5)); 
}*/
/*const int MAX = 1000; 
  
// Create an array for memoization 
int f[MAX] = {0}; 
  
// Returns n'th fuibonacci number using table f[] 
int fib(int n) 
{ 
    // Base cases 
    if (n == 0) 
        return 0; 
    if (n == 1 || n == 2) 
        return (f[n] = 1); 
  
    // If fib(n) is already computed 
    if (f[n]) 
        return f[n]; 
  
    int k = (n & 1)? (n+1)/2 : n/2; 
  
    // Applyting above formula [Note value n&1 is 1 
    // if n is odd, else 0. 
    f[n] = (n & 1)? (fib(k)*fib(k) + fib(k-1)*fib(k-1)) 
           : (2*fib(k-1) + fib(k))*fib(k); 
  
    return f[n]; 
} */
void multiply(ll F[2][2], ll M[2][2]); 
  
void power(ll F[2][2], int n); 
  
/* function that returns nth Fibonacci number */
ll fib(int n) 
{ 
  ll F[2][2] = {{1,1},{1,0}}; 
  if (n == 0) 
    return 0; 
  power(F, n-1); 
  return F[0][0]%1000000007; 
} 
  
/* Optimized version of power() in method 4 */
void power(ll F[2][2], int n) 
{ 
  if( n == 0 || n == 1) 
      return; 
  ll M[2][2] = {{1,1},{1,0}}; 
  
  power(F, n/2); 
  multiply(F, F); 
  
  if (n%2 != 0) 
     multiply(F, M); 
} 
  
void multiply(ll F[2][2], ll M[2][2]) 
{ 
  ll x =  ((F[0][0]*M[0][0]) + (F[0][1]*M[1][0]))%1000000007; 
  ll y =  ((F[0][0]*M[0][1]) + (F[0][1]*M[1][1]))%1000000007; 
  ll z =  ((F[1][0]*M[0][0]) + (F[1][1]*M[1][0]))%1000000007; 
  ll w =  ((F[1][0]*M[0][1]) + (F[1][1]*M[1][1]))%1000000007; 
  
  F[0][0] = x; 
  F[0][1] = y; 
  F[1][0] = z; 
  F[1][1] = w; 
} 
int main() {
    int t;
    cin>>t;
    while(t--){
         int sum;
    	int N,M;
    	cin>>N>>M;
        	sum=fib(M+2)-fib(N+1);
        //	cout<<fib(M+2)<<endl<<fib(N+1)<<endl;
        	sum=(sum+1000000007)%(1000000007);
        	cout<<sum<<endl;
    	
    }
	return 0;
}