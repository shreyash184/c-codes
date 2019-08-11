#include<bits/stdc++.h>
using namespace std;
struct Point{
  int x,y;  
};
bool isDilem(Point t){
    return (t.x==-1 && t.y==-1);
}
bool check(int a[1000][1000], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==1){
                return true;
            }
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
	    int n,m;
	    cin>>n>>m;
	    int a[1000][1000];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            cin>>a[i][j];
	        }
	    }
	   // for(int i=0;i<n;i++){
	   //         for(int j=0;j<m;j++){
	   //             cout<<a[i][j]<<" ";
	   //         }
	   //         cout<<endl;
	   //     }
	   //     cout<<endl;
	    queue<Point>q;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(a[i][j]==2){
	                q.push({i,j});
	            }
	        }
	    }
	    q.push({-1,-1});
	    int ans = 0;
	    while(!q.empty()){
	        bool flag = false;
	        while(!isDilem(q.front())){
	            Point p = q.front();
	            if(p.x < n-1 && a[p.x+1][p.y]==1){
	                if(!flag){ans++;flag = true;}
	                a[p.x+1][p.y] = 2;
	                q.push({p.x+1, p.y});
	            }
	            if(p.x>0 && a[p.x-1][p.y] == 1){
	                if(!flag){ans++;flag = true;}
	                a[p.x-1][p.y] = 2;
	                q.push({p.x-1, p.y});
	            }
	            if(p.y < m-1 && a[p.x][p.y+1]==1){
	                if(!flag){ans++;flag = true;}
	                a[p.x][p.y+1] = 2;
	                q.push({p.x, p.y+1});
	            }
	            if(p.y > 0 && a[p.x][p.y-1]==1){
	                if(!flag){ans++;flag = true;}
	                a[p.x][p.y-1] = 2;
	                q.push({p.x, p.y-1});
	            }
	            q.pop();
	        }
	        q.pop();
	        if(!q.empty()){
	            q.push({-1,-1});
	        }
	    }
	    ans = (check(a, n, m)) ? -1 : ans;
	   // for(int i=0;i<n;i++){
	   //         for(int j=0;j<m;j++){
	   //             cout<<a[i][j]<<" ";
	   //         }
	   //         cout<<endl;
	   //     }
	   //     cout<<endl;
	    cout<<ans<<endl;
	}
	return 0;
}