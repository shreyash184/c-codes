#include <iostream>
using namespace std;

struct Node 
{
    int data;
    struct Node * left;
    struct Node * right;
};
struct Node* newNode(int data)
{
    struct Node * n=(struct Node*)malloc(sizeof(struct Node));
    n->data=data;
    n->left=n->right=NULL;
    return n;
}
int height(struct Node *root)
{
    if(root==NULL)
        return 0;
    else
        {
            int lh=height(root->left);
            int rh=height(root->right);
            if(lh>rh)
                return lh+1;
            else 
                return rh+1;
        }
}
int main() {
    struct Node *root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left = newNode(4); 
    root->left->right = newNode(5);  
    cout<<"The Max height of the Avl tree is "<<height(root);
	return 0;
}
