#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    unordered_map<char, int>map;
	    int flag = 0;
	    for(int i = 0;i<s.length();i++){
	        map[s[i]]++;
	        if(map[s[i]] > 1){
	            cout<<s[i]<<endl;
	            flag=1;
	            break;
	        }
	    }
	    if(!flag){
	        cout<<"-1"<<endl;
	    }
	}
	return 0;
}