#include<iostream>
using namespace std;
class Matrix
{
    int a[10][10],r,c;
	public:
	void accept()
	{
    	cin>>r>>c;
		cout<<"\nEnter Matrix Elements for ("<<r<<"X"<<c<<") Matrix:\n";
    	for(int i=0; i<r; i++)
    	{
        	for(int j=0; j<c; j++)
        	{
            	cin>>a[i][j];
        	}
    	}
		}
	void display()
	{
    for(int i=0; i<r; i++)
    {
        	for(int j=0; j<c; j++)
        	{
            	cout<<a[i][j]<<"\t";
        	}
        	cout<<"\n";
    	}
	}
	void operator +(Matrix x)
	{
    	if(c==x.c && r==x.r)
    	{
			int mat[10][10];
        	for(int i=0; i<r; i++)
        	{
            	for(int j=0; j<c; j++)
            	{
                	mat[i][j]=a[i][j]+x.a[i][j];
            	}
        	}
        	cout<<"\nAddition of Matrix : \n\n";
        	for(int i=0; i<r; i++)
        	{
            	cout<<" ";
            	for(int j=0; j<c; j++)
           		{
                	cout<<mat[i][j]<<"\t";
            	}
            	cout<<"\n";
        	}
    	}
    	else 
    	cout<<"\n!!!ADDITION IS NOT POSSIBLE!!!\n";
	}
	void operator *(Matrix x)
	{
    	if(c==x.r)
		{
			int mat[10][10];
        	for(int i=0; i<r; i++)
        	{
            	for(int j=0; j<c; j++)
            	{
                	mat[i][j]=0;
            	}
        	}
        	for(int i=0; i<r; i++)
        	{
            	for(int j=0; j<c; j++)
            	{
                	for(int k=0; k<c; k++)
					{
						mat[i][j]=mat[i][j]+a[i][k]*x.a[k][j];
					}
            	}
        	}
        	cout<<"\nMultiplication of Matrix : \n\n";
        	for(int i=0; i<r; i++)
        	{
            	cout<<" ";
            	for(int j=0; j<c; j++)
            	{
                	cout<<mat[i][j]<<"\t";
            	}
            	cout<<"\n";
        	}
    	}
    	else
    	cout<<"\n!!!MULTIPLICATION IS NOT POSSIBLE!!!\n";
	}
};
int main()
{
    int r,c,a;
	Matrix m,n;
	cout<<"\nEnter the row and columns for first matrix:";
    m.accept(); 
	cout<<"\nEnter the row and columns for second matrix:";    
    n.accept();     
    cout<<"\nFirst Matrix : \n\n";
    m.display();   
    cout<<"\nSecond Matrix : \n\n";
    n.display();
    repeat:
	cout<<"\nEnter your choice:";
    cout<<"\n1.Addition.";
    cout<<"\n2.Multiplication.";
    cout<<"\n3.Exit.";
    cin>>a;
    if(a==1)
    {
		m+n;
	}
	else if(a==2) 
	{       
    	m*n;
    }
    else
		exit(0);
	goto repeat;
	return 0;
}
