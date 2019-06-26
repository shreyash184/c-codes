long repeatedString(string s, long n) {
    long len = s.length();
    long divided = n/len;
    long multi = divided*len;
    long diff = n-multi;
    long total = 0;
    unordered_map<char, long>m;
    for(long i=0;i<len;i++){
        m[s[i]]++;
    }
    long x = m['a']*divided;
    m['a']=0;
    total+=x;
    for(long i=0;i<diff;i++){
        m[s[i]]++;
    }
    total += m['a'];
    return total;
}