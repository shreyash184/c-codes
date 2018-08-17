#include <bits/stdc++.h>
#define SIZE 4
using namespace std;
class Queue {
	int front,rear;
	int arr[SIZE];
    public:
		Queue(){front=-1;rear=-1;}
		void enqueue(int x) {
			if((rear==SIZE-1 && front==0)||(front==rear+1))
				cout<<"queue is full";
			else {
				if(rear==SIZE-1 && front!=0)
					rear=-1;
				arr[++rear]=x;
				if(front==-1)
					front=0;
			}
		}
		void dequeue() {
			if(front==-1 && rear==-1) 
				cout<<"queue is empty";
			else {
				cout<<"deletd element :"<<arr[front++];
	      			if(front == SIZE)
	 				front = 0;
				if(rear==SIZE-1)
					rear=-1;
      				if(front-1 == rear)
	 				front = rear = -1;
			}
		}
		void display() {
			if(front==-1) 
				cout<<"queue is empty";
			else {
				int i=front;
				cout<<"elements of the queue are :";
				if(front<=rear){
					for(;i<=rear;i++)
						cout<<arr[i];
				}
				else{
					for(;i<=SIZE-1;i++)
						cout<<arr[i];
					
					for(i=0;i<=rear;i++)
						cout<<arr[i];
				}
			}
		}
};
int main() 
{
	int choice,value;
	
	Queue q;
	while(1){
		cout<<"\n****MENU****\n";
		cout<<"\n1.insert\n2.Delete\n3.dispaly\n4.exit"<<endl;
		cout<<"enter the choice: ";
		cin>>choice;
		switch(choice) {
			case 1:  cout<<"\nenter the value to be inserted";
				cin>>value;
				q.enqueue(value);
				break;
			case 2: q.dequeue();
				break;
			case 3:	q.display();
				break;
			case 4: exit(0);
				default:cout<<"enter the correct chioce your choice is invalid";
			}
		};
	
	return 0;
}

