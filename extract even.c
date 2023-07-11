#include <stdio.h>
int main()
{
	int x[100],y[100],n,i,j,sum,avg;
	printf("\nHow much elements has to be entered?");
	scanf("%d",&n);
	printf("\nEnter the elements:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++);
	{
		if(x[i]/2==0)
		for(j=0;j<=i;j++)
		{
			y[j]=x[i];
		}
	}
	for(j=0;j<n;j++)
	printf("\n%d",y[j]);
	return 0;
}

