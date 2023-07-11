#include <iostream>
using namespace std;
#define SIZE 5
class queue
{
	public:
	int front=0,rear=0;
	int arr[SIZE];
	void enqueue()
	{
 		int no;
		if (rear==SIZE && front==0)
		{
 			cout<<"\n";
			cout<<"Queue is full";
		}
		else
		{
			cout<<"Enter the number:";
			cin>>no;
			arr[rear]=no;
		}
		rear++;
	}
	void display()
 	{
 		int i,temp=front;
		if (front==rear)
		{
 			cout<<"\n";
			cout<<"The queue is empty";
		}
		else
		{
			cout<<"\n Element(s) in the queue:";
			for(i=temp;i<rear;i++)
			{
				cout<<arr[i]<<" ";
			}
		}
 	}
	void dequeue()
	{
		int no,i;
		if (front==rear)
		{
 			cout<<"\n";
			cout<<"Queue is empty";
		}
		else
		{
			no=arr[front];
			front++;
			cout<<"\n"<<no<<" is removed from thequeue\n";
		}
	}
};
int main()
{
	queue q;
 	int choice;
 	do
 	{
 		cout<<"\n1.Add an element at the end";
		cout<<"\n2.Remove the element which is currentlyin first position.";
		cout<<"\n3.Display the elements in the queue.";
		cout<<"\n\nEnter your choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				q.enqueue();
				cout<<"\n";
				break;
			case 2:
				q.dequeue();
				cout<<"\n";
				break;
			case 3:
				q.display();
				cout<<"\n";
				break;
		}
	}while(choice<=3);
	return 0;
}
