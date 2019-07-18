#define ll long long
ll int recur(int x){
    if(x==0)return 0;
    if(x==1 || x==2)return 1;
    ll int start = 1;
    ll int end = x;
    ll int ans;
    while(start <= end){
        ll int mid = (start+end)/2;
        if(mid*mid == x)
            return mid;
        if(mid*mid<x){
            start=mid+1;
            ans=mid;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}
int Solution::sqrt(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    return recur(A);
}