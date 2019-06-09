#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    int s[n+1];
    for(int i=0;i<=11;i++){
        s[i]=i;
    }
    for(int i=12;i<=n;i++){
        s[i]=max(s[i/2]+s[i/3]+s[i/4], i);
    }   
    return s[n];
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<sum(n)<<endl;
	}
	return 0;
}

//RECURSIVE APPROACH
// #include<bits/stdc++.h>
// using namespace std;

// int sum(int n){
//     if(n<12){
//         return n;
//     }else{
//         return max(n,sum(n/2)+sum(n/3)+sum(n/4));
//     }
// }

// int main()
//  {
// 	//code
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n;
// 	    cin>>n;
// 	    cout<<sum(n)<<endl;
// 	}
// 	return 0;
// }