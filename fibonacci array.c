#include <stdio.h>
int main() 
{
    int i,j,n, t1 = 0, t2 = 1, nextTerm,x[100];
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; ++i)
	{
        printf("%d, ", t1);
        for(j = 1;j<=n; j++)
        {
        	x[j]=t1;
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
		}
	}    
	for(j=1;j<=n;j++)
	{
		printf("%d",x[j]);
	}
    return 0;
}
