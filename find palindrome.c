#include <stdio.h>
int main()
{
	int n,temp,d,rev=0;
	printf("\t***TO FIND PALINDROME***");
	printf("\nEnter the number:");
	scanf("%d",&n);
	temp=n;
	while(temp>0)
	{
		d=temp%10;
		rev=rev*10+d;
		temp=temp/10;
	}
	if(n==rev)
		printf("\nThe given number %d is palindrome.",n);
	else
		printf("\nThe given number %d is not a palindrome.",n);
	return 0;
}

