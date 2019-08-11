#include<bits/stdc++.h>
using namespace std;

bool isSafe(char a[][1000], bool visited[][1000], int r, int c, int Row, int Col){
    return (r>=0)&&(r<Row)&&(c>=0)&&(c<Col)&&(a[r][c]=='X' && !visited[r][c]);
}

void DFS(char a[][1000], bool visited[][1000], int i, int j, int Row, int Col){
    int row[] = {0,0,-1,1};
    int col[] = {-1,1,0,0};
    visited[i][j] = true;
    for(int k = 0;k<4;k++){
        if(isSafe(a, visited, i+row[k], j+col[k], Row, Col)){
            DFS(a, visited, i+row[k], j+col[k], Row, Col);
        }
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
	    char a[1000][1000];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            cin>>a[i][j];
	            //cout<<a[i][j]<<" ";
	        }
	        //cout<<endl;
	    }
	    bool visited[1000][1000];
	    memset(visited, 0, sizeof(visited));
	    int count = 0;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(a[i][j]=='X' && !visited[i][j]){
	                DFS(a, visited, i, j, n, m);
	                ++count;
	            }
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}