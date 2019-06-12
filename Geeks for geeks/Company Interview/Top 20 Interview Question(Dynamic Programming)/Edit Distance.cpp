#include <bits/stdc++.h>

using namespace std;

int editDistance(string s1, string s2, int m, int n){
    if(m == 0){
        return n;
    }
    if(n == 0){
        return m;
    }
    if(s1[m] == s2[n]){
        return editDistance(s1, s2, m-1, n-1);
    }else{
        return 1+min(editDistance(s1, s2, m, n-1),min(editDistance(s1, s2, m-1, n),editDistance(s1, s2, m-1, n-1)));
    }
}

int main()
{
    string s1 = "sunday";
    string s2 = "saturday";
    cout<<editDistance(s1, s2, s1.length(), s2.length());
    return 0;
}
