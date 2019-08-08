{
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main() {
    
	int T;
	cin>>T;
	while(T--)
	{
		int N,M;
		cin>>N>>M;
		vector<int> A[N];
		for(int i=0;i<N;i++){
		    vector<int> temp(M);
		    A[i] = temp;
		    for(int j=0;j<M;j++){
		        cin>>A[i][j];
		    }
		}
		cout<<findIslands(A,N,M)<<endl;
	}
	return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
/*you are required to complete this method*/
/*  Function to find number of islands in the given graph
*   A[]: input array
*   N, M: Row and column of given matrix
*/
bool isSafe(vector<int> A[], int row, int col, int Row, int Col, bool visited[1000][1000]){
    return (row>=0) && (row<Row) && (col>=0) && (col<Col) && (A[row][col] && !visited[row][col]);
}
void DFS(vector<int>A[], int row, int col, bool visited[][1000], int Row, int Col){
    static int rowNum[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    static int colNum[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    visited[row][col] = true;
    for(int k = 0;k < 8;++k){
        if(isSafe(A, row+rowNum[k], col+colNum[k], Row, Col, visited)){
            DFS(A, row+rowNum[k], col+colNum[k], visited, Row, Col);
        }
    }
}
int findIslands(vector<int> A[], int Row, int Col)
{
    // Your code here
    int count = 0;
    bool visited[1000][1000];
    memset(visited, 0, sizeof(visited));
    for(int i=0;i<Row;++i){
        for(int j=0;j<Col;++j){
            if(A[i][j] && !visited[i][j]){
                DFS(A, i, j, visited, Row, Col);
                ++count;
            }
        }
    }
    return count;
}
