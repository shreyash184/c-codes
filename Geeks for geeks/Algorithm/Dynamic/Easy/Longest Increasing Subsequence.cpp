#include<bits/stdc++.h>
using namespace std;

int count(string nums, int n) {
       if(n==0){
           return 0;
       }else{
            int LIS[n];
            LIS[0]=1;
            for(int i=0;i<n;i++){
                LIS[i]=1;
                for(int j=0;j<i;j++){
                    if(nums[i]>nums[j] && LIS[i] < LIS[j]+1 ){
                        LIS[i] = LIS[j]+1;
                    }
                }
            }
            return *max_element(LIS, LIS+n);
       }
    }

int main()
 {
	//code
	int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<count(s,s.length())<<endl;
    }
	return 0;
}