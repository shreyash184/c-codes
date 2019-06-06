{
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node(new_data);
    
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
bool isPalindrome(Node *head);
/* Driver program to test above function*/
int main()
{
  int T,i,n,l;
    cin>>T;
    while(T--){
    struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
   	cout<<isPalindrome(head)<<endl;
    }
    return 0;
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*The structure of the Node is
struct Node
{
    int data;
    struct Node* next;
};*/
/*You are required to complete this method */

 void reverse(struct Node** reverseNode){
    struct Node *fastPtr = NULL;
    struct Node *slowPtr = NULL;
    struct Node *temp = *reverseNode;
    
    while(temp != NULL){
    
            fastPtr = temp->next; 
            temp->next = slowPtr; 
            slowPtr = temp; 
            temp = fastPtr; 
            
    }
    
    *reverseNode = slowPtr;
 } 

bool isPalindrome(Node *head)
{
    //Your code here
    int len = 0;
    struct Node * temp=head;
    struct Node * temp1=head;
    struct Node * temp2=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    if(head == NULL || head->next == NULL){
        return 1;
    }
        int x = len/2;
        while(x!=0){
            temp1=temp1->next;
            x--;
        }
        reverse(&temp1);
        while(temp1!=NULL){
            if(temp2->data == temp1->data){
                temp2=temp2->next;
                temp1=temp1->next;
            }else{
                return 0;
            }
        }
        if(temp1 == NULL){
            return 1;
        }
}
