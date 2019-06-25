using namespace std;

int knapSack(int W, int n, int val[], int wt[]) 
{ 
    // dp[i] is going to store maximum value 
    // with knapsack capacity i. 
    int dp[W+1]; 
    memset(dp, 0, sizeof dp); 
  
    int ans = 0; 
  
    // Fill dp[] using above recursive formula 
    for (int i=0; i<=W; i++) 
      for (int j=0; j<n; j++) 
         if (wt[j] <= i) 
            dp[i] = max(dp[i], dp[i-wt[j]]+val[j]); 
  
    return dp[W]; 
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,w;
	    cin>>n>>w;
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    for(int j=0;j<n;j++)
	        cin>>b[j];
	    cout<<knapSack(w, n, a, b)<<endl;
    }
	return 0;
}