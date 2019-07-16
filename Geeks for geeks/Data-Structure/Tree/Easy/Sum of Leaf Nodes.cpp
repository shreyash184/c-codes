{
#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *left, *right;
};
Node *newNode(int data){
	Node *temp = new Node();
	temp->data = data;
	temp->left = temp->right = NULL;
}
int sumLeaf(Node* root);
/* Driver program to test size function*/
int main()
{
  int t;
  struct Node *child;
  scanf("%d", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d",&n);
     struct Node *root = NULL;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (m.find(n1) == m.end())
        {
           parent = newNode(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        child = newNode(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
     cout<<sumLeaf(root)<<endl;
  }
  return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
/*Structure of the node of the binary tree is as
struct Node
{
	int data;
	Node *left, *right;
};*/
// function should return the sum of all the 
// leaf nodes of the binary tree 
int sumLeaf(Node* root)
{
    // Code here
    if(!root)return 0;
    if(!root->left && !root->right)return root->data;
    return sumLeaf(root->left)+sumLeaf(root->right);
}