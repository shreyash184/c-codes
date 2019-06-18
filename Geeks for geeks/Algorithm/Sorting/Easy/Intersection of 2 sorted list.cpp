{
/*
Given two lists sorted in increasing order, create and return a new list representing the intersection of the two lists. The new list should be made with its own memory — the original lists should not be changed.
For example, let the first linked list be 1->2->3->4->6 and second linked list be 2->4->6->8, then your function should create and return a third list as 2->4->6.
*/
#include<bits/stdc++.h>
using namespace std;
struct Node
{
int val;
struct Node *next;
};
void push(struct Node **root,int data)
{
    Node *newnode=new Node();
    struct Node *prev;
    prev=*root;
    newnode->val=data;
    newnode->next=NULL;
    if(*root==NULL)
    {
        *root=newnode;
        return;
    }
    while(prev->next!=NULL)
        prev=prev->next;
    prev->next=newnode;
}
void print(struct Node *ptr)
{
    if(ptr==NULL)
    {
        cout<<"NO"<<endl;
        return;
    }
    while(ptr!=NULL)
    {
        cout<<ptr->val<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
void intersection(struct Node **head1,struct Node **head2,struct Node **head3);
int main()
{
    struct Node *head1=NULL;
    struct Node *head2=NULL;
    struct Node *head3=NULL;
    int t,n1,n2;
    cin>>t;
    while(t--)
    {
struct Node *head1=NULL;
    struct Node *head2=NULL;
    struct Node *head3=NULL;
  cin>>n1>>n2;
    int k;
    for(int i=0;i<n1;i++)
    {
        cin>>k;
  push(&head1,k);
    }
    for(int i=0;i<n2;i++)
        {
            cin>>k;
            push(&head2,k);
         
        }
       
          intersection(&head1,&head2,&head3);
   print(head3);
  
    }
}

}
/*This is a function problem.You only need to complete the function given below*/
/* The structure of the Linked list Node is as follows:
struct Node {
    int val;
    struct Node* next;
}; */
void intersection(Node **head1, Node **head2,Node **head3)
{
    // Your Code Here
    set<int>s1;
    Node *p=*head1;
    while(p){
        s1.insert(p->val);
        p=p->next;
    }
    Node *q=*head2;
    set<int>s2;
    while(q){
        s2.insert(q->val);
        q=q->next;
    }
    for(auto itr=s2.begin();itr!=s2.end();itr++){
        if(s1.find(*itr)!=s1.end())
            push(head3, *itr);
    }
}