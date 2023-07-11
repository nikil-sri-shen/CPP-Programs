#include <iostream>
using namespace std;
class Mechanical;
class Electronic 
{
    private:
        int no_of_items;
        friend int add(Electronic, Mechanical);
    public:
    	int spent=0;
    	void getData()
    	{
    		int i,n;
			cout<<"\nEnter no of items in electronics:";
			cin>>no_of_items;
			for(i=0;i<no_of_items;i++)
			{
				cout<<"\nEnter the rate of item number:"<<i+1<<endl;
				cin>>n;
				spent=spent+n;
			}
		}
		void putData()
		{
			cout<<"\nTotal number of items in electronic:"<<endl<<no_of_items;
			cout<<"\nTotal amount spent in electronic:"<<endl<<spent;
		}
};
class Mechanical 
{
	private:
        int no_of_items;
        int spent=0;
        friend int add(Electronic, Mechanical);
    public:
    	void getData()
    	{
    		int i,n;
			cout<<"\nEnter no of items in mechanical:";
			cin>>no_of_items;
			for(i=0;i<no_of_items;i++)
			{
				cout<<"Enter the rate of item number:"<<i+1<<endl;
				cin>>n;
				spent=spent+n;
			}
		}
		void putData()
		{
			cout<<"\nTotal number of items in mechanical:"<<endl<<no_of_items;
			cout<<"\nTotal amount spent in mechanical:"<<endl<<spent;
		}
};
int add(Electronic objectA, Mechanical objectB) 
{
    return (objectA.spent + objectB.spent);
}

int main() 
{
    Electronic objectA;
    Mechanical objectB;
    cout<<"\n***TO FIND THE TOTAL AMOUNT SPENT IN ELECTRONIC AND MECHANICAL ITEMS***\n";
    objectA.getData();
    objectB.getData();
    objectA.putData();
    objectB.putData();
    cout << "\nSum of total amount spent: " << add(objectA, objectB);
    return 0;
}
