#include<iostream>
using namespace std;
class Polynomial
{
	int degree;
	int *coeff;
	public:
	    void getdata();
	    void putdata();
	    void poly3order(polynomial,polynomial);
	    void polyadd(polynomial,polynomial);
		Polynomial();// default constructor
		Polynomial(Polynomial &p)// copy constructor
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
				cout<<"Enter the coefficients of degree:"<<j<<endl;
				cin>>coeff[j];
			}
		}
}
void polynomial::poly3order(polynomial f, polynomial s)
{          
            if(f.order==s.order)                            
            order=f.order;
            else
                        if(f.order>s.order) 
                        order=f.order;
                        else  if(s.order>f.order)          
                        order=s.order;
}
void polynomial::polyadd(polynomial fp, polynomial sp)
{
            int i;
            for(i=order; i>-1; i--)
                        coeff[i]=fp.coeff[i]+sp.coeff[i];
}
void Polynomial::putdata()
{
    	int j;
    	cout<<"The polynomial is:";
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
	Polynomial p1,p2,p3;
	p1.getdata();
	p2.getdata();
	p1.putdata();
	p2.putdata();
	p3.poly3order(p1,p2);
	p3.polyadd(p1,p2);
	

}

