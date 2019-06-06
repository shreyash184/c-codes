{
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;
queue<long long int> rev(queue<long long int> q);
int main()
{
    long long int test;
    cin>>test; 
    while(test--)
    {
    queue<long long int> q; 
    long long int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    queue<long long int> a=rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//function Template for C++
queue<long long int> rev(queue<long long int> q)
{
    // add code here.
    stack<long long int>reversed;
    while(!q.empty()){
        reversed.push(q.front());
        q.pop();
    }
    while(!reversed.empty()){
        q.push(reversed.top());
        reversed.pop();
    }
    return q;
}