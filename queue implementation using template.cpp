#include <iostream>
using namespace std;
int front=-1,rear=-1,size=10;
template <class c>
class queue
{
 	c arr[15];
 	public:
 	void enqueue()
 	{
 		c val;
		cout<<"Enter element to enqueue ";
		cin>>val;
		if((front==0 && rear==size-1)||(rear==(front-1)%(size-1)))
		cout<<"Overflow of the queue";
		if(front == -1)
 		{
 			front=rear=0;
			arr[rear]=val;
 		}
 		else
 		{
 			rear=(rear+1)%size;
			arr[rear]=val;
 		}
	}
	void dequeue()
 	{
 		c val;
		if(front== -1)
		{
			cout<<"the Queue is Overflowing";
			val=arr[front];
		}
 		if(front==rear)
 			front=rear=-1;
 		else
 			front =(front+1)%size;
 	}
 	void display()
 	{
		if(front ==-1)
			cout<<"Queue empty";
 		if(rear>=front)
 		{
			for(int i=front;i<=rear;i++)
				cout<<arr[i]<<" ";
 		}
 		else
 		{
			for(int i=front;i<size;i++)
				cout<<arr[i]<<" ";
			for(int i=0; i<=rear;i++)
				cout<<arr[i]<<" ";
 		}
 	}
};
int main()
{
	int ch1;
	dtype:
	cout<<"\nPress 1 for integer queue \n";
	cout<<"Press 2 for float queue \n";
	cout<<"Press 3 for character queue\n";
	cout<<"Press 4 to string queue \n";
	cout<< "Press 5 to Exit\n";
	cout<<"Enter your choice ";
	cin>>ch1;
 	switch(ch1)
 	{
 		case 1:
 		{
 			int ch;
 			intdtype:
				cout<<"\nEnter 1 to enqueue\n";
				cout<<"Enter 2 to dequeue\n";
				cout<<"Enter 3 to display\n";
				cout<<"Enter 4 to Exit\n";
				cout<<"Enter your choice ";
				cin>>ch;
 				queue<int>iobj;
 				switch(ch)
 				{
 					case 1:
 					{
						iobj.enqueue();
						goto intdtype;
 					}				
 					case 2:
 					{
						iobj.dequeue();
						goto intdtype;
 					}
 					case 3:
 					{
						iobj.display();
						goto intdtype;
 					}
 					case 4:
 						break;
 				}
				goto intdtype;
 		}
 		case 2 :
 		{
 			int ch;
 			floatdtype:
				cout<<"\nEnter 1 to enqueue\n";
				cout<<"Enter 2 to dequeue\n";
				cout<<"Enter 3 to display\n";
				cout<<"Enter 4 to Exit\n";
				cout<<"Enter your choice ";
				cin>>ch;
 				queue<float>fobj;
 				switch(ch)
 				{
 					case 1:
 					{
						fobj.enqueue();
						goto floatdtype;
 					}
 					case 2:
 					{
						fobj.dequeue();
						goto floatdtype;
 					}
 					case 3:
 					{
						fobj.display();
						goto floatdtype;
 					}
 					case 4:
 						break;
 				}
				goto floatdtype;
 		}
 		case 3:
 		{
 			int ch;
 			chrdtype:
				cout<<"\nEnter 1 to enqueue\n";
				cout<<"Enter 2 to dequeue\n";
				cout<<"Enter 3 to display\n";
				cout<<"Enter 4 to Exit\n";
				cout<<"Enter your choice ";
				cin>>ch;
 				queue<char>cobj;
 				switch(ch)
 				{
 					case 1:
 					{
						cobj.enqueue();
						goto chrdtype;
 					}	
 					case 2:
 					{
						cobj.dequeue();
						goto chrdtype;
 					}
 					case 3:
 					{
						cobj.display();
						goto chrdtype;
 					}
 					case 4:
 						break;
 				}	
				goto chrdtype;
 		}
 		case 4:
 		{
 			int ch;
 			strdtype:
				cout<<"\nEnter 1 to enqueue\n";
				cout<<"Enter 2 to dequeue\n";
				cout<<"Enter 3 to display\n";
				cout<<"Enter 4 to Exit\n";
				cout<<"Enter your choice ";
				cin>>ch;
 				queue<string>sobj;
 				switch(ch)
 				{
 					case 1:
 					{
						sobj.enqueue();
						goto strdtype;
 					}
 					case 2:
 					{
						sobj.dequeue();
						goto strdtype;
 					}
 					case 3:
 					{
						sobj.display();
						goto strdtype;
 					}
 					case 4:
 						break;
 				}
				goto strdtype;
 		}
 		case 5:
 			break;
 	}
}
