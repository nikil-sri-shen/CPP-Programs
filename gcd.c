#include <stdio.h>
void gcd(int ,int);
int main()
{
	int x,y;
	printf("Enter the two numbers");
	scanf("%d%d",&x,&y);
	gcd(x,y);
	return 0;
}
void gcd(int a,int b)
{
	if(b==0)
		printf("%d",a);
	else if(a==b)
		printf("%d",a);
	else
		gcd(b,a%b);
}
