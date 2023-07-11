#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a;
	int n,i,j,temp;
	printf("\t***TO FIND ASCENDING ORDER USING POINTER***\n");
	printf("\nEnter no of elements:");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("\nEnter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-2;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	free(a);
	a=NULL;
	return 0;
}
