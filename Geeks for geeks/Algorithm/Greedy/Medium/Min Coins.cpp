#include<bits/stdc++.h>
using namespace std;
//This is recursive approach
// int minCoins(int coins[], int m, int V) 
// { 
//   // base case 
//   if (V == 0) return 0; 
//   if(V<0)return INT_MAX;
//   // Initialize result 
//   int res = INT_MAX; 
  
//   // Try every coin that has smaller value than V 
//   for (int i=0; i<m; i++) 
//   { 
//      if (coins[i] <= V) 
//      { 
//          int sub_res = minCoins(coins, m, V-coins[i]); 
  
//          // Check for INT_MAX to avoid overflow and see if 
//          // result can minimized 
//          if (sub_res != INT_MAX && sub_res + 1 < res) 
//             res = sub_res + 1; 
//      } 
//   } 
//   return res; 
// }

//This is Dynamic approach
int minCoins(int coins[], int m, int V) 
{ 
    // table[i] will be storing the minimum number of coins 
    // required for i value.  So table[V] will have result 
    int table[V+1]; 
  
    // Base case (If given value V is 0) 
    table[0] = 0; 
  
    // Initialize all table values as Infinite 
    for (int i=1; i<=V; i++) 
        table[i] = INT_MAX; 
  
    // Compute minimum coins required for all 
    // values from 1 to V 
    for (int i=1; i<=V; i++) 
    { 
        // Go through all coins smaller than i 
        for (int j=0; j<m; j++) 
          if (coins[j] <= i) 
          { 
              int sub_res = table[i-coins[j]]; 
              if (sub_res != INT_MAX && sub_res + 1 < table[i]) 
                  table[i] = sub_res + 1; 
          } 
    } 
    return table[V]; 
} 


int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    if(minCoins(a,n,m)==INT_MAX)    
	        cout<<-1<<endl;
	    else
	        cout<<minCoins(a,n,m)<<endl;
	}
	return 0;
}