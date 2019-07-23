void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = A.size();
    int m = A[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j]==0)A[i][j]=1;
            else A[i][j]=0;
        }
    }
    bool rowFlag = false;
    bool colFlag = false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 && A[i][j] == 1)rowFlag = true;
            if(j==0 && A[i][j] == 1)colFlag = true;
            if(A[i][j]==1){
                A[0][j] = 1;
                A[i][0] = 1;
            }
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(A[0][j]==1 || A[i][0]==1){
                A[i][j] = 1;
            }
        }
    }
    if(rowFlag==true){
        for(int i=0;i<m;i++){
            A[0][i]=1;
        }
    }
    if(colFlag==true){
        for(int i=0;i<n;i++){
            A[i][0]=1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j]==0)A[i][j]=1;
            else A[i][j]=0;
        }
    }
}
