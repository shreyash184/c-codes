#include <bits/stdc++.h>
using namespace std;

int LCS(string s1, string s2, int n, int m){
    int count=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(s1[j]==s2[i]){
                count++;break;
            }
        }
    }
    return count;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s1,s2;
	    cin>>s1>>s2;
	    cout<<LCS(s1,s2,s1.length(),s2.length())<<endl;
	}
	return 0;
}
