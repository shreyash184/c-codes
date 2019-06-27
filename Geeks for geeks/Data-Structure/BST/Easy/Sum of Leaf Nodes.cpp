{
//Author- SAJAL AGRAWAL
//sajal.agrawal1997@gmail.com
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct Node{
    int data;
    struct Node *left,*right;
};
//typedef struct Node Node;
//Node *root=NULL;
Node *insert(Node *r,int num);
int sumOfLeafNodes(Node *r);
void preOrderDisplay(Node *r);
void inOrderDisplay(Node *r);
void postOrderDisplay(Node *r);
int search(Node *r, int num);
int main(void) {
    int t,n,data;
    scanf("%d",&t);
    while(t--){
        Node *root=NULL;
        scanf("%d",&n);
        //printf("n=%d",n);
        while(n--){
            scanf("%d",&data);
            //printf("data=%d",data);
            root=insert(root,data);
        }
        //inOrderDisplay(root);
        printf("%d
",sumOfLeafNodes(root));
    }
	return 0;
}
Node *insert(Node *r,int num){
    if(r==NULL){
        r=(Node*)malloc(sizeof(Node));
        r->left=r->right=NULL;
        r->data=num;
    }else{
        if(num<r->data){
            r->left=insert(r->left,num);
        }else{
            r->right=insert(r->right,num);
        }
    }
    return r;
}
void preOrderDisplay(Node *r){
    if(r!=NULL){
        printf("%d ",r->data);
        preOrderDisplay(r->left);
        preOrderDisplay(r->right);
    }
}
void inOrderDisplay(Node *r){
    if(r!=NULL){
        inOrderDisplay(r->left);
        printf("%d ",r->data);
        inOrderDisplay(r->right);
    }
}
void postOrderDisplay(Node *r){
    if(r!=NULL){
        postOrderDisplay(r->left);
        postOrderDisplay(r->right);
        printf("%d ",r->data);
    }
}
int search(Node *r,int num){
    if(r==NULL)return 0;
    else if(r->data==num)return 0;
    else if(r->data > num)
        search(r->left,num);
    else 
        search(r->right,num);
}
}
/*This is a function problem.You only need to complete the function given below*/
/* The structure of Node
struct Node{
    int data;
    Node *left,*right;
}; */
/*You are required to complete below method */
int sumOfLeafNodes(Node *r ){
     /*Your code here */
     if(r==NULL)return 0;
     if(r->left== NULL && r->right==NULL){
         return r->data;
     }else{
         int leftLeaf = sumOfLeafNodes(r->left);
         int rightLeaf = sumOfLeafNodes(r->right);
         return leftLeaf+rightLeaf;
     }
}