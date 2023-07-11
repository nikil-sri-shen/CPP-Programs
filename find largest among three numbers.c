#include <stdio.h>
int main()
{
	int a,b,c;
	printf("\t***TO LARGEST AMONG THREE NUMBERS***");
	printf("\nEnter the first number:");
	scanf("%d",&a);
	printf("\nEnter the second number:");
	scanf("%d",&b);
	printf("\nEnter the third number:");
	scanf("%d",&c);
	a>b?(a>c?printf("\n %d is largest.",a):printf("\n %d is largest.",c)):(b>c?printf("\n %d is largest.",b):printf("\n %d is largest.",c));
	return 0;
}
