#include <stdio.h>
int main()
{
	int x[100],n,i,sum,avg;
	printf("\nHow much elements has to be entered?");
	scanf("%d",&n);
	printf("\nEnter the elements:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x[i]);
		sum=sum+x[i];
	}
	avg=(sum/n);
	printf("The average of the elements is %d",avg);
	return 0;
}
