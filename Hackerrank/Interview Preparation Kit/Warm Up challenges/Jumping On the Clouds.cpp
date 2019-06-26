// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c) {
    int count = -1;
    int n = c.size();
    for(int i=0;i<n;i++,count++){
        if( i<n-2 && c[i+2] == 0)
            i++;
    }
    return count;
}