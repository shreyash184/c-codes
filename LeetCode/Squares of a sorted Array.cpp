class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        for(int i=0;i<A.size();i++){
            A[i] = abs(A[i]);
        }
        sort(A.begin(), A.end());
        for(int i=0;i<A.size();i++){
            A[i] = A[i]*A[i];
        }
       // reverse(begin(A), end(A));
        return A;
    }
};