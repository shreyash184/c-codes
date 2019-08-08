/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<int>st;
        int n = s.length();
        int start = 0;
        int end = n-1;
        int count = 0;
        while(start<=end){
            if(s[start] == '(' && s[end] == ')'){
                count++;
                start++;
                end--;
            }else if(s[start] == '(' && s[end]!=')'){
                end--;
            }else if(s[start] != '(' && s[end] == ')'){
                start++;
            }else{
                start++;
                end--;
            }
        }
        cout<<2*count<<endl;
    }
    return 0;   
}