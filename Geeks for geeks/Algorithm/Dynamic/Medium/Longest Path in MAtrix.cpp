#include <iostream>
using namespace std;
#define MAX 51
int mat[MAX][MAX];
void DFS(int n,bool v[][MAX],int i,int j,int &len,int curr,int weight){
    
    v[i][j]=true;
    if(i+1<n&&mat[i+1][j]==weight+1&&v[i+1][j]==false){
        DFS(n,v,i+1,j,len,curr+1,weight+1);
    }
    if(j+1<n&&mat[i][j+1]==weight+1&&v[i][j+1]==false){
        DFS(n,v,i,j+1,len,curr+1,weight+1);
    }
    if(i>=0&&mat[i-1][j]==weight+1&&v[i-1][j]==false){
        DFS(n,v,i-1,j,len,curr+1,weight+1);
    }
    if(j>=0&&mat[i][j-1]==weight+1&&v[i][j-1]==false){
        DFS(n,v,i,j-1,len,curr+1,weight+1);
    }
    v[i][j]=false;
    len=max(len,curr+1);
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    for(int i=0;i<n;i++)
	        for(int j=0;j<n;j++)
	            cin>>mat[i][j]; 
	    bool visited[MAX][MAX];
	    for(int i=0;i<n;i++)
	        for(int j=0;j<n;j++)
	            visited[i][j]=false;
	    int len=0;
	    for(int i=0;i<n;i++)
	        for(int j=0;j<n;j++)
	            DFS(n,visited,i,j,len,0,mat[i][j]);
	    printf("%d\n",len);
	}
	return 0;
}