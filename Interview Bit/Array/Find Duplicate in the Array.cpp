int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    //This solution is correct but it will give Memoy Limit exceed
    // unordered_map<int, int>m;
    // int n = A.size();
    // int temp, max = 0;
    // for(int i=0;i<n;i++)
    //     m[A[i]]++;
    // for(auto itr = m.begin();itr!=m.end();itr++){
    //     if(itr->second > max){
    //         max = itr->second;
    //         temp = itr->first;
    //     }
    // }
    // return temp;
    
    //This method is somewhat difficult to understand it is two pointer algorithm
    // int slow = A[0];
    // int fast = A[A[0]];
    // while(slow!=fast){
    //     slow = A[slow];
    //     fast = A[A[fast]];
    // }
    // fast = 0;
    // while(slow!=fast){
    //     slow = A[slow];
    //     fast = A[fast];
    // }
    // if(slow==0)return -1;
    // return slow;
    int n = A.size();
    bool a[n];
    for(int i=0;i<n;i++)a[i]=false;
    for(int i=0;i<n;i++){
        if(!a[A[i]])a[A[i]]=true;
        else return A[i];
    }
    return -1;
}
