#include<bits/stdc++.h>
using namespace std;

int isSafe(int M[][1000], int row, int col, 
           bool visited[][1000], int n, int m) 
{ 
    return (row >= 0) && (row < n) && (col >= 0) && (col < m) && (M[row][col] && !visited[row][col]); 
} 
void DFS(int M[][1000], int row, int col, 
         bool visited[][1000], int &count, int n, int m) 
{ 
    static int rowNbr[] = { -1, -1, -1, 0, 0, 1, 1, 1 }; 
    static int colNbr[] = { -1, 0, 1, -1, 1, -1, 0, 1 }; 
    visited[row][col] = true; 
    for (int k = 0; k < 8; ++k) 
        if (isSafe(M, row + rowNbr[k], col + colNbr[k], visited, n, m)) {
            count++;
            DFS(M, row + rowNbr[k], col + colNbr[k], visited, count, n, m);
        }
} 

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int a[1000][1000];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            cin>>a[i][j];
	        }
	    }
	    int result = INT_MIN;
	    bool vis[1000][1000] = {false};
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            int count = 1;
	            if(a[i][j]==1 && !vis[i][j]){
	                DFS(a, i, j, vis, count, n, m);
	            }
	            result = max(result, count);
	        }
	    }
	    cout<<result<<endl;
	}
	return 0;
}