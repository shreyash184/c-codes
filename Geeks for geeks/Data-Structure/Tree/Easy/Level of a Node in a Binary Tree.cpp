{
#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};
int getLevel(struct Node *node, int target);
struct Node* newNode(int data)
{
	struct Node *temp = new struct Node;
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}
int main()
{
  int t;
  struct Node *child;
  scanf("%d
", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d
",&n);
     struct Node *root = NULL;
     if(n==1)
     {
        int a;
        cin>>a;
        cout<<a<<endl;
     }else{
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
      //  cout << n1 << " " << n2 << " " << (char)lr << endl;
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
     int a;
     cin>>a;
    cout<<getLevel(root, a)<<endl;
  }
  }
  return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
/*
Structure of the node of the binary tree is
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};
*/
// function should return level of the target node


int getLevel(struct Node *node, int target)
{
	//code here
	int level = 1;
	queue<struct Node *>q;
	q.push(node);
	q.push(NULL);
	while(!q.empty()){
	    struct Node* temp = q.front();
	    q.pop();
	    if(temp == NULL){
	        if(q.front()!=NULL)q.push(NULL);
	        level+=1;
	    }else{
	        if(temp->data == target){
	            return level;
	        }
	        if (temp->left) { 
                q.push(temp->left); 
            } 
            if (temp->right) { 
                q.push(temp->right); 
            } 
	    }
	}
	return 0;
}
