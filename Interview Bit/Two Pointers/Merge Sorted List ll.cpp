void Solution::merge(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i=0,j=0,k=0;
    int n1 = A.size();
    int n2 = B.size();
    while(i<n1 && j<n2){
        if(A[i]>=B[j]){
            A.push_back(B[j++]);
        }else{
            A.push_back(A[i++]);
        }
    }
    while(i!=n1){
        A.push_back(A[i++]);
    }
    while(j!=n2){
        A.push_back(B[j++]);
    }
    reverse(begin(A), end(A));
    A.resize(n1+n2);
    reverse(begin(A), end(A));
}
