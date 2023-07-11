#include <stdio.h>
#include<string.h>
int main() 
{
   char str1[100], str2[100];
   int i,x,y;
   printf("\nEnter two strings :");
   gets(str1);
   gets(str2);
   x=strlen(str1);
   y=strlen(str2);
   i=0;
   if(x==y && str1[i]!='\0')
   {
		if(str1[i]>str2[i])
   		{
		    printf("\n string1 is greater than string2");
   		}
   		else if(str1[i]<str2[i])
   		{
   			printf("\n string1 is less than string2");
		}
		else
			printf("\n string1 is equal to string2");
   }
   else
		printf("\n string1 is not equal to string2");
   return 0;
}
   
   
