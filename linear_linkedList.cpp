#include <bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	struct Node* next;
}*front=NULL,*rear,*temp;


void enqueue(int x) {
	struct Node* NewNode=(struct Node*)malloc(sizeof(struct Node));
	temp=NewNode;
	temp->data=x;
	if(front==NULL) 
		front=rear=temp;
	else
   	{
		rear->next=temp;
		rear=temp;
	}
}
void display() {
	if(front==NULL) 
		cout<<"queue is empty\n";
	else {
		temp=front;
		while(temp!=NULL) {
			cout<<temp->data<<"->";
			temp=temp->next;
		}
	}
}
void dequeue()
{
    if(front==NULL)
        cout<<"Queue is empty\n";
    else
    {
        temp=front;
        front=front->next;
        cout<<"Deleted node is "<<temp->data<<"\n";
        delete(temp);
    }
}
 


int main() {
	int choice,value;
	while(1){
		cout<<"\n****MENU****\n";
		cout<<"\n1.insert\n2.Delete\n3.display\n4.exit"<<endl;
		cout<<"enter the choice: ";
		cin>>choice;
		switch(choice) {
			case 1:  cout<<"\nenter the value to be inserted";
				cin>>value;
				enqueue(value);
				break;
		   	case 2: dequeue();
				break;    
			case 3:	display();
				break;          
			case 4: exit(0);
				default:cout<<"enter the correct chioce your choice is invalid";
			}
		};
	
return 0;
}
