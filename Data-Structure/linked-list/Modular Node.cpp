{
#include <bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	struct Node* next;
};
void append(struct Node** headRef, int newData)
{
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	struct Node *last = *headRef;
	new_node->data = newData;
	new_node->next = NULL;
	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return;
}
int modularNode(Node* head, int k);
// Driver program to test above
int main()
{
    int t;
    cin>>t;
    while(t--){
        struct Node* head = NULL;
        int n, tmp, k;
        cin>>n;
        while(n--){
            cin>>tmp;
            append(&head, tmp);
        }
        cin>>k;
        cout<<modularNode(head, k)<<endl;
    }
	return 0;
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Struture of the node of the linked list is as:
struct Node {
	int data;
	struct Node* next;
};
*/
// Your task is to complete the function
// function should return the modular Node
// if no such node is present then return -1
int modularNode(Node* head, int k)
{
	// Code here
	int len = 0;
	struct Node * temp = head;
	struct Node * temp1 = head;
	while(temp!=NULL){
	    temp=temp->next;
	    len++;
	}
	int x = 0;
	int i;
	for(i=len;i>0;i--){
	    if(i%k == 0){
	        x=i;
	        break;
	    }
	}
	if(i==0){
	    return -1;
	}
	while(x!=0){
	    temp = temp1;
	    temp1=temp1->next;
	    x--;
	}
	return temp->data;
}
