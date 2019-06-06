/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* struct Node
 {
   int data;
   Node* next;
 }; */
/* Should return data of n'th node from the end of linked list */
int getNthFromLast(Node *head, int n)
{
       // Your code here
       struct Node * temp = head;
       struct Node * temp1 = head;
       int len = 0;
       while(temp != NULL ){
           temp = temp->next;
           len++;
       }
       if(len >= n){
            int x = len-n;
            while(x != 0){
                temp1 = temp1->next;
                x--;
            }
            return temp1->data;
       }   
       else{
           return -1;
       }
}
