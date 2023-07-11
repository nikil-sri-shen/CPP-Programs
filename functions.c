#include <stdio.h>
void findSum();
int main()
{
	findSum();
	

}

void findSum()
{
	int a,b,c;
	printf("Enter two numbers to get added:");
	scanf("%d%d",&a,&b);
	c = a + b;
	printf("the sum is %d",c);
	
}
