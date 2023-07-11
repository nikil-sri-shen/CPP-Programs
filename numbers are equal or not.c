#include <stdio.h>
int main()
{
	int x,y;
	printf("\tTO FIND THE NUMBER IS EQUAL OR NOT");
	printf("\nEnter the numbers to be compared:");
	scanf("%d%d",&x,&y);
	if(x==y)
		printf("The numbers %d and %d are equal",x,y);
	else 
		printf("The numbers %d and %d are not equal",x,y);
	return 0;
}
