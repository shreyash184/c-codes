#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Node
{
    int Data;
    struct Node * Next;
}*START=NULL;

struct Node* createNode()
{
    struct Node* n;
    n=(struct Node*)malloc(sizeof(struct Node));
    return(n);
}

void insertNodeatend()
{
    struct Node* temp,*t;
    temp=createNode();
    printf("enter the number in the node");
    scanf("%d",&temp->Data);
    temp->Next=NULL;
    if(START==NULL)
        START=temp;
    else
    {
        t=START;
        while(t->Next!=NULL)
            t=t->Next;
        t->Next=temp;
    }
        printf("\none node is inserted\n");
}

void insertNodeatbeg()
{
    struct Node* NewNode;
    NewNode=createNode();
    printf("enter a number");
    scanf("%d",&NewNode->Data);
    if(START==NULL)
    {
        NewNode->Next=NULL;
        START=NewNode;
    }
    else
    {
        NewNode->Next=START;
        START=NewNode;
    }
    printf("\none node is inserted\n");
}

void insertNodeBetweenTwoNo()
{
    struct Node* NewNode,*t;
    NewNode=createNode();
    printf("enter a number");
    scanf("%d",&NewNode->Data);
    if(START==NULL)
    {
        NewNode->Next=NULL;
        START=NewNode;
    }
    else
    {
        t=START;
        printf("enter the two numbers between which you want to insert the node");
        int a,b;
        scanf("%d%d",&a,&b);
        while(t->Data!=a && t->Data!=b)
            t=t->Next;
        NewNode->Next=t->Next;
        t->Next = NewNode;
    }
    printf("\none node is inserted\n");
}


void deleteNodeatbeg()
{
    struct Node* r;
    if(START==NULL)
        printf("list is empty");
    else
    {
        r=START;
        START=START->Next;
        free(r);
    }
    printf("\none element is deleted from the begining");
}

void deleteNodeFromEnd()
{
    struct Node * r,*temp=START;
    if(START==NULL)
        printf("list is empty");

    else
    {
    if(START->Next == NULL)
        START = NULL;
        while(temp->Next!=NULL)
        {
            r=temp;
            temp=temp->Next;
        }
        r->Next=NULL;

    }
    free(temp);
    printf("\none element is deleted from the end");
}

void deleteNodeBetweenTwoNo()
{   int a;
      struct Node *r,*temp;
    if(START==NULL)
        printf("list is empty");

    else
    {
        if(START->Next == NULL)
            START = NULL;
        temp=START;

        printf("enter the node which you want to delete");

        scanf("%d",&a);
        while(temp->Data!=a)
        {
            if(temp->Next==NULL)
            {
                printf("\ngiven node is not found in the list");
                goto functionEnd;
            }
            r=temp;
            temp=temp->Next;
        }
       r->Next=temp->Next;

    }
        free(temp);
        printf("\none element is deleted");
        functionEnd:printf("");
}
void display()
{
    struct Node* t;
    if(START==NULL)
        printf("list is empty");
    else
    {
        t=START;
        while(t!=NULL)
         {
            printf("%d  ",t->Data);
            t=t->Next;
         }
    }
}
void main()
{
 int choice,choice1;

   while(1){
   mainMenu: printf("\n\n********* MENU ************\n1. Insert\n2. Display\n3. Delete\n4. Exit\nEnter your choice: ");
   scanf("%d",&choice);
   switch(choice)
   {
      case 1:

		while(1){
		printf("Where you want to insert: \n1. At Beginning\n2. At End\n3. Between\nEnter your choice: ");
		scanf("%d",&choice1);
		switch(choice1)
		{
		   case 1:  insertNodeatbeg();
				break;
		   case 2: 	insertNodeatend();
				break;
		   case 3:
                    insertNodeBetweenTwoNo();
				break;
		   default: 	printf("\nWrong Input!! Try again!!!\n\n");
				goto mainMenu;
		}
		goto subMenuEnd;
		}
		subMenuEnd:
		break;
      case 2: 	display();
		break;
      case 3: 	printf("How do you want to Delete: \n1. From Beginning\n2. From End\n3. Spesific\nEnter your choice: ");
		scanf("%d",&choice1);
		switch(choice1)
		{
		   case 1: 	deleteNodeatbeg();
				break;
		   case 2:  deleteNodeFromEnd();
				break;
		   case 3:
                    deleteNodeBetweenTwoNo();
				break;
		   default: 	printf("\nWrong Input!! Try again!!!\n\n");
				goto mainMenu;
		}
		break;
      case 4: 	exit(0);
      default: printf("\nWrong input!!! Try again!!\n\n");
   }
   }

}
