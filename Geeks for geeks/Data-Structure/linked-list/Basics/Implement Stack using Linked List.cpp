{
#include<bits/stdc++.h>
using namespace std;
struct StackNode
{
    int data;
    StackNode *next;
    StackNode(int a)
    {
        data = a;
        next = NULL;
    }
};
class MyStack {
private:
StackNode *top;
public :
    void push(int);
    int pop();
    MyStack()
    {
        top = NULL;
    }
};
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        MyStack *sq = new MyStack();
        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";
        }
        }
        cout<<endl;
    }
    }

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* 
The structure of the node of the stack is
struct StackNode
{
    int data;
    StackNode *next;
    StackNode(int a)
    {
        data = a;
        next = NULL;
    }
};
// And this is structure of MyStack
class MyStack {
private:
StackNode *top;
public :
    void push(int);
    int pop();
    MyStack()
    {
        top = NULL;
    }
};
/* The method push to push element 
   into the stack */
void MyStack :: push(int x)
{
        // Your Code
        StackNode * newNode = new StackNode(x);
        if(top == NULL){
            top = newNode;
        }else{
            newNode->next = top;
            top = newNode;
        }
        
}
/* The method pop which return the element 
  poped out of the stack*/
int MyStack :: pop()
{
        // Your Code       
        if(top == NULL){
            return -1;
        }else{
            int topElement = top->data;
            top=top->next;
            return topElement;
        }
}
