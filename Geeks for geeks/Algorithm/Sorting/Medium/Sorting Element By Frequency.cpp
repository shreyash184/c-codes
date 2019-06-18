#include<bits/stdc++.h>
using namespace std;
bool comp(const pair<int,int>& a,const pair<int,int>& b){
    if(a.second == b.second)
    return a.first < b.first;
    return a.second > b.second; 
}
void Function(int arr[],int n){
    unordered_map<int,int> m;
    for(int i = 0 ; i < n ; i++)
    m[arr[i]]+=1;

    vector<pair<int,int>> v;
    copy(m.begin(),m.end(),back_inserter(v));
    sort(v.begin(),v.end(),comp);
    for(int i = 0 ; i < v.size() ; ++i)
    for(int j = 0 ; j < v[i].second ; ++j)
    cout <<v[i].first<<" ";
    cout << endl;
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
	    unordered_map<int, int>m;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    Function(a,n);
	}
	return 0;
}