#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<char, int>m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        int x = m['1'];
        if(x%2==0){
            cout<<"LOSE"<<endl;
        }else{
            cout<<"WIN"<<endl;
        }
    }
    return 0;
}
