#include <bits/stdc++.h>
using namespace std;
#define Fo(i, n) for(int i=0;i<n;i++)
#define F1(i, n) for(int i=1;i<=n;i++)
#define int long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define PI 3.1415926535897932384626
#define endl '\n'
#define INF INT_MAX
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef vector<vi> vvi;
const int mod = 1000000007;

//This is 1-based indexing change accordingly

int a[100001];
int st[400004];

//si -> segment Index
//ss -> segment start
//se -> segment end
void buildTree(int si, int ss, int se){
    //If leaf node reached
    if(ss == se){
        st[si] = a[ss];
        return;
    }
    int mid = (ss+se)/2;
    buildTree(2 * si, ss, mid);
    buildTree(2 * si + 1, mid + 1, se);

    st[si] = min(st[2*si], st[2*si+1]);
}

//qs -> query start
//qe -> query end
int query(int si, int ss, int se, int qs, int qe){
    //Completely outside
    if(qs > se || qe < ss){
        return INF;
    }
    //Completely inside
    if(ss>=qs && se<=qe){
        return st[si];
    }
    //Else partial overlapping so recursive calls
    int mid = (ss+se)/2;
    int l = query(2*si, ss, mid, qs, qe);
    int r = query(2*si+1, mid+1, se, qs, qe);

    //return min of left and right subtree within query range
    return min(l, r);
}

void update(int si, int ss, int se, int id, int val){
    if(ss > se)return;
    if(id < ss || id > se)return;
    if(ss == se){
        st[si] = val;
    }else{
        int mid = (ss+se)/2;
        update(2*si, ss, mid, id, val);
        update(2*si+1, mid+1, se, id, val);
        st[si] = min(st[2*si], st[2*si+1]);
    }
}

int32_t main(){
    fast;
    int n, q;
    cin>>n>>q;
    F1(i, n)cin>>a[i];
    buildTree(1, 1, n);
    int l, r;
    char op;
    while(q--){
        cin>>op>>l>>r;
        if(op == 'q')
            cout<<query(1, 1, n, l, r)<<endl;
        else{
            a[l] = r;
            update(1, 1, n, l ,r);
        }
    }
    return 0;
}
