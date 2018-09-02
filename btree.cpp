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

struct Node * FindMax(struct Node * root) {
	if(root->right!=NULL)
		root=FindMax(root->right);
	return(root);
}

struct Node * deletion(struct Node * root,int y) {
	struct Node *temp;
	if(root==NULL) 	{
	cout<<"the tree is empty plz enter any element in the tree then try to delete any element";}
	else if(y > root->Key) {
		root->right = deletion(root->right,y);	
	}
	else if(y < root->Key) {
		root->left=deletion(root->left,y);
	}
	else {
		if(root->left==NULL) {
			temp=root->right;
			free(root);
			return temp;
		}
		if(root->right==NULL) {	
			temp=root->left;
			free(root);	
			return temp;
		}
		else if(root->left && root->right) {
			temp = FindMax(root->left);
			root->Key = temp->Key;
			root->left = deletion(root->left, root->Key);
		}

	    }
	return(root);
}

int main() {


	int n, x,y;
	cout<<"enter the number of elements in the tree : ";
	cin>>n;
	for(int i=0;i<n;i++) {	
		cout<<"enter the next element you want to insert : ";
		cin>>x;	
		root = insert(root, x);
		insert(root,x);
	}
display(root);
	cout<<"enter thee element you want to delete : ";
	cin>>y;

 root = deletion(root, y);
	display(root);
	return 0;

}
