#define ll long long 
vector<int> Solution::repeatedNumber(const vector<int> &A) {
    ll int sum = 0;
    ll int sumq = 0;
    ll int n = A.size();
    for(int i=0;i<n;i++){
        sum+=(ll int)A[i];
        sumq+=(ll int )A[i]*(ll int)A[i];
    }
    ll int diff = n*(n+1)/2-sum;
    ll int diff2 = n*(n+1)*(2*n+1)/6-sumq;
    ll int divide = diff2/diff;
    vector<int>v;
    v.push_back((divide-diff)/2);
    v.push_back((divide+diff)/2);
    return v;
}
