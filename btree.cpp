#include <bits/stdc++.h>
using namespace std;

struct Node {
	int Key;
	struct Node * right,*left;
}*root=NULL;
struct Node *newNode(int item)
{
    struct Node *temp =  (struct Node *)malloc(sizeof(struct Node));
    temp->Key = item;
    temp->left = temp->right = NULL;
    return temp;
}
 

struct Node * insert(struct Node * Node , int x) {
	
	
	if(Node==NULL) {
		return newNode(x);
	}
	if(Node->Key>x) {
		Node->left = insert(Node->left,x);
	}
	 else if(Node->Key<x) {
		Node->right = insert(Node->right,x);
	}
	return Node;
}

void display(struct Node * root) {
	if(root!=NULL) {
		display(root->left);	
		cout<<root->Key<<endl;
		display(root->right);
	}
}

int main() {

	int n, x;
	cout<<"enter the number of elements in the tree : ";
	cin>>n;
	for(int i=0;i<n;i++) {	
		cout<<"enter the next element you want to insert : ";
		cin>>x;	
		root = insert(root, x);
		insert(root,x);
	}
	display(root);
	return 0;

}
