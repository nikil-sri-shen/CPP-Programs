#include <stdio.h>
int main()
{ 
	int x[10],i,n,y;
	printf("\nEnter how many have to be entered:");
	scanf("%d",&n);
	printf("\nEnter the values:");
	for(i=0;i<n;i++)
	{
	 scanf("%d",&x[i]);
	}
	printf("Enter the number to searched for:");
	scanf("%d",&y);
	for(i=0;i<n;i++)
	{
	if(x[i]==y)
	{
	printf("%d\n",x[i]);
	printf("\nThe number is found");
	exit(0);
	}
	}
	printf("\nthe number is not found");
	return 0;
}
