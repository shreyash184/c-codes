#include<bits/stdc++.h>
#define MEM(a, b) memset(a, b, sizeof(a)) 
using namespace std;
struct Point{
    int x, y;
    int dist;
};
bool isSafe(int x, int y, int mat[1000][1000], int Row, int Col){
    return (x<Row)&&(x>=0)&&(y<Col)&&(y>=0)&&(mat[x][y]==-1);
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int kx,ky;
	    int dx,dy;
	    cin>>kx>>ky>>dx>>dy;
	    kx--;
	    ky--;
	    dx--;
	    dy--;
	    int mat[1000][1000];
	    MEM(mat, -1);
	    queue<Point>q;
	    q.push({kx, ky, 0});
	    mat[kx][ky] = 0;
	    int row[] = {-2, -1, 1, 2, -2, -1, 1, 2}; 
        int col[] = {-1, -2, -2, -1, 1, 2, 2, 1};
	    while(!q.empty()){
	       // bool flag = false;
	        Point p = q.front();
	        q.pop();
	        if(p.x==dx && p.y==dy){
	            cout<<p.dist<<endl;
	            break;
	        }
	        for(int i=0;i<8;i++){
	            int x = row[i]+p.x;
	            int y = col[i]+p.y;
	            if(isSafe(x, y, mat, n, n)){
	                q.push({x, y, p.dist+1});
	                mat[x][y] = 0;
	            }
	        }
	       // if(p.x==dx && p.y==dy){
	       //     break;
	       // }
	       // //Moving up
	       // if(p.x > 0 && mat[p.x-1][p.y]==-1){
	       //     if(!flag)ans++,flag=true;
	       //     mat[p.x-1][p.y] = 0;
	       //     q.push({p.x-1, p.y});
	       // }
	       // //Moving Down
	       // if(p.x<n-1 && mat[p.x+1][p.y]==-1){
	       //     if(!flag)ans++,flag = true;
	       //     mat[p.x+1][p.y] = 0;
	       //     q.push({p.x+1, p.y});
	       // }
	       // //Moving Left
	       // if(p.y > 0 && mat[p.x][p.y-1]==-1){
	       //     if(!flag)ans++,flag= true;
	       //     mat[p.x][p.y-1] = 0;
	       //     q.push({p.x, p.y-1});
	       // }
	       // //Moving Right
	       // if(p.y < n-1 && mat[p.x][p.y+1]==-1){
	       //     if(!flag)ans++,flag=true;
	       //     mat[p.x][p.y+1]=0;
	       //     q.push({p.x, p.y+1});
	       // }
	    }
	   // for(int i=0;i<n;i++){
	   //     for(int j=0;j<n;j++){
	   //         cout<<mat[i][j]<<" ";
	   //     }
	   //     cout<<endl;
	   // }
	    //cout<<ans<<endl;
	}
	return 0;
}