{

#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
Node* insert(Node* node, int data);
void inorder(Node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node *root;
        Node *tmp;
        root = NULL;
        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            root = insert(root, k);
        }
        inorder(root);
        cout<<endl;
}
}

}
/*This is a function problem.You only need to complete the function given below*/

/* The structure of a BST node is as follows:
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
}; */
/* This function should insert a new node with 
  given data and return root of the modified tree  */
Node* insert(Node* node, int data)
{
    // Your code here
    if(node == NULL ){ node = new Node(data); return node;}
    if(node->data > data){
        node->left = insert(node->left, data);
    }
    if(node->data<data)
        node->right = insert(node->right, data);
    return node;
}
