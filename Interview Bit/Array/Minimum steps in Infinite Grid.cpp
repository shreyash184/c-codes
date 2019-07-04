int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int count=0;
    for(int i=0;i<A.size();i++){
        if(i == A.size()-1){
            break;
        }else{
            int diffA = abs(A[i]-A[i+1]);
            int diffB= abs(B[i]-B[i+1]);
            if((A[i] == B[i] && A[i+1] == B[i+1]) || diffA == diffB){
                count+=diffA;
            }
            if(diffA>0 && diffB==0){
                count+=diffA;
            }
            else if(diffB>0 && diffA==0){
                count+=diffB;
            }
            else if(diffA!=diffB){
                count+=max(diffA,diffB);
            }
        }
        
    }
    return count;
}
