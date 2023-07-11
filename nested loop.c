#include <stdio.h>
int main()
{
	int i,j,m,n;
	scanf("%d%d",&m,&n);
	i=1;
	while(i<=m)
	{
		j=1;
		while(j<=n)
		{
			printf("\t%d",j);
			j=j+1;
		}
	printf("\n");
	i=i+1;	
	}
	return 0;
}

