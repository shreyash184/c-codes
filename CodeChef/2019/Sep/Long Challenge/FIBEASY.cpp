#include <bits/stdc++.h>

#define ull unsigned long long

using namespace std;

void m(ull int F[2][2], ull int M[2][2]); 
  
void power(ull int F[2][2], ull int n);

ull int fib(ull int n) 
{ 

  ull int F[2][2] = {{1,1},{1,0}}; 

  if (n == 0) 
    return 0; 

  power(F, n-1); 

  return F[0][0]; 
} 
void power(ull int F[2][2], ull int n) 
{ 
  if( n == 0 || n == 1) 
      return; 

  ull int M[2][2] = {{1,1},{1,0}}; 
  
  power(F, n/2); 

  m(F, F); 
  
  if (n%2 != 0) 
     m(F, M); 
} 
void m(ull int F[2][2], ull int M[2][2]) 
{ 
  ull int x =  (F[0][0]*M[0][0] + F[0][1]*M[1][0])%10; 

  ull int y =  (F[0][0]*M[0][1] + F[0][1]*M[1][1])%10; 

  ull int z =  (F[1][0]*M[0][0] + F[1][1]*M[1][0])%10; 

  ull int w =  (F[1][0]*M[0][1] + F[1][1]*M[1][1])%10; 
  
  F[0][0] = x; 

  F[0][1] = y; 

  F[1][0] = z; 

  F[1][1] = w; 
}  








int main(){

    ull int t;

    cin>>t;

    for(int i=0;i<t;i++){

        ull int q;
        
        cin>>q;
        
        ull int c = 0;
        
        ull int x = q;
        
        while(x!=0){
        
            x/=2;
        
            c++;
        
        }
        c--;
        ull int nth = pow(2, c);
        
        nth--;
        
        cout<<fib(nth)%10<<endl;
        
    }
    return 0;
}