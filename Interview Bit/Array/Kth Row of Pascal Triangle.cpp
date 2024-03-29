vector<int> Solution::getRow(int A) {
    vector<vector<int>> r(A+1);

    for (int i = 0; i < A+1; i++) {
        r[i].resize(i + 1);
        r[i][0] = r[i][i] = 1;
        for (int j = 1; j < i; j++)
            r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
    }
    vector<int>v(A+1);
    for(int i=0;i<A+1;i++){
        v.push_back(r[A][i]);
    }
    reverse(v.begin(), v.end());
    v.resize(A+1);
    return v;
}
