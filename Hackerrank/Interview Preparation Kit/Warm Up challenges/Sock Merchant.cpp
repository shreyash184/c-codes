// Complete the sockMerchant function below.
int sockMerchant(int n, vector<int> ar) {

    unordered_map<int, int>m;
    for(int i=0;i<ar.size();i++){
        m[ar[i]]++;
    }
    int count = 0;
    unordered_map<int, int>::iterator itr;
    for(itr = m.begin(); itr!=m.end();itr++){
            count = count+(itr->second)/2;
    }
    return count;
}