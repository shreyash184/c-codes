vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int> >a(A,vector<int>(A));
    int n = A;
    int k=0,l=0;
    int i = 1;
    int m = n;
    while(k<n && l<m){
        //Inserting First Row
        for(int j=l;j<m;j++){
            a[k][j] = i;
            i++;
        }
        k++;
        //Inserting Last Column
        for(int j=k;j<n;j++){
            a[j][m-1] = i;
            i++;
        }
        m--;
        //Inserting Last Row
        if(k<n){
            for(int j=m-1;j>=l;j--){
                a[n-1][j] = i;
                i++;
            }
            n--;
        }
        //Inserting first Column
       if(l<m){
            for(int j=n-1;j>=k;j--){
                a[j][l] = i;
                i++;
            }
            l++;
       }
    }
    return a;
}
