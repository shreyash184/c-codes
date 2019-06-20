{
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
Node* sortedMerge(struct Node* a, struct Node* b);
void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node(new_data);
    
    if (*head_ref == NULL)
        *head_ref = new_node;
    else
        (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
/* Function to print Nodes in a given linked list */
void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}
/* Driver program to test above function*/
int main()
{
    int T,i,n1,n2,l,k;
    cin>>T;
    while(T--)
    {
        struct Node *head1 = NULL,  *tail1 = NULL;
        struct Node *head2 = NULL,  *tail2 = NULL;
        cin>>n1>>n2;
        for(i=1; i<=n1; i++)
        {
            cin>>l;
            append(&head1, &tail1, l);
        }
        for(i=1; i<=n2; i++)
        {
            cin>>l;
            append(&head2, &tail2, l);
        }
        Node *head = sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
 
/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
// Function to merge the two sorted linked lists
// head1, head2: head of the two sorted linked lists

void push(struct Node** head_ref, int new_data) {
    struct Node* new_Node = new Node(new_data);
    new_Node->next = (*head_ref);
    (*head_ref) = new_Node;
}

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

Node* sortedMerge(Node* head1,   Node* head2)
{
    // Your Code Here
    struct Node * head;
    while(head1 && head2){
        if(head1->data<head2->data){
            push(&head, head1->data);
            head1=head1->next;
        }else{
            push(&head, head2->data);
            head2=head2->next;
        }
    }
    while(head1){
        push(&head, head1->data);
        head1=head1->next;
    }
    while(head2){
        push(&head, head2->data);
        head2=head2->next;
    }
    reverse(&head);
    return head;
}