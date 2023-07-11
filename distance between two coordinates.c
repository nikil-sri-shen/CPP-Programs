#include <stdio.h>
#include<math.h>
int main()
{
	int X1,X2,Y1,Y2,SUM;
	float D;
	printf("\t***TO FIND THE DISTANCE BETWEEN TWO COORDINATES***");
	printf("\nEnter the first coordinates(X1,Y1):");
	scanf("%d%d",&X1,&Y1);
	printf("\nEnter the second coordinates(X2,Y2):");
	scanf("%d%d",&X2,&Y2);
	SUM=(X1-X2)*(X1-X2)+(Y1-Y2)*(Y1-Y2);
	D=sqrt(SUM);
	printf("\nThe distance between the two coordinates is %f",D);
	return 0;
}
