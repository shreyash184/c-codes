{
#include<bits/stdc++.h>
using namespace std;
struct Node{
	char data;
	Node *left,*right;
};
Node *newNode(char Data)
{
    Node *new_node = new Node;
    new_node->data = Data;
    new_node->left = new_node->right = NULL;
    return new_node;
}
void preorder(Node *root){
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
Node *convertExpression(string str,int i);
int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		Node *root=convertExpression(str,0);
		preorder(root);
		cout<<endl;
	}
}
}
/*This is a function problem.You only need to complete the function given below*/
/*Complete the function below
Node is as follows
struct Node{
	char data;
	Node *left,*right;
};
*/

Node *convertExpression(string str,int i)
{
    //add code here.
    if(i>str.length()){
        return NULL;
    }
    Node *root = newNode(str[i]);
    i++;
    if(i<str.length() && str[i] == '?'){
        root->left = convertExpression(str, i+1);
    }else if(i<str.length() && str[i] == ':'){
        root->right = convertExpression(str, i+1);
    }
    return root;
}