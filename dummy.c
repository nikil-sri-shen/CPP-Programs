#include <stdio.h>
int main()
{
	int x;
	int *ptr;
	x=10;
	ptr=&x;
	*ptr=154510;
	printf("%d%d",x,*ptr);
	return 0;
}
