#include<bits/stdc++.h>
using namespace std;

struct Job{
    int id;
    int deadLine;
    int profit;
};

bool comp(Job a, Job b){
    return a.profit > b.profit;
}

bool cam(Job a, Job b){
    return a.deadLine > b.deadLine;
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    Job a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i].id;
	        cin>>a[i].deadLine;
	        cin>>a[i].profit;
	    }
	   // sort(a, a+n, cam);
	   // int maxElement = a[0].deadLine;
	   // sort(a, a+n, comp);
	   // int count=1;
	   // int arr[maxElement+1];
	   // memset(arr, 0, sizeof(arr));
	   // arr[1]=a[0].profit;
	   // //cout<<arr[1];
	   // for(int i=1;i<n;i++){
	   //     if(arr[a[i].deadLine]==0){
	   //         arr[a[i].deadLine]=a[i].profit;
	   //         count++;
	   //     }
	   // }
	   // int maxProfit = 0;
	   // //cout<<maxElement;
	   // for(int i=0;i<=maxElement;i++)
	   //     maxProfit+=arr[i];
	   // cout<<count<<" "<<maxProfit<<endl;
	   sort(a, a+n, comp);
	   int result[n];
	   bool slot[n];
	   for(int i=0;i<n;i++)
	        slot[i] = false;
	   int count=0;
	   for(int i=0;i<n;i++){
	       for(int j=min(n, a[i].deadLine)-1;j>=0;j--){
	           if(slot[j]==false){
	               result[j] = i;
	               count++;
	               slot[j]=true;
	               break;
	           }
	       }
	   }
	   int sum=0;
	   for(int i=0;i<n;i++){
	       if(slot[i]){
	           sum+=a[result[i]].profit; 
	       }
	   }
	   cout<<count<<" "<<sum<<endl;
	}
	return 0;
}