#include<bits/stdc++.h>
using namespace std;
struct Point{
    int x, y;
};
bool isSafe(int a[][1000], int r, int c, int R, int C, bool vis[][1000]){
    return (r>=0)&&(r<R)&&(c>=0)&&(c<C)&&((a[r][c]==3||a[r][c]==2) && !vis[r][c]);
}
bool DFS(int a[][1000], int sr, int sc, int dr, int dc, int R, int C, bool vis[][1000]){
    int row[] = {-1,1,0,0};
    int col[] = {0,0,-1,1};
    if(sr==dr && sc==dc)return true;
    vis[sr][sc] = true;
    for(int i=0;i<4;i++){
        if(isSafe(a, sr+row[i], sc+col[i], R, C, vis) && DFS(a, sr+row[i], sc+col[i], dr, dc, R, C, vis)){
            return true;
        }
    }
    return false;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[1000][1000];
	    Point source, dest;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cin>>a[i][j];
	            if(a[i][j]==1){
	                source = {i, j};
	            }
	            if(a[i][j]==2){
	                dest = {i, j};
	            }
	        }
	    }
	    bool vis[1000][1000] = {false};
	    cout<<DFS(a, source.x, source.y, dest.x, dest.y, n, n, vis)<<endl;
	}
	return 0;
}