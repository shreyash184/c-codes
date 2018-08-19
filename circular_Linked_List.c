#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int Data;
    struct Node * Next;
}*LAST=NULL;

struct Node * createNode()
{
    struct Node* n;
    n=(struct Node*)malloc(sizeof(struct Node));
    return(n);
}
void insertAtBeginning()
{
    struct Node* NewNode;
    NewNode=createNode();
    printf("enter a number");
    scanf("%d",&NewNode->Data);
    if(LAST==NULL)
        {
            LAST=NewNode;
            LAST->Next=LAST;
        }
    else
    {
        NewNode->Next=LAST->Next;
        LAST->Next=NewNode;
    }
    printf("\none node is inserted\n");

}

void insertAtEnd()
{
    struct Node* NewNode,*temp;
    NewNode=createNode();
    printf("\nenter a number :");
    scanf("%d",&NewNode->Data);
    if(LAST==NULL)
        {
            LAST=NewNode;
            LAST->Next=LAST;
        }
    else
    {
       temp=LAST;
       NewNode->Next=LAST->Next;
       temp->Next=NewNode;
       LAST=NewNode;
    }
    printf("\none node is insesrted at the end\n");
}
struct Node* Delete()
{
    struct Node* r,*temp;
    int value;
    printf("\nenter the node you want to delete");
    scanf("%d",&value);
    if(LAST==NULL)
    {
        printf("\nlist is empty \n");
        return;
    }
    if(LAST==LAST->Next && LAST->Data==value)                              /*if the list have only one node and we want to that node this is the code for deletion*/
        {
            temp=LAST;
            LAST=NULL;
            free(temp);
            printf("\none node is deleted successfully\n");
            return;
        }
    if(LAST->Next->Data==value)                                     /*many nodes are present in the list but we  want to delete the first node in the list*/
        {
            temp=LAST->Next;
            LAST->Next=temp->Next;
            free(temp);
            printf("\none node is deleted successfully\n");
            return;
        }
      r=LAST->Next;
        while(r->Next!=LAST)
        {
            if(r->Next->Data==value)
            {                                                                           /*to delete any specific node in the middle of the list*/
                temp=r->Next;
                r->Next=temp->Next;
                free(temp);
                printf("\none node is deleted successfully\n");
                return;
            }
            r=r->Next;
        }
        if(LAST->Data==value)
        {
            temp=LAST;
            r->Next=LAST->Next;                             /*many nodes are present we want to delete the last node in the list*/
            LAST=r;
            free(temp);
            printf("\none node is deleted successfully\n");
            return;
        }

    printf("\nnode is not present in the list\n");
}
void display()
{
    struct Node* r;
    if(LAST==NULL)
        printf("list is empty");
    else
    {
        r=LAST->Next;
        printf("\nelements of the list are:");
        do
        {
            printf("%d",r->Data);
            printf("\t");
            r=r->Next;
        }while(r!=LAST->Next);
    }
}

void insertBetween()
{
    struct Node*NewNode,*t;
    NewNode=createNode();
    printf("\nenter a number\n");
    scanf("%d",&NewNode->Data);
    if(LAST==NULL)
        {
            LAST=NewNode;
            LAST->Next=LAST;
        }
    else
    {
        int a;
        printf("\ntype the nodes after which you want to insert the newnode\n");
        scanf("%d",&a);
        t=LAST->Next;
        do
        {
            if(t->Data== a)
            {
                NewNode->Next=t->Next;
                t->Next=NewNode;
                if(t==LAST)
                    LAST=NewNode;
                printf("\none new node is inserted successfully!!!!\n");
                return;
            }
            t=t->Next;
        }while(t!=LAST->Next);
        printf("\nnode you selected is not in the list");
    }
}
int main()
{
     int choice1, choice2;

   while(1)
   {
      printf("\n*********** MENU *************\n");
      printf("1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice: ");
      scanf("%d",&choice1);
      switch(choice1)
      {
         case 1:
                 while(1)
                 {
                 	printf("\nSelect from the following Inserting options\n");
                 	printf("1. At Beginning\n2. At End\n3. between two Nodes\n4. Cancel\nEnter your choice: ");
                    scanf("%d",&choice2);
                    switch(choice2)
                    {
                       case 1: 	insertAtBeginning();
                       		break;
                       case 2:  insertAtEnd();
                       		break;
                       case 3:  insertBetween();
                       		break;
                       case 4: 	goto EndSwitch;
                       default: printf("\nPlease select correct Inserting option!!!\n");
                    }
                 }
         case 2: while(1)
                 {
                 	printf("\nSelect from the following Deleting options\n");
                 	printf("1. Specific Node\n2. Cancel\nEnter your choice: ");
                    scanf("%d",&choice2);
                    switch(choice2)
                    {
                       case 1:Delete();
                       		break;
                       case 2:	goto EndSwitch;
                       default: printf("\nPlease select correct Deleting option!!!\n");
                    }
                 }
                 EndSwitch: break;
         case 3: display();
         	 break;
         case 4: exit(0);
         default: printf("\nPlease select correct option!!!");
      }
   }
    return 0;
}



