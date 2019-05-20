
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//function Template for C++
/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
  }
*/
// Should reverse list and return new head.
Node* reverse(Node *head)
{
  struct Node *fastPtr = NULL;
    struct Node *slowPtr = NULL;
    struct Node *temp = head;
    
    while(temp != NULL){
    
            fastPtr = temp->next; 
            temp->next = slowPtr; 
            slowPtr = temp; 
            temp = fastPtr; 
            
    }
    
    head = slowPtr; 
}
