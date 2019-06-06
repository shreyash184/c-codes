
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Following is the Linked list node structure */
/*struct Node
{
    int data;
    Node* next;
};*/
void reorderList(Node* head) 
{
    Node* temp = head;
    Node* node = head;
    Node* temp1;
    while ( temp && temp->next && temp->next->next){
        while(node->next && node->next->next){
            node=node->next;
        }
        temp1 = temp->next;
        temp->next = node->next;
        node->next = NULL;
        temp->next->next = temp1;
        temp = temp1;
        node = temp;
    }
}