#include<bits/stdc++.h>
using namespace std;

void minCoins(int coins[], int v){
    vector<int>ans;
    for(int i=9;i>=0;i--){
        while(v>=coins[i]){
            v-=coins[i];
            ans.push_back(coins[i]);
        }
    }
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
}

int main()
 {
	//code
	int coins[] = {1,2,5,10,20,50,100,200,500,2000};
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    minCoins(coins, n);
	    cout<<endl;
	}
	return 0;
}