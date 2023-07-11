#include <stdio.h>
void swap(int *,int *);
int main()
{
	int x,y;
	printf("\t****TO SWAP TWO NUMBERS USING POINTERS***");
	printf("\nEnter the two numbers:");
	scanf("%d%d",&x,&y);
	printf("\nBefore swaping (%d,%d)",x,y);
	swap(&x,&y);
	printf("\nAfter swaping (%d,%d)",x,y);
	return 0;
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
