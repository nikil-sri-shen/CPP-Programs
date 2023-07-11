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
	 x[i]=x[i]+5;
	}
	for(i=0;i<n;i++)
	printf("%d\n",x[i]);
	return 0;
}
