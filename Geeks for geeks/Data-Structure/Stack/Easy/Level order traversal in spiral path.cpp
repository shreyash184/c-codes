{
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
void printSpiral(struct Node *root);
/* Driver program to test above functions*/
int main()
{
   int t;
  scanf("%d
", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d
",&n);
     Node *root = NULL;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
      //  cout << n1 << " " << n2 << " " << (char)lr << endl;
        if (m.find(n1) == m.end())
        {
           parent = new Node(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        Node *child = new Node(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
    printSpiral(root);
    cout<<endl;
  }
    return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    truct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */
void printSpiral(Node *root)
{
    //Your code here
    if(!root)
        cout<<0;
    stack<struct Node*>s;
    stack<struct Node *>s1;
    s.push(root);
    while(!s.empty() || !s1.empty()){
        while(!s.empty()){
            struct Node * node = s.top();
            s.pop();
            cout<<node->data<<" ";
            if(node->right)
                s1.push(node->right);
            if(node->left)
                s1.push(node->left);
        }
        while(!s1.empty()){
            struct Node * node = s1.top();
            s1.pop();
            cout<<node->data<<" ";
            if(node->left)
                s.push(node->left);
            if(node->right)
                s.push(node->right);
        }
    }
    
}
