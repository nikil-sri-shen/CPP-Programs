#include <stdio.h>
int main()
{
	float x;
	printf("\t***TO FIND A NUMBER IS ZERO,POSITIVE OR NEGATIVE***");
	printf("\nEnter the number:");
	scanf("%f",&x);
	if(x>0)
		printf("\nThe number %f is positive",x);
	else if(x<0)
		printf("\nThe number %f is negative",x);
	else
		printf("\nThe number %f is zero",x);
	return 0;
}
