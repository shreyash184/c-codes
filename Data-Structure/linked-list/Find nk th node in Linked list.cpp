{
#include<bits/stdc++.h>
using namespace std;
int fractional_node(struct node*head,int k);
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        node* ptr,*start=NULL,*ptr1;
        int n,i;
        cin>>n;
        for(i=0;i<n;i++)
        {
            ptr=new node;
            cin>>ptr->data;
            if(start==NULL)
            {
                start=ptr;
                ptr1=ptr;
            }
            else
            {
                ptr1->next=ptr;
                ptr1=ptr1->next;
            }
        }
        ptr1->next=NULL;
        int k;
        cin>>k;
        int p=fractional_node(start,k);
        cout<<p<<endl;
    }
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*The structure of the node is
struct node
{
    int data;
    struct node *next;
};*/
int fractional_node(struct node *head, int k)
{
    // your code here
    int len = 0;
    struct node * temp = head;
    struct node * temp1 = head;
    while(temp!=NULL){
        temp = temp->next;
        len++;
    }
    
    float y = (float)len/(float)k;
    int x = ceil(y);
    while(x!=0){
        temp=temp1;
        temp1=temp1->next;
        x--;
    }
    return temp->data;
}