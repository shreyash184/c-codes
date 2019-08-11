#include<bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
/*  Function to check if elements returned by user 
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
bool check(int V, int* res, vector<int> adj[]){
    bool flag =true;
    for(int i=0;i<V && flag;i++)
    {
        int n=adj[res[i]].size();
        for(auto j : adj[res[i]])
        {
            for(int k=i+1;k<V;k++)
            {
                if(res[k]==j )
                    n--;
            }
        }
        if(n!=0)
            flag =false;
    }
    if(flag==false)
        return 0;
    return 1;
}
// Driver Code
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,E;
        cin>>E>>N;
        int u,v;
        
        vector<int> adj[N];
        
        for(int i=0;i<E;i++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
        }
    
        int *res = topoSort(N, adj);
        
        cout<<check(N, res, adj)<<endl;
       
    }
}

}
/*This is a function problem.You only need to complete the function given below*/
// The Graph structure is as folows
/*  Function which sorts the graph vertices in topological form
*   N: number of vertices
*   adj[]: input graph
*   NOTE: You must return dynamically allocated array 
*/

void tSort(int v, vector<int>adj[], bool vis[], stack<int>&s){
    vis[v] = true;
    for(auto itr = adj[v].begin(); itr != adj[v].end();++itr){
        if(!vis[*itr]){
            tSort(*itr, adj, vis, s);
        }
    }
    s.push(v);
}

int* topoSort(int V, vector<int> adj[])
{
    // Your code here
    stack<int>s;
    bool vis[V] = {false};
    for(int i=0;i<V;i++){
        if(!vis[i]){
            tSort(i, adj, vis, s);
        }
    }
    static int a[55];
    int i=0;
    while(!s.empty()){
        a[i++] = s.top();
        s.pop();
    }
    return a;
}
