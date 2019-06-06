{
#include <bits/stdc++.h>
#define MAX 20
using namespace std;
struct Node
{
	int data;
	Node* right, *down;
};
void display(Node* head)
{
    Node* Rp;
	Node* Dp = head;
	while (Dp) {
		Rp = Dp;
		while (Rp) {
			cout << Rp->data << " ";
			Rp = Rp->right;
		}
		//cout << "";
		Dp = Dp->down;
	}
}
Node* constructLinkedMatrix(int mat[MAX][MAX], int n);
// driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int mat[MAX][MAX];
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                cin>>mat[i][j];
        Node* head = constructLinkedMatrix(mat, n);
        if(!head)cout<<"-1";
	    else display(head);
	    cout<<"
";
    }
	return 0;
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*structure of the node of the linked list is as
struct Node
{
	int data;
	Node* right, *down;
};*/
// n is the size of the matrix
// function must return the pointer to the first element 
// of the in linked list i.e. that should be the element at arr[0][0]

struct Node * createNode(int x)
{
    struct Node* n;
    n=(struct Node*)malloc(sizeof(struct Node));
    n->data=x;
    n->right=NULL;
    n->down=NULL;
    return(n);
}

Node * m(int mat[][MAX], int i, int j, int n){
    if(i>n-1 || j>n-1){
        return NULL;
    }    
    struct Node * node = createNode(mat[i][j]);
    node->right = m(mat, i, j+1, n);
    node->down = m(mat, i+1, j, n);
    return node;
    
}

Node* constructLinkedMatrix(int mat[MAX][MAX], int n)
{
    //Lets solve this example by using recursion
    if(n==1){
        Node * node = new Node();
        node->data = mat[0][0];
        node->right = NULL;
        node->down = NULL;
        return node;
    }else{
        return m(mat, 0, 0, n);
    }
}
