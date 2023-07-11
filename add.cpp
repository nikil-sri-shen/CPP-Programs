#include<iostream>
using namespace std;
class Add
{
	public:
		void get();
		void sum();
		void put();
};
Add::void get()
{
	int x,y;
	cout<<"Enter two numbers:";
	cin>>x>>y;
}
Add::void sum()
{
	int z;
	z=x+y;
}
Add::void put()
{
	cout<<"the sum is "<<z;
}
int main()
{
	Add a;
	a.get();
	a.sum();
	a.put();
	return 0;
}
