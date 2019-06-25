{

#include <bits/stdc++.h>
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
Node *insert(Node *root,int data)
{
    if(root==NULL)
    root=new Node(data);
    else if(data<root->data)
    root->left=insert(root->left,data);
    else
    root->right=insert(root->right,data);
    
    return root;
}
//Position this line where user code will be pasted.
int main() {
    
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        Node *root=NULL;
        int sizeOfArray;
        cin>>sizeOfArray;
        int arr[sizeOfArray];
        
        for(int i=0;i<sizeOfArray;i++)
        cin>>arr[i];
        
        for(int i=0;i<sizeOfArray;i++)
        {
            root=insert(root,arr[i]);
        }
        int l,h;
        cin>>l>>h;
        printNearNodes(root,l,h);
        cout<<endl;
    }
	return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
/* The structure of a BST Node is as follows:
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
*/
#include <bits/stdc++.h>
void inorder(struct Node* root,int l, int h){
    if(root==NULL)return;
        inorder(root->left, l, h);
        if(root->data <= h && root->data>=l)
        cout<<root->data<<" ";
        inorder(root->right, l, h);
}
void printNearNodes(Node *root, int l, int h)
{
  // your code goes here
  inorder(root, l , h);
}
