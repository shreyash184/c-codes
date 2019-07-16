#define ll long long
vector<int> Solution::maxset(vector<int> &A) {
    ll int n = A.size();
    ll int maxSum = 0;
    ll int sum = 0;
    ll int start = 0;
    ll int end = 0;
    ll int startMax = 0;
    ll int endMax = 0;
    while(end < n){
        if(A[end] >= 0){
            sum+=(ll int)A[end];
            if(sum > maxSum){
                maxSum = sum;
                startMax = start;
                endMax = end+1;
            }else if(sum == maxSum){
                if(end+1-start > endMax-startMax){
                    startMax = start;
                    endMax = end+1;
                }
            }
        }else{
            start = end+1;
            sum = 0;
        }
        end++;
    }
    vector<int>v;
    v.clear();
    if(startMax == -1 && endMax == -1)return v;
    for(int i=startMax;i<endMax;i++){
        v.push_back(A[i]);
    }
    return v;
}
