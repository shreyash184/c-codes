#include<bits/stdc++.h>
#define ull unsigned long long int
#define mod 1000000007
using namespace std;
vector<ull> primes;
void sieve(){
    vector<bool> bt(100001, true);
    bt[0] = false;
    bt[1] = false;
    for(ull i=0; i<100001; i++){
        if(bt[i]){
            for(ull j=i*i; j<100001; j+=i)
                bt[j] = false;
        }
    }
    for(int i=0; i<100001; i++){
        if(bt[i])
            primes.push_back((ull)i);
    }
    return;
}
vector<ull> findpfact(ull x){
    vector<ull> res;
    for(int i=0; i<primes.size(); i++){
        ull prime = primes[i];
        if(x%prime==0){
            while(x%prime==0)
                x /= prime;
            res.push_back(prime);
        }
    }
    if(x>1)
        res.push_back(x);
    return res;
}

ull power(ull x, ull y) {
    ull res = 1;

    while (y > 0) {
        if (y & 1)
            res = (res*x)%mod;
        y = y>>1;
        x = (x*x)%mod;
    }
    return res%mod;
}

/*
ull g(ull x, ull p){
    ull i = 1;
    while(x%power(p, i)!=0){
        if(i<=power(p, i)){
            return 1;
        }
        i++;
    }
    return power(p, i)%mod;
}

ull f(ull x, ull y, vector<ull>pFact){
    ull res = 1;
    for(ull i = 0;i<pFact.size();i++){
        res = (res * g(y, pFact[i])) % mod;
    }
    return res%mod;
}
*/
int main(){
    sieve();
    ull x,n;
    cin>>x>>n;
    vector<ull>pFact = findpfact(x);
    ull res = 1;
    for(ull i = 0;i<pFact.size();i++){
        ull prime = pFact[i];
        ull sumEx = 0;
        while(n/prime > 1){
            sumEx += n/prime;
            prime *= pFact[i];
        }
        if(n/prime == 1)sumEx++;
        res = (res * power(pFact[i], sumEx))%mod;
    }
    cout<<res%mod<<endl;
}
