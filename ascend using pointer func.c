#include<stdio.h>
#include<stdlib.h>
void ascend(int *,int);
int main()
{
	int *a;
	int n,i;
	printf("\t***TO FIND ASCENDING ORDER USING POINTER***\n");
	printf("\nEnter no of elements:");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("\nEnter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	ascend(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	free(a);
	a=NULL;
	return 0;
}
void ascend(int *x,int k)
{
	int i,j,temp;
	for(i=0;i<=k-2;i++)
	{
		for(j=i+1;j<=k-1;j++)
		{
			if(x[i]>x[j])
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
}
