#include <stdio.h>
int main() 
{
   int a[100], i, num, largest;
   printf("\nEnter no of elements :");
   scanf("%d", &num);
   printf("\nEnter the elements:");
   for (i = 0; i < num; i++)
      scanf("%d", &a[i]);
   largest = a[0];
   for (i = 0; i < num; i++) 
   {
      if (a[i] > largest) 
	  {
         largest = a[i];
      }
   }
   printf("\nlargest Element : %d", largest);
 
   return (0);
}
