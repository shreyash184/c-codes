#include <bits/stdc++.h>
#define FOR(i, n) for(int i=0;i<n;i++)
#define blk_sz 500
#define endl '/'
using namespace std;

int fre[1000001];
int ans[200001];
int a[200001];
int sum = 0;

struct query{
    int l, r, pos;
};

bool comp(query a,  query b){
    if(a.l/blk_sz != b.l/blk_sz){
        return a.l/blk_sz < b.l/blk_sz;
    }
    return a.r < b.r;
}

void add(int pos){
    int pref = fre[a[pos]];
    int currf = ++fre[a[pos]];
    sum-=(pref * pref)*a[pos];
    sum+=(currf*currf)*a[pos];
}

void remov(int pos){
    int pref = fre[a[pos]];
    int currf = --fre[a[pos]];
    sum-=(pref * pref)*a[pos];
    sum+=(currf * currf)*a[pos];
}
query qa[200001];

int32_t main()
{
    //Use fast I/O
    int n, q;
    cin>>n>>q;
    FOR(i, n){
        cin>>a[i];
    }
    int x,y;
    FOR(i, q){
        cin>>x>>y;
        qa[i].l = x;
        qa[i].r = y;
        qa[i].pos = i;
    }
    sort(qa, qa+q, comp);
    int ML=0, MR=-1;
    FOR(i, q){
        int L = qa[i].l;
        int R = qa[i].r;
        L--;
        R--;
        while(ML > L){
            ML--;
            add(ML);
        }
        while(MR < R){
            MR++;
            add(MR);
        }
        while(ML < L){
            remov(ML);
            ML++;
        }
        while(MR > R){
            remov(MR);
            MR--;
        }
        ans[qa[i].pos] = sum;
    }
    FOR(i, q){
       cout<<ans[i]<<endl;
    }
    return 0;
}
