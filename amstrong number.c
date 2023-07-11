#include <stdio.h>
#include<math.h>
int main()
{
	int n,temp,sum,d,count=0;
	printf("\t***TO FIND AMSTRONG NUMBER***");
	printf("\nEnter the number:");
	scanf("%d",&n);
	temp=n;
	while(temp>0)
	{
		temp=temp/10;
		count=count+1;
	}
	printf("\nNumber of digit in the given number is %d",count);
	temp=n;
	sum=0;
	while(temp>0)
	{
		d=temp%10;
		sum=sum+pow (d,count);
		temp=temp/10;
	}
	printf("\nThe number sumed up with power is %d",sum);
	if(sum==n)
		printf("\nSo the given number is palindrome");
	else
		printf("\nSo the given number is not palindrome");
}

