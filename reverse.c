#include <stdio.h>
int main()
{
	int n,temp,d,rev=0;
	printf("***\tTO PRINT REVERSE OF A NUMBER***");
	printf("\nEnter the number:");
	scanf("%d",&n);
	temp=n;
	while(temp>0)
	{
		d=temp%10;
		rev=rev*10+d;
		temp=temp/10;
	}
	printf("%d",rev);
}
