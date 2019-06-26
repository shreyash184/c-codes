{
#include <bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
void print(Node *root)
{
Node *temp = root;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}
Node* removeDuplicates(Node *root);
int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
	
		Node *result  = removeDuplicates(head);
		print(result);
		cout<<endl;
		
	}
	return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
/*
The structure of linked list is the following
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
// Function to remove duplicates from the linked list
// root: root of the linked list

void push(struct Node **head, int x){
    struct Node * newNode = new Node(x);
    newNode->next = (*head);
    (*head) = newNode;
}

Node *removeDuplicates(Node *root)
{
 // your code goes here
 //This is sorting Code
 struct Node *t1 = root;
 struct Node *prev = NULL;
 unordered_set<int>s;
 while(t1){
     if(s.find(t1->data)!=s.end()){
         prev->next = t1->next;
         delete(t1);
     }else{
         s.insert(t1->data);
         prev=t1;
     }
     t1 = prev->next;
 }
 
 //This Code is Removing Duplicate having elements in sorted order
//  struct Node * s = root;
//  while(s && s->next){
//      if(s->data == s->next->data){
//          s->next = s->next->next;
//      }else{
//          s=s->next;
//      }
//  }
 return root;
}