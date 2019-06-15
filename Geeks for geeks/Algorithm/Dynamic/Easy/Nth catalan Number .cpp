#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision;
using namespace std;
//This is Recursive Approach 
//Time Complexity exponential
/*
int Cat(int n){
    if(n<=1){
        return 1;
    }else{
        unsigned int res = 0;
        for(int i=0;i<n;i++)
            res+=Cat(i)*Cat(n-i-1);
        return res;
    }
}
*/
//This is Dynamic Apraoch 
//Time Complexity O(n2)
int128_t Cat(cpp_int n){
    int128_t res[n+1];
    res[0]=res[1]=1;
    for(int128_t i=2;i<=n;i++){
        res[i]=0;
        for(int128_t j=0;j<i;j++){
            res[i]+=res[j]*res[i-j-1];
        }
    }
    return res[n];
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int128_t n;
	    cin>>n;
	    cout<<Cat(n)<<endl;
	}
	return 0;
}


//Submitted solution
#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp> 
using boost::multiprecision::cpp_int;
using namespace std;
cpp_int coefficient(int n,int k){
    cpp_int res=1;
    for(int i=0;i<k;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    cpp_int result=coefficient(2*n,n);
    cout<<result/(n+1)<<endl;
    
   }
}