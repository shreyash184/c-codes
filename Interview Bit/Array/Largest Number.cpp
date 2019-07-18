int comp(string X, string Y) 
{ 
    string XY = X.append(Y); 
    string YX = Y.append(X); 
    return XY.compare(YX) > 0 ? 1: 0; 
}
string Solution::largestNumber(const vector<int> &A) {
    string s="";
    vector<string>B;
    for(int i=0;i<A.size();i++){
        B.push_back(to_string(A[i]));
    }
    sort(B.begin(), B.end(), comp);
    for(int i=0;i<B.size();i++){
        s+=B[i];
    }
    int i=0;
    while(s[i]=='0'){
        i++;
    }
    if(i==s.length())
        s = "0";
    return s;
}
