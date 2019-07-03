{
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
Node* addOne(Node *head);
Node* newNode(int key)
{
    Node *temp = new Node;
    temp->data = key;
    temp->next = NULL;
    return temp;
}
Node *ZZZZZZZZZZ(Node *head)
{
    Node * prev   = NULL;
    Node * current = head;
    Node * next;
    while (current != NULL)
    {
        next  = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}
void print(struct Node *head)
{
	Node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
}
// This function mainly uses addOneUtil().
int main() {
	// your code goes here
	int T;
	cin>>T;
	int no;
	while(T--)
	{
		struct Node *head = NULL;
        struct Node *temp = head;
        
		cin>>no;
		while(no!=0)
			{
			if(head==NULL)
			head=temp=newNode(no%10);
			else
			{
				temp->next = newNode(no%10);
				temp=temp->next;
			}
			no/=10;
		}
		head = ZZZZZZZZZZ(head);
		
		head=addOne(head);
		print(head);
		cout<<endl;
	}
	return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
/* Node structure
struct Node
{
    int data;
    Node* next;
}; */
// Should rearrange given linked list such that all even
// positioned Nodes are before odd positioned.
// Returns new head of linked List.
void reverse(struct Node ** head){
    struct Node * fastptr=NULL, *slowptr = NULL, *temp=*head;
    while(temp){
        fastptr = temp->next;
        temp->next = slowptr;
        slowptr = temp;
        temp = fastptr;
    }
    *head = slowptr;
}
Node *addOne(Node *head)
{
   // Your Code here
   reverse(&head);
   struct Node*temp = head;
   int carry =0;
   int a = temp->data;
   int total = a+carry+1;
   carry = total/10;
   total = total%10;
   temp->data = total;
   temp=temp->next;
   struct Node * prev = temp;
//   cout<<carry<<endl;
   while(carry && temp){
      int x = temp->data;
      int t = x+carry;
      temp->data = t%10;
      carry=t/10;
      prev = temp;
      temp=temp->next;
   }
  if (carry > 0)  
        prev->next = newNode(carry);
   reverse(&head);
   return head;
   
}