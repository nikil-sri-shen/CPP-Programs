#include <stdio.h>
int main()
{
	int x[100],i,j,n,temp;
	printf("\nEnter no of elements to be entered");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&x[i]);
	for(i=0;i<=n-2;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(x[i]>x[j])
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("\t%d",x[i]);
	return 0;
}
