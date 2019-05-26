{
#include<stdio.h>
#include<stdlib.h>
// Linked list Node structure
struct Node
{
    char c;
    struct Node *next;
};
struct Node* newNode(char c)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->c = c;
    temp->next = NULL;
    return temp;
};
int compare(struct Node *list1, struct Node *list2);
// Driver program
int main()
{
    int t,n;
    
    scanf("%d",&t);
    
    char x;
    while(t--)
    {
        scanf("%d
",&n);
        scanf("%c",&x);
        
        struct Node *list1 = newNode(x);
        struct Node *temp=list1;
        int i;
        for(i=0; i<n-1; i++)
        {
            scanf(" %c",&x);
            temp->next = newNode(x);
            temp=temp->next;
        }
        int m;
        scanf("%d
",&m);
        scanf("%c",&x);
        struct Node *list2 = newNode(x);
        temp=list2;
        for(i=0; i<m-1; i++)
        {
            scanf(" %c",&x);
            temp->next = newNode(x);
            temp=temp->next;
        }
        printf("%d
", compare(list1, list2));
    }
    return 0;
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

// Compare two strings represented as linked lists
/*Linked List Node Structure 
struct Node
{
    char c;
    struct Node*next;
};
*/
int compare(struct Node*list1,struct Node*list2)
{
    //Add your code here.
    struct Node * temp1 = list1,*s1=list1;
    struct Node * temp2 = list2,*s2=list2;
    int l1=0,l2=0;
    while(temp1!=NULL){
        temp1=temp1->next;
        l1++;
    }
    while(temp2!=NULL){
        temp2=temp2->next;
        l2++;
    }
        while(s1!=NULL || s2!=NULL){
            if((s1->c)<(s2->c)){
                return -1;
            }else if((s1->c)>(s2->c)){
                return 1;
            }
            s1=s1->next;
            s2=s2->next;
        }
        if(s1==NULL || s2==NULL){
            return 0;
        }
}