// Write your code here
#include<bits/stdc++.h>
#define INF INT_MAX
#define pb push_back
using namespace std;

void restorePath(int s, int t, vector<int>&p){
    vector<int>path;
    for(int v = t;v!=s; v = p[v]){
        path.pb(v);
    }
    path.pb(s);
    reverse(path.begin(), path.end());
    for(int i=0;i<path.size();i++){
        cout<<path[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int, int>>adj[n+1];
        vector<int>d, p;
        vector<bool>u;
        d.assign(n, INF);
        p.assign(n, -1);
        u.assign(n, false);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int w;
                cin>>w;
                if(w==0)continue;
                adj[i].pb({j, w});
                adj[j].pb({i, w});
            }
        }
        int s, ds;
        cin>>s>>ds;
        d[s] = 0;
        for(int i = 0;i<n;i++){
            int v = -1;
            for(int j=0;j<n;j++){
                if(!u[j] && (v==-1 || d[j] < d[v]))
                    v = j;
            }
            if(d[v] == INF)break;
            u[v] = true;
            for(auto edge : adj[v]){
                int to = edge.first;
                int len = edge.second;
                if(d[v]+len < d[to]){
                    d[to] = d[v]+len;
                    p[to] = v;
                }
            }
        }
        cout<<d[ds]<<endl;
        restorePath(s, ds, p);
    }
}