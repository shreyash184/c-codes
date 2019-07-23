#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        //aabcccccaaa - a2blc5a3
        string s;
        cin>>s;
        int n = s.length();
        string ans="";
        map<int, int>m;
        for(int i = 0;s[i]!='\0';i++){
            if(s[i]==s[i+1]){
                m[s[i]]++;
            }else{
                //ans+=s[i-1]+((char)m[s[i-1]])-'0';
                int x = m[s[i-1]]+1;
                //cout<<x<<endl;
                ans+=s[i-1]+to_string(x);
                //cout<<m[s[i-1]]+1<<endl;
                m[s[i-1]]=0;
            }
        }
        int len = ans.length();
        if(n>len){
            cout<<ans<<endl;
        }else{
            cout<<s<<endl;
        }
    }
    return 0;
}
