{
#include<bits/stdc++.h>
using namespace std;
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
};
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        MyQueue *sq = new MyQueue();
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

/* Structure of a node in Queue
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};
And structure of MyQueue
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
}; */
/* The method push to push element into the queue*/
void MyQueue:: push(int x)
{
        // Your Code
        QueueNode * temp = new QueueNode(x);
        if(front == NULL && rear == NULL){
            rear = front = temp;
            return ;
        }
        rear ->next = temp;
        rear = temp;
}
/*The method pop which return the element
  poped out of the queue*/
int MyQueue :: pop()
{
        // Your Code
        //queue is empty
        if(front == NULL){
            return -1;
        }else{
            int x = front->data;
            front = front->next;
            //if front is null then the queue must have only 1 element hence rear = null
            if(front == NULL){
                rear=NULL;
            }
            return x;
        }
}
