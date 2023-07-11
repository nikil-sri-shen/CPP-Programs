 /*#include <stdio.h>
int main()
{
	int a,b,temp;
	a=10,b=15;
	temp=a;
	a=b;
	b=temp;
	printf("%d",a);
	printf("\n%d",b);
	return 0;
} 
#include <stdio.h>
int main()
{
    int x = 10, y = 5;
 
    // Code to swap 'x' and 'y'
    x = x + y; // x now becomes 15
    y = x - y; // y becomes 10
    x = x - y; // x becomes 5
 
    printf("After Swapping: x = %d, y = %d", x, y);
 
    return 0;
}*/
#include <stdio.h>
int main()
{
    int x = 10, y = 5;
 
    // Code to swap 'x' and 'y'
    x = x * y; // x now becomes 50
    y = x / y; // y becomes 10
    x = x / y; // x becomes 5
 
    printf("After Swapping: x = %d, y = %d", x, y);
 
    return 0;
}
