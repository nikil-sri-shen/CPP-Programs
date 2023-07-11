#include<stdio.h>
#define PI 3.14
int main()
{
	float r,AREA;
	printf("\t***TO FIND THE AREA OF THE CIRCLE***");
	printf("\nEnter the radius of the cricle:");
	scanf("%f",&r);
	AREA=PI*r*r;
	printf("\nThe area of the cricle is %f",AREA);
	return 0;
}
