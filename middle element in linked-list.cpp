/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//if odd len then its having only 1 middle element but it even 2 middle element print 2nd element among 2 middle element

/* Link list Node 
struct Node {
    int data;
    Node* next;
}; */
/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
   // Your code here
   struct Node * temp = head;
   struct Node * temp1 = head;
   int len=0;
   while(temp != NULL){
       temp=temp->next;
       len++;
   }
   int x=0;
   x = (len/2);
   while(x!=0){
       temp1 = temp1->next;
       x--;
   }
   return temp1->data;
}
