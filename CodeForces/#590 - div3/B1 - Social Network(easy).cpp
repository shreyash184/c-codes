#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;
int main(){
    ull int n,k;
    cin>>n>>k;
    ull int a[n];
    for(ull int i=0;i<n;i++){
        cin>>a[i];
    }
    deque<ull int>dq;
    ull int i=0;
    ull int Max = *max_element(a, a+n);
    if(Max < k){
        for(;i<k && i<n;i++){
            if(find(dq.begin(), dq.end(), a[i]) == dq.end()){
                dq.push_front(a[i]);
            }
        }
    }else{
        while(dq.size()!=k && i<n){
            if(find(dq.begin(), dq.end(), a[i]) == dq.end()){
                dq.push_front(a[i]);
            }
            i++;
        }
    }
    for(;i<n;i++){
        if(find(dq.begin(), dq.end(), a[i]) == dq.end()){
            dq.push_front(a[i]);
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