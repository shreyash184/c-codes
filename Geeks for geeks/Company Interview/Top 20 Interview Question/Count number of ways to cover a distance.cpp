#include <iostream>

using namespace std;

//Using recursion
//Time Complexity O(3^n)
/*
int print(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }else{
        return print(n-1)+print(n-2)+print(n-3);
    }
}
*/

//Using Dynamic Programming
//Time Complexity O(n)
int print(int n){
    int t[n+3];
    t[0]=1;
    t[1]=1;
    t[2]=2;
    for(int i=3;i<=n;i++){
        t[i]=t[i-1]+t[i-2]+t[i-3];
    }
    return t[n];
}

int main()
{
    cout<<print(4)<<endl;
    return 0;
}
