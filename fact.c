#include <stdio.h>
int fact(int);
int main()
{
	int x,y;
	printf("\t***TO PRINT FACTORIAL OF A NUMBER***");
	printf("\nEnter the number:");
	scanf("%d",&x);
	y=fact(x);
	printf("\nThe factorial of a number is %d",y);
	return 0;
}
int fact(int n)
{
	int prd=1,i=1;
	for(i=1;i<=n;i++)
	{
		prd=prd*i;
	}
	return prd;
}
