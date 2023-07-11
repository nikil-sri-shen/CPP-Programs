#include <stdio.h>
int main()
{
	int n,a,b,i,c;
	a=-1;
	b=1;
	i=1;
	printf("\t***PRINT FIBONACCI SERIES***");
	printf("\nEnter the nth number:");
	scanf("%d",&n);
	printf("\nThe fibanocci series is");
	while(i<=n)
	{
		c=a+b;
		printf("\t%d",c);
		a=b;
		b=c;
		i=i+1;
	}
	return 0;
}
