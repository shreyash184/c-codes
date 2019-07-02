#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string a,b;
int ans,sum;
int main(){
	cin >> a >> b;
	for(int i=0;i<b.size();i++)
		if(a[i]!=b[i])sum++;
	if(sum%2==0)ans++;
	for(int i=b.size();i<a.size();i++){
		sum+=(a[i]==a[i-b.size()])?0:1;
		if(sum%2==0)ans++;
	}
	cout << ans;
    return 0;
}