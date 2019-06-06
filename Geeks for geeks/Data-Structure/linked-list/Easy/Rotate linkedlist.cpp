{
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* next;
}*head;
void rotate(struct node **head_ref, int k);
  void insert()
  {
    int n,i,value;
    struct node *temp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            head=(struct node *) malloc( sizeof(struct node) );
            head->data=value;
            head->next=NULL;
            temp=head;
            continue;
        }
        else
        {
            temp->next= (struct node *) malloc( sizeof(struct node) );
            temp=temp->next;
            temp->data=value;
            temp->next=NULL;
        }
    }
}
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("
");
}
/* Drier program to test above function*/
int main(void)
{
    int t,k,n,value;
     
     scanf("%d",&t);
     while(t--)
     {
     insert();     // insert function to build linked list
     scanf("%d",&k);
     rotate(&head,k);  // rotate linked list anti-clockwise  by k nodes
     printList(head);  // print linked list after rotation
     }
     return(0);
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
void rotate(struct node **head_ref, int k)
{ 
    // Complete this method
    struct node * s = *head_ref;
    int n = 0;
    while(s!=NULL){
        s=s->next;
        n++;
    }
    if(k==0 || n==k || *head_ref == NULL){
        return;
    }else{
        struct node * runner = *head_ref;
        struct node * temp = *head_ref;
        struct node * temp1 = *head_ref;
        while(k--){
            temp1=runner;
            runner=runner->next;
        }
        *head_ref = runner;
        temp1->next = NULL;
        while(runner->next!=NULL){
            runner=runner->next;
        }
        runner->next = temp;
    }
    
}
