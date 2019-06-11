using namespace std;

int rodCutting(int arr[], int n){
    int t[n+1];
    t[0] = 0;
    for(int i=1;i<=n;i++){
        int Max = INT_MIN;
        for(int j=0;j<i;j++){
            Max = max(Max, t[i-j-1]+arr[j]);
        }
        t[i]=Max;
    }
    return t[n];
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n ;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cout<<rodCutting(arr, n)<<endl;
	}
	return 0;
}