#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ull int n,k;
    cin>>n>>k;
    ull int a[n];
    for(ull int i=0;i<n;i++){
        cin>>a[i];
    }
    map<ull int, ull int>ma;
    deque<ull int>dq;
    ull int i=0;
    ull int Max = *max_element(a, a+n);
    if(Max < k){
        for(;i<k && i<n;i++){
            if(ma[a[i]] == 0){
                dq.push_front(a[i]);
                ma[a[i]]++;
            }
        }
    }else{
        while(dq.size()!=k && i<n){
            if(ma[a[i]] == 0){
                dq.push_front(a[i]);
                ma[a[i]]++;
            }
            i++;
        }
    }
    for(;i<n;i++){
        if(ma[a[i]] == 0){
            dq.push_front(a[i]);
            ma[a[i]]++;
            ma[dq.back()]--;
            dq.pop_back();
        }
    }
    cout<<dq.size()<<endl;
    while(!dq.empty()){
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
    cout<<endl;
}