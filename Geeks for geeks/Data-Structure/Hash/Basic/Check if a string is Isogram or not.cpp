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
	    for(int i=0;i<s.length();i++){
	        map[s[i]]++;
	    }
	    int count = 1;
	    unordered_map<char, int>:: iterator itr;
	    for(itr = map.begin();itr!=map.end();itr++){
	        if(itr->second > 1){
	            count = 0;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}