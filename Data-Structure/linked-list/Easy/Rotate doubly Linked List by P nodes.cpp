{
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;
struct node
{
  int data;
  struct node*next,*prev;
};
struct node* update(struct node*start,int p);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;
        struct node*start=NULL,*cur=NULL,*ptr=NULL;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            ptr=new(struct node);
            ptr->data=a;
            ptr->next=NULL;
            ptr->prev=NULL;
            if(start==NULL)
            {
                start=ptr;
                cur=ptr;
            }
            else
            {
                cur->next=ptr;
                ptr->prev=cur;
                cur=ptr;
            }
        }
        struct node*str=update(start,p);
        while(str!=NULL)
        {
            cout<<str->data<<" ";
            str=str->next;
        }
        cout<<endl;  
    }
}
//Position this line where user code will be pasted.

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
struct node*update(struct node*start,int p)
{
    //Add your code here
    int x = p;
    struct node * temp=start;
    struct node * temp1=start;
    while(p--){
        temp=temp->next;
    }
    start = temp;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    while(temp1 != start){
        temp->next=temp1;
        temp=temp->next;
        temp1=temp1->next;
    }
    temp->next=NULL;
    return start;
}