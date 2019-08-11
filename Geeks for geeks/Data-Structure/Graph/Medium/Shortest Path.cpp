
class Item{
    public : 
        int r;
        int c;
        int dist;
        Item(int r,int c, int dist) : r(r), c(c), dist(dist){}
};

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
	    int x, y;
	    cin>>x>>y;
	    bool vis[1000][1000];
	    Item source(0,0,0);
	    queue<Item>q;
	    q.push(source);
	    vis[0][0] = true;
	    int flag = 0;
	   if(a[0][0]==0){
	       cout<<-1<<endl;
	       continue;
	   }
	    while(!q.empty()){
	        Item p = q.front();
	        q.pop();
	        if(p.r == x && p.c==y){
	            flag = 1;
	            cout<<p.dist<<endl;
	            break;
	        }
	        //moving Up
	        if(p.r > 0 && a[p.r-1][p.c]==1 && !vis[p.r-1][p.c]){
	            vis[p.r-1][p.c] = true;
	            q.push(Item(p.r-1, p.c, p.dist+1));
	        }
	        //moving down
	        if(p.r < n-1 && a[p.r+1][p.c] && !vis[p.r+1][p.c]){
	            vis[p.r+1][p.c] = true;
	            q.push(Item(p.r+1, p.c, p.dist+1));
	        }
	        //moving right
	        if(p.c < m-1 && a[p.r][p.c+1] && !vis[p.r][p.c+1]){
	            vis[p.r][p.c+1] = true;
	            q.push(Item(p.r, p.c+1, p.dist+1));
	        }
	        //moving left
	        if(p.c > 0 && a[p.r][p.c-1] && !vis[p.r][p.c-1]){
	            vis[p.r][p.c-1] = true;
	            q.push(Item(p.r, p.c-1, p.dist+1));
	        }
	    }
	    if(flag == 0){
	        cout<<-1<<endl;
	    }
	}
	return 0;
}