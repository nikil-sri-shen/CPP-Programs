#include <stdio.h>
int main() 
{
   int a[100], i, num, smallest,largest,sum=0;
   printf("\t***TO FIND SMALLEST KTH ELEMENT IN AN ARRAY***");
   printf("\nEnter no of elements :");
   scanf("%d", &num);
   printf("\nEnter the elements:");
   for (i = 0; i < num; i++)
    {
		scanf("%d", &a[i]);
	}
	smallest = a[0];
   for (i = 0; i < num; i++) 
   {
      if (a[i] < smallest) 
	  {
         smallest = a[i];
      }
   }
   printf("\nSmallest Element : %d", smallest);
   	largest = a[0];
   for (i = 0; i < num; i++) 
   {
      if (a[i] > largest) 
	  {
    	largest = a[i];
      }
   }
   printf("\nLargest Element : %d", largest);
   for (i = 0; i < num; i++) 
   {
       sum= sum+a[i]; 
   }
   printf("\nThe sum of all elements is %d",sum);
   return 0;
}
