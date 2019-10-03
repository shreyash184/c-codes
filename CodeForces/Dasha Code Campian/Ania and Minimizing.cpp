#include <bits/stdc++.h>
#define int long long
using namespace std;
// int mod = 1e9 + 7;
main(){
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    if (k == 0){
        cout << s;
        return 0;
    }
    if (n == 1){
        cout << 0;
        return 0;
    }
    if(s[0] != '1'){
        s[0] = '1';
        k--;
    }
    int cnt = 1;
    while (k > 0 && cnt < s.length()){
        if(s[cnt] != '0'){
            s[cnt] = '0';
            k--;
        }
        cnt++;
    }
    cout << s;
}