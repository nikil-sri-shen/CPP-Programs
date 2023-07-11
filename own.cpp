#include<iostream>
using namespace std;
class Polynomial
{
	int order;
	int *coeff;
	public:
	    void input();
	    void output();
		Polynomial()// default constructor
		{
			
		}
		Polynomial(Polynomial &p):order(p.order)// copy constructor
		{
			int i;
			coeff=new int [order+1];
			for(i=order;i>-1;i--)
			  coeff[i]=p.coeff[i];
		}
	    ~Polynomial()
	    {
	      delete []coeff;
	    }
};
void Polynomial::input()
{
		{
			int i;
			cout<<"Enter the Highest order:"<<endl;
			cin>>order;
			coeff=new int[order+1];
			for(i=order;i>-1;i--)
			{
				cout<<"Exponent:"<<i<<endl;
				cout<<"Enter the coefficients:"<<endl;
				cin>>coeff[i];
			}
		}
}
void Polynomial::output()
{
    	int i;
		for(i=order;i>-1;i--)
		{
			if(i!=0)
			{
				cout<<coeff[i]<<"x^"<<i;
				if(i!=0)
				{
			    	cout<<" + ";
				}
			}
			if(i==0)
			{
				cout<<coeff[i];
			}
		}
}
int main()
{
	Polynomial p1;
	cout<<"Enter the first polynomial:"<<endl;
	p1.input();
	Polynomial p2=p1;
	cout<<"The first polynomial is: ";
	p1.output();
	cout<<endl<<"\nThe second polynomial is: ";
	p2.output();
}


