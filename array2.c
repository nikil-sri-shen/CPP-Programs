#include <stdio.h>
int main()
{ 
	int x[10],i,n;
	printf("\nEnter how many have to be entered:");
	scanf("%d",&n);
	printf("\nEnter the values:");
	for(i=0;i<n;i++)
	{
	 scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++)
	{
	if(x[i]%2!=0)
	printf("\n%d",x[i]);
	}
	return 0;
}
