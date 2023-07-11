#include<stdio.h>
int main()
{
	int x;
	printf("\t***TO FIND THE NUMBER IS ODD OR EVEN***");
	printf("\nEnter the number:");
	scanf("%d",&x);
	if(x%2==0)
		printf("\nThe number %d is even",x);
	else
		printf("\nThe number %d is odd",x);
	return 0;
}

