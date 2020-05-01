#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

vector<int>g[10001];
vector<int>gr[10001];
vector<bool>vis;
vector<int>order, component;

void dfs1(int v){
    vis[v] = true;
    for(auto u : g[v]){
        if(!vis[u]){
            dfs1(u);
        }
    }
    order.pb(v);
}

void dfs2(int v){
    vis[v] = true;
    component.pb(v);
    for(auto u : gr[v]){
        if(!vis[u]){
            dfs2(u);
        }
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        g[a].pb(b);
        gr[b].pb(a);
    }
    vis.assign(n, false);
    for(int i=0;i<n;i++){
        if(!vis[i]){
            dfs1(i);
        }
    }
    vis.assign(n, false);
    for(int i=0;i<n;i++){
        int v = order[n-i-1];
        if(!vis[v]){
            dfs2(v);
            for(int c : component){
                cout<<c<<" ";
            }
            cout<<endl;
            component.clear();
        }
    }
    return 0;
}
