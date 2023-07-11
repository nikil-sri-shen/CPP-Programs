#include <stdio.h>
int sum(int);
int main()
{
	int x,y;
	printf("\t***TO PRINT SUM OF N TERMS***");
	printf("\nEnter the nth number:");
	scanf("%d",&x);
	y=sum(x);
	printf("\nThe sum of the series is %d",y);
	return 0;
}
int sum(int n)
{
	int i,sum=0;
	for(i=1;i<=n;i=i+2)
	{
		sum=sum+i;
	}
	return sum;
}
