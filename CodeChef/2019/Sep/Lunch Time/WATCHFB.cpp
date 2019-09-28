#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isPos(ll int x){
    return (x>=0);
}

int main(){
    ll int t;
    cin>>t;
    while(t--){
        ll int n;
        cin>>n;
        ll int pa,fav,other;
        ll int a,score1,score2;
        for(ll int i=0;i<n;i++){
            cin>>a>>score1>>score2;
            if(a==1){
                cout<<"YES"<<endl;
                fav=score1;
                other=score2;
                continue;
            }
            else{
                if(score1==score2){
                    cout<<"YES"<<endl;
                    fav=score1;
                    other=score2;
                    continue;
                }else{
                    if(fav > score1){
                        fav = score2;
                        other = score1;
                        cout<<"YES"<<endl;
                    }else if(score2<fav){
                        fav = score1;
                        other = score2;
                        cout<<"YES"<<endl;
                    }else if(score2<other){
                        other = score2;
                        fav = score1;
                        cout<<"YES"<<endl;
                    }else if(score1<other){
                        other = score1;
                        fav = score2;
                        cout<<"YES"<<endl;
                    }else{
                        cout<<"NO"<<endl;
                    }
                }
            
            }
        }
    }
}
