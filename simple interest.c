#include<stdio.h>
int main()
{
	int p,n;
	float r,SI;
	printf("\t***TO FIND THE SIMPLE INTREST***");
	printf("\nEnter the principle amount:");
	scanf("%d",&p);
	printf("\nEnter the time period:");
	scanf("%d",&n);
	printf("\nEnter the intrest:");
	scanf("%f",&r);
	SI=(p*n*r)/100;
	printf("\nThe simple intrest is:%f",SI);
	return 0;
}
