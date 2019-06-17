using namespace std;


int recur(int arr[], int n, int y, int sum){
    int temp = sum/2;
    int dp[n+1][temp+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=temp;j++){
            if(j==0||i==0){
                   dp[i][j]=0;
               }
               
              else if(j>=arr[i-1]){
                   dp[i][j]=max(dp[i-1][j],dp[i-1][j-arr[i-1]]+arr[i-1]);
               }else{
                   dp[i][j]=dp[i-1][j];
               }
        }
    }
    return sum-2*dp[n][temp];
}

int findMin(int arr[], int n){
    int sumTotal = 0;
    for(int i=0;i<n;i++){
        sumTotal+=arr[i];
    }
    return recur(arr, n, 0, sumTotal);
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    cout<<findMin(a, n)<<endl;
	}
	return 0;
}