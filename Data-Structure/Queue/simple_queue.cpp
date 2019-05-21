#include <iostream>
using namespace std;

class Queue {
	
		int front,rear;
		int array[10];
	public :
		Queue() {	
			front=rear=-1;
		}
		void enqueue(int x) {
			if(front==-1)
				front++;
			else if(rear==9)
				cout<<"queue is full";
			 
			array[++rear]=x;
		}
		void dequeue() {
			if(rear==-1)
				cout<<"queue is empty";
			array[++front];
		}
		void display() {
			int i;
			for(i=front;i<=rear;i++) {
				cout<< array[i] <<endl;
			}
		}
};

int main() {

 Queue q;
    
	
    q.dequeue();
    q.enqueue(1003);
    q.dequeue();
   
    q.enqueue(1004);
    
    q.display();
    
    return 0;
	
}
