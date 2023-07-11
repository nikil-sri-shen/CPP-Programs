#include<stdio.h>
void prime();
int main()
{
	prime();
	return 0;
}
void prime()
{
	int n,i,j,c;
	printf("Enter the nth number:");
	scanf("%d",&n);
	printf("\nThe prime numbers are");
	for(i=2;i<=n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(i%j==0)
				c++;
		}
		if(c==2)
		printf("%d",i);
	}
}
