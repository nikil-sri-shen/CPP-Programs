#include <stdio.h>
int main()
{
	int x,y,SUM;
	float AVG;
	printf("\t***TO FIND THE AVERAGE OF TWO NUMBERS***");
	printf("\nEnter the two number:");
	scanf("%d%d",&x,&y);
	SUM=x+y;
	AVG=(float)SUM/2;
	printf("\nThe average of the two numbers is %f",AVG);
	return 0;
}
