#include<iostream>
using namespace std;
class Polynomial
{
	int degree;
	int *coeff;
	public:
	    void getdata();
	    void sum(Polynomial,Polynomial);
	    void putdata();
		Polynomial();// default constructor
		Polynomial(Polynomial &p):degree(p.degree)// copy constructor
		{
			int i;
			coeff=new int [degree+1];
			for(i=0;i<degree+1;i++)
			  coeff[i]=p.coeff[i];
		}
	    ~Polynomial()
	    {
	      delete []coeff;
	    }
};
Polynomial::Polynomial()
{
    /*int j;
    coeff=new int[11];
    for(j=10;j>-1;j--)
	{
     	cout<<"Enter the coefficient of degree "<<j<<": "<<endl;
		cin>>coeff[j];
	}
	cout<<"The polynomial is: ";
	for(j=10;j>-1;j--)
	{
		cout<<coeff[j]<<"x^"<<j;
		if(j!=0)
		{
		    cout<<"+";
		}
	}*/
}
void Polynomial::getdata()
{
		{
			int j;
			cout<<"Enter the degree:";
			cin>>degree;
			coeff=new int[degree+1];
			for(j=degree;j>-1;j--)
			{
				cout<<"Enter the coefficients:"<<endl;
				cin>>coeff[j];
			}
		}
}	
void Polynomial::putdata()
{
    	int j;
		for(j=degree;j>-1;j--)
		{
			cout<<coeff[j]<<"x^"<<j;
			if(j!=0)
			{
			    cout<<" + ";
			}
		}
}
int main()
{
	Polynomial p1,p3;
	p1.getdata();
	Polynomial p2=p1;
	cout<<"The first polynomial is: ";
	p1.putdata();
	cout<<endl<<"\nThe second polynomial is: ";
	p2.putdata();
	p3.sum(p1,p2);
}

