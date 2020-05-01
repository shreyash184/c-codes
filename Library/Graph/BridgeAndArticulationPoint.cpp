#include<bits/stdc++.h>
#define pb push_back
using namespace std;

vector<int>adj[10001];
vector<bool>vis;
vector<int> disc, low;
vector<int>Points;
vector<pair<int, int>>bridges;
vector<int>parent;
int timer;

void dfs1(int v, int p){
    vis[v] = true;
    disc[v] = low[v] = timer++;
    int children = 0;
    for(auto u : adj[v]){
        if(u == p)continue;
        if(vis[u]){
            low[v] = min(low[v], low[u]);
        }else{
            dfs1(u, v);
            low[v] = min(low[v], low[u]);
            if(low[u] >= disc[v] && p != -1){
                Points.pb(v);
            }
            ++children;
        }
    }
    if(p == -1 && children > 1){
        Points.pb(v);
    }
}

void bridge(int v){
    vis[v] = true;
    disc[v] = low[v] = ++timer;
    for(int u : adj[v]){
        if(!vis[u]){
            parent[u] = v;
            bridge(u);
            low[v] = min(low[v], low[u]);
            if(low[u] > disc[v]){
                bridges.pb({v, u});
            } 
        }
        if(u != parent[v]){
            low[v] = min(low[v], low[u]);
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    vis.assign(n, false);
    disc.assign(n, -1);
    low.assign(n, -1);
    timer = 0;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            dfs1(i, -1);
        }
    }
    cout<<Points.size()<<endl;
    reverse(Points.begin(), Points.end());
    for(int i : Points){
        cout<<i<<" ";
    }
    cout<<endl;
    vis.assign(n, false);
    disc.assign(n, -1);
    low.assign(n, -1);
    timer = 0;
    parent.assign(n, -1);
    for(int i=0;i<n;i++){
        if(!vis[i]){
            bridge(i);
        }
    }
    cout<<bridges.size()<<endl;
    reverse(bridges.begin(), bridges.end());
    for(auto i : bridges){
        cout<<i.first<<" "<<i.second<<endl;
    }
}