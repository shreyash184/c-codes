#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int disc[10001];
int low[10001];
vector<int>adj[10001];
vector<bool>vis;
set<int>points;
int timer;

void dfs(int v, int p){
    vis[v] = true;
    disc[v] = low[v] = timer++;
    int children = 0;
    for(auto u : adj[v]){
        if(u == p)continue;
        if(vis[u]){
            low[v] = min(low[v], low[u]);
        }else{
            dfs(u, v);
            low[v] = min(low[v], low[u]);
            if(low[u] >= disc[v] && p != -1){
                points.insert(v);
            }
            ++children;
        }
    }
    if(p == -1 && children > 1){
        points.insert(v);
    }
}

int main(){
    int n,m;
    while(cin>>n>>m){
        if(!n&&!m)break;
        for(int i=0;i<=n;i++)adj[i].clear();
        for(int i=0;i<m;i++){
            int a,b;
            cin>>a>>b;
            adj[a].pb(b);
            adj[b].pb(a);
        }
        timer = 0;
        vis.assign(n, false);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i, -1);
            }
        }
        cout<<points.size()<<endl;
        points.clear();
    }
}
