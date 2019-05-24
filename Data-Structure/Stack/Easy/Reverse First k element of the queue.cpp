{
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;
#define ll long long
queue<ll> modifyQueue(queue<ll> q, int k);
int main(){
    ll t;
    cin>>t;
    while(t-->0){
        ll n,k;
        cin>>n>>k;
        queue<ll> q;
        while(n-->0){
            ll a;
            cin>>a;
            q.push(a);
        }
        queue<ll> ans=modifyQueue(q,k);
        while(!ans.empty()){
            int a=ans.front();
            ans.pop();
            cout<<a<<" ";
        }
        cout<<endl;
    }
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
queue<ll> modifyQueue(queue<ll> q, int k)
{
    //add code here.
    stack<ll>s;
    for(int i=0;i<k;i++){
        s.push(q.front());
        q.pop();
    }
    queue<ll>q1;
    while(!s.empty()){
        q1.push(s.top());
        s.pop();
    }
    while(!q.empty()){
        q1.push(q.front());
        q.pop();
    }
    return q1;
}